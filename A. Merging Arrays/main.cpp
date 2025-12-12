#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long a,b;cin>>a>>b;
    queue<long long> veca , vecb;
    for(long long i=0 ; i<a ; i++){
        long long temp;cin>>temp;
        veca.push(temp);
    }
    for(long long i=0 ; i<b ; i++){
        long long temp;cin>>temp;
        vecb.push(temp);
    }
    vector<long long> vec;
    while((!veca.empty())&&(!vecb.empty())){
        if(veca.front()<vecb.front()){
            vec.push_back(veca.front());
            veca.pop();
        }
        else {
            vec.push_back(vecb.front());
            vecb.pop();

        }
    }
    while(!veca.empty()){
        vec.push_back(veca.front());
        veca.pop();
    }
    while(!vecb.empty()){
        vec.push_back(vecb.front());
        vecb.pop();
    }
    for(long long val:vec)cout<<val<<" ";
    cout<<endl;

    
}