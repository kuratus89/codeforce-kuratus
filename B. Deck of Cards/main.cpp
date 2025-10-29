#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        string s;cin>>s;
        long long z=0,o=0,t=0;
        for(auto val:s){
            if(val=='0')z++;
            else if(val=='1')o++;
            else t++;
        }
        vector<char> vec(n , '+');
        for(long long i=0 ; i<z ; i++)vec[i]='-';
        for(long long i=n-1 ; i>=(n-o)  ; i--)vec[i]='-';
        long long i=z,j=n-o-1;
        while((t--)&&(i<=j)){
            vec[i]='?';
            vec[j]='?';
            i++;
            j--;
        }
        if(n==k)for(auto &val:vec)val='-';
        for(auto val:vec)cout<<val;
        cout<<endl;
    }
}