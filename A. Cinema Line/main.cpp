#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long > vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    long long cn25=0 , cn50=0 , cn75=0;
    bool ans=1;
    for(long long i=0 ;i<n;i ++){
        if(vec[i]==25){
            cn25++;
        }
        else if(vec[i]==50){
            if(cn25<=0){
                ans=0;
                break;
            }
            cn25--;
            cn50++;
        }
        else if(vec[i]==75){
            if((cn50<=0)&&(cn25>=2)){
                cn25-=2;
                cn50++;
            }
            if(cn50<=0){
                
                ans=0;
                break;
            }
            cn50--;
            cn75++;
        }
        else if(cn75<=0){
            if((cn50>0)&&(cn25>0)){
                cn50--;
                cn25--;
            }
            else if(cn25>2){
                cn25-=3;
            }
            else {
                ans=0;
                break;
            }
            
        }
    }
    if(ans)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    
}