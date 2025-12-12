#include <bits/stdc++.h>
using namespace std;

bool apple(string s , long long k){
    vector<long long> vec(3,0);
    queue<long long> qe;
    for(auto val:s){
        if(val=='1'){
            vec[0]++;
            qe.push(0);
        }
        else if(val=='2'){
            vec[1]++;
            qe.push(1);
        }
        else if(val=='3'){
            vec[2]++;
            qe.push(2);
        }
        if(qe.size()>k){
            vec[qe.front()]--;
            qe.pop();
        }
        if((vec[0]>0)&&(vec[1]>0)&&(vec[2]>0))return 1;
    }
    return (vec[0]>0)&&(vec[1]>0)&&(vec[2]>0);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        string s;cin>>s;
        long long n = s.size();
        long long a=0 , b=0 , c=0;
        for(auto val:s){
            if(val=='1')a++;
            else if(val=='2')b++;
            else if(val=='3')c++;
        }
        if((a==0)||(b==0)||(c==0)){
            cout<<0<<endl;
            continue;
        }
        long long low = 0 , high = n , mid;
    
        while(low<high){
            mid = (low+high)/2;
            if(apple(s , mid))high = mid;
            else low=mid+1;
        }
        cout<<low<<endl;
    }
    
    
}