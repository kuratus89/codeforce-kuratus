#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    stack<long long> vec;
    
    while(n){
        vec.push(min(n%10 , (9-(n%10))));
        n/=10;
    }
    if(vec.top()==0){
        vec.pop();
        vec.push(9);
    }
    while(!vec.empty()){
        cout<<(vec.top());
        vec.pop();
    }
    
    

    
    
}