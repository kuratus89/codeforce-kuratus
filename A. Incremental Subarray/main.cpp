#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int>& favorite) {
    // Generate array b based on the pattern
    vector<int> b;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            b.push_back(j);
        }
    }
    
    int m = favorite.size();
    int count = 0;
    
    // Check all possible subarrays of size m
    for (int i = 0; i <= b.size() - m; i++) {
        bool match = true;
        // Compare current subarray with favorite numbers
        for (int j = 0; j < m; j++) {
            if (b[i + j] != favorite[j]) {
                match = false;
                break;
            }
        }
        if (match) count++;
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> favorite(m);
        for (int i = 0; i < m; i++) {
            cin >> favorite[i];
        }
        
        cout << solve(n, favorite) << endl;
    }
    
    return 0;
}