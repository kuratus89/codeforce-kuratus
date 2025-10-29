#include <bits/stdc++.h>
using namespace std;
vector<long long> fac(long long n) {
    vector<long long> factors;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i)
                factors.push_back(n / i);
        }
    }
    return factors;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        long long g=vec[0];
		for(int i=1;i<n;i++){
			g=gcd(g,vec[i]);

		}
		if(g==1){
			cout<<2<<endl;
			continue;

		}
		set<long long>pe;
		long long tp=g;
		for(long long i=2;i*i<=tp;i++){
			if(tp%i==0){
				pe.insert(i);
				while(tp%i==0)tp/=i;

			}
		}
		if(tp>1)pe.insert(tp);
		long long ans=-1;
		for(long long x=2;x<=1e6;x++){
			bool fou=1;
			for(auto val:pe){
				if(x%val==0){
					fou=0;
					break;

				}
			}
			if(fou){
				ans=x;
				break;

			}
		}
		cout<<ans<<endl;
    }
    
    
}