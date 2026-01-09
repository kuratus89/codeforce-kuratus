#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    string a,b;cin>>a>>b;
    vector<long long>x,y;
    for(auto val:a){
        x.push_back(val -'0');
    }
    for(auto val:b){
        y.push_back(val -'0');
    }
    long long ans2=0;
    sort(x.begin() , x.end());
    sort(y.begin() , y.end());
    stack<long long> f,g;
    for(auto val:x)f.push(val);
    for(auto val:y)g.push(val);
    stack<long long> ma=f,mb=g;
    while(!f.empty()){
        if(g.top()>f.top()){
            g.pop();
            ans2++;
        }
        f.pop();    
    }
    long long ans=0;
    while((!ma.empty())&&(!mb.empty())){
        if(ma.top()<=mb.top()){
            ma.pop();
            mb.pop();
        }
        // else if(ma.top()>mb.top()){
        else{
            ans++;
            ma.pop();
        }
    }   
    cout<<ans<<endl;
    cout<<ans2;
    
}