#include <bits/stdc++.h>
using namespace std;

bool can(long long t,vector<long long> &a,long long x ,long long k){
	if(t==0) return (x+1)>=k;
	vector<pair<long long,long long>> v;
	for(auto i:a){
		long long l=max(0LL,i-t+1),r=min(x,i+t-1);
		if(l<=r) v.push_back({l,r});
	}
	if(v.empty()) return (x+1)>=k;
	sort(v.begin(),v.end());
	vector<pair<long long,long long>> m;
	for(auto p:v){
		long long l=p.first,r=p.second;
		if(m.empty()||l>m.back().second+1) m.push_back({l,r});
		else m.back().second=max(m.back().second,r);
	}
	long long tot=x+1;
	for(auto p:m) tot-=(p.second-p.first+1);
	return tot>=k;
}





vector<long long> build(long long t , vector<long long>& a , long long x , long long k ){

    vector<pair<long long,long long>> vec ;
    for(auto i:a){
        long long l = max(0LL , i-t+1) , r = min(x , i+t-1) ;
        if(l<=r) vec.push_back({l,r}) ;
    }
    sort(vec.begin(),vec.end()) ;
    vector<pair<long long,long long>> m ;
    for(auto p:vec){
        long long l=p.first , r=p.second ;
        if(m.empty() || l>m.back().second+1) m.push_back({l,r}) ;
        else m.back().second = max(m.back().second , r) ;
    }
    vector<long long> ans ;
    long long prev = -1 ;
    for(auto p:m){
        long long l=p.first , r=p.second ;
        for(long long pos=prev+1; pos<l && ans.size()<k ; pos++) ans.push_back(pos) ;
        prev=r ;
    }

    for(long long pos=prev+1; pos<=x && ans.size()<k ; pos++) ans.push_back(pos) ;

    for(long long pos=0; pos<=x && ans.size()<k ; pos++)
        if(find(ans.begin(),ans.end(),pos)==ans.end()) ans.push_back(pos) ;

    return ans ;
}





int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt; cin >> tt;

    while(tt--){
        long long n,k,x;
        cin>>n>>k>>x;

        vector<long long> a(n);
        for(auto &i:a)cin>>i;

        sort(a.begin(),a.end());

        long long lo=0,hi=x+1,best=0;

        while(lo<=hi){
            long long mid=(lo +hi)/2 ;
            if(can(mid,a,x,k)){
                best=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        vector<long long> vec = build(best ,a,x,k) ;
        for(int i=0;i<k;i++)cout<<vec[i]<<" ";
        cout<<endl;
    }

    return 0 ;
}
