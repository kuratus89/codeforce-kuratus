#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ; i++)cin>>vec[i];
    long long qq;cin>>qq;
    set<long long> ans;

    while(qq--){
        long long a;cin>>a;
        a--;
        auto it = ans.upper_bound(a);
        ans.insert(a);
        cout<<vec[(distance(ans.begin() , it)) -1 + a];
        cout<<endl;

    }
    
    
}