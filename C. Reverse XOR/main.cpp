#include <bits/stdc++.h>
using namespace std;

long long reverseBits(long long x, int bits) {
    long long ans = 0;
    for (int i = 0; i < bits; i++) {
        if (x & (1LL << i)) {
            ans |= (1LL << (bits - 1 - i));
        }
    }
    return ans;
}

bool check(long long n, int bits) {
    // Try to construct x with 'bits' number of bits
    long long x = 0;
    
    for (int i = 0; i < bits; i++) {
        int j = bits - 1 - i; // reverse position
        
        if (i >= j) break; // middle reached
        
        // Get the required XOR result at position i and j
        bool bit_i_needed = (n >> i) & 1;
        bool bit_j_needed = (n >> j) & 1;
        
        // bit i in x XORs with bit j in x (since bit i in x becomes bit j in f(x))
        // So: x[i] XOR x[j] should equal bit_i_needed
        // And: x[j] XOR x[i] should equal bit_j_needed
        
        // Since XOR is commutative, bit_i_needed should equal bit_j_needed
        if (bit_i_needed != bit_j_needed) {
            return false;
        }
        
        // We can choose any valid combination
        // If bit_i_needed = 0, then x[i] = x[j] (both 0 or both 1)
        // If bit_i_needed = 1, then x[i] != x[j]
    }
    
    // If bits is odd, check middle bit
    if (bits % 2 == 1) {
        int mid = bits / 2;
        bool mid_bit_needed = (n >> mid) & 1;
        // Middle bit XORs with itself, so x[mid] XOR x[mid] = 0
        // This means the middle bit of n must be 0
        if (mid_bit_needed) {
            return false;
        }
    }
    
    // Now construct a valid x
    for (int i = 0; i < bits; i++) {
        int j = bits - 1 - i;
        
        if (i >= j) break;
        
        bool bit_needed = (n >> i) & 1;
        
        if (!bit_needed) {
            // x[i] = x[j], choose both 0
            // (already 0 in x)
        } else {
            // x[i] != x[j], choose x[i] = 1, x[j] = 0
            x |= (1LL << i);
        }
    }
    
    // Verify
    long long fx = reverseBits(x, bits);
    return (x ^ fx) == n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        bool found = false;
        
        
        for (int bits = 1; bits <= 30; bits++) {
            if (check(n, bits)) {
                found = true;
                break;
            }
        }
        
        if(found)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
}