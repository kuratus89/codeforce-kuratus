#include <iostream>
#include <vector>
using namespace std;
bool prob(long long n , long long t){
    if(n==t) return true;
    if(t>n) return false;
    return (prob(n,(t*10)) || prob(n,(t*20)));
}
int main(){
    int t; cin>>t;
    vector<long long> vec(t);
    for(int i=0 ; i<t ; i++) cin>>vec[i];
    for(auto val:vec){
        if(prob(val,1)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}