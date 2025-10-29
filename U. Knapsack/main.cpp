#include <iostream>
#include <vector>
using namespace std;

void apple(vector<pair<int,int>> &vec , int &ans , int &w , int &val , int mw , int t, int n){
    if(w>mw) return;
    if(n==t){
        ans=max(ans,val);
        return;
    }
    w+=(vec[n]).first;
    val+=(vec[n]).second;
    apple(vec , ans, w , val , mw , t ,(n+1));
    w-=(vec[n]).first;
    val-=(vec[n]).second;
    apple(vec , ans, w , val , mw , t ,(n+1));
}
int main(){
    int t; cin>>t;
    int mw; cin>>mw;
    vector<pair<int,int>> vec(t);
    for(int i=0 ; i<t ; i++){ cin>>vec[i].first; cin>>vec[i].second;}
    int ans=0; int w=0; int val=0;
    apple(vec , ans , w , val , mw , t , 0);
    cout<<ans;
    
}