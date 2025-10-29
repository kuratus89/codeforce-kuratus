#include <bits/stdc++.h>
using namespace std;

// long long orange(long long a , long long b  , long long c , long long t){
//     if(a>t)return 0;
//     pair<long long  ,  long long>  n ={(a*b)+c,b};
//     pair<long long , long long> ans = {0,0};
//     while(ans.first+n.first<=t){
//         ans.first+=n.first;
//         ans.second+=n.second;
//     }
//     while(ans.first+a<=t){
//         ans.first+=a;
//         ans.second++;
//     }
//     return ans.second;
    

// }
long long orange(long long a , long long b , long long c , long long t){
    if(a>t)return 0;
    pair<long long , long long> n ={(a*b)+c,b};
    pair<long long , long long> m = {(t/n.first)*n.first ,n.second*(t/n.first) };
    long long tle = t - m.first;
    if(tle>=b)m.second+=min(b*a , a*(tle/a));
    return m.second;
}

// long long orange(long long a, long long b, long long c, long long t){
//     if(t < a) return 0;
//     long long cycle_time = a*b + c;
//     long long full_cycles = t / cycle_time;
//     long long rem_time = t % cycle_time;
//     long long total = full_cycles * b + min(b, rem_time / a);
//     return total;
// }

pair<long long , vector<long long >> apple(long long n ,vector<vector<long long>> &vec , long long t){
    long long ans=0;
    vector<long long> ano(vec.size());
    // for(vector val:vec)ans+=orange(val[0] , val[1] , val[2] , t);
    for(long long i=0 ; i<vec.size()  ; i++){
        long long num = orange(vec[i][0] , vec[i][1] , vec[i][2] , t);
        ans+=num;
        ano[i] = num;
    }
    pair<long long , vector<long long >> answer = {ans ,ano} ;
    return (answer);
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long n,m;cin>>n>>m;
    vector<vector<long long>> vec(m  , vector<long long > (3));
    for(long long i=0 ; i<m ; i++)cin>>vec[i][0]>>vec[i][1]>>vec[i][2];
    long long low = 0  , high = LLONG_MAX , mid  ;
    pair<long long , vector<long long >> ans ;
    while(low<high){
        mid = (low+high)/2;
        // mid = low + (high - low) / 2;
        pair<long long , vector<long long >> ano =apple(n , vec , mid);
        if(ano.first>=n){
            high = mid;
            ans=ano;
        }
        else low = mid+1;
    }
    cout<<ans.first<<endl;
    for(long long val:ans.second)cout<<val<<" ";
    

}   
