#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long a,b;cin>>a>>b;
    long long ans=0;
    vector<long long > x(a) , y(b);
    for(long long i=0  ; i< a ; i++)cin>>x[i];
    for(long long i=0 ; i<b ; i++)cin>>y[i];
    long long j=0 ,i=0;
    while((i<a)&&(j<b)){
        if(x[i]>y[j])j++;
        else if(x[i]<y[j])i++;
        else{
            long long c=x[i] , xx=0 , yy=0;
            while((i<a)&&(x[i]==c)){
                xx++;
                i++;
            }
            while((j<b)&&(y[j]==c)){
                yy++;
                j++;
            }
            ans+=xx*yy;

        }
    }
    
    cout<<ans;
    
}