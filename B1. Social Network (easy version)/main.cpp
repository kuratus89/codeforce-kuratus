#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ; i<n;  i++)cin>>vec[i];
    deque<long long> de;
    map<long long , long long> ma;
    for(long long i=0 ; i<n ; i++){
        if(ma[vec[i]])continue;
        if(de.size()<k){
            de.push_front(vec[i]);
            ma[vec[i]]=1;
            continue;
        }
        de.push_front(vec[i]);
        ma[vec[i]]=1;
        ma[de.back()]=0;
        de.pop_back();
    }
    cout<<de.size()<<endl;
    while(!de.empty()){
        cout<<de.front();
        de.pop_front();
        cout<<" ";
    }
    
    
}