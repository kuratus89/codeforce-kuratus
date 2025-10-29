#include <bits/stdc++.h>
using namespace std;
long long apple(long long i , vector<bool> &seen , string s){
    if((i>=s.size()))return 0;
    seen[i]=1;
    if(s[i]=='1')return 0;
    else return (apple(i+1 , seen , s)+1);
}

// bool orange(long long val,long long m , long long k , long long mid){
//     val -=k*mid;
//     // if(val<=m)return 1;
//     if(val < m) return 1;
//     return ((val/(mid+1))<m);
//     // return ((val + mid) / (mid+1) < m);

// }

// long long bs(long long val,long long m , long long k){
//     long long low=0,high=val,mid;
//     while(low<high){
//         mid = (high+low)/2;
//         if(orange(val , m , k , mid)){
//             high=mid;
        
//         }
//         else {
//             low=mid+1;
            
//         }

//     }
//     return low;
// }
long long orange(long long val , long long m , long long k){
    long long i=0;
    long long ans=0;
    while(val>0){
        i++;
        if(i==m){
            i=0;
            val-=k;
            ans++;
    
        }
        val--;
    }
    return ans;
}


// long long orange(long long val, long long m, long long k) {
//     if(val < m) return 0;
//     return (val - m) / k + 1; // number of operations
// }


int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n,m,k;cin>>n>>m>>k;
        string s;cin>>s;
        vector<bool> seen(n , 0);
        vector<long long> ans;
        for(long long i =0 ; i<n ; i++){
            if((seen[i])||(s[i]=='1'))continue;
            ans.push_back(apple(i , seen , s));
        }
        long long ra=0;
        for(auto val:ans){
            if(val<m)continue;
            ra+=orange(val ,m ,k);
        }
        cout<<ra<<endl;
    }
    

}   
