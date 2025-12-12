#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long tt;cin>>tt;
    while(tt--){
        long long a,b;cin>>a>>b;
        vector<long long> x,s;
        while(a){
            x.push_back(a%10);
            a/=10;
        }
        while(b){
            s.push_back(b%10);
            b/=10;
        }
        if(x.size()>s.size()){
            cout<<-1<<endl;
            continue;
        }
        reverse(x.begin() , x.end());
        reverse(s.begin() ,s.end());
        
        bool re=1;
        vector<long long> ans;
        while((x.size())&&(s.size())){
            if(x.back()==s.back()){
                ans.push_back(0);
                s.pop_back();
                x.pop_back();
            }
            else if(x.back()<s.back()){
                ans.push_back((s.back() - x.back()));
                x.pop_back();
                s.pop_back();
            }
            else{
                long long he = s.back();
                s.pop_back();
                if((s.size()==0)||(((s.back()*10)+he)>18)){
                    re=0;
                    break;
                }
                ans.push_back(((s.back()*10)+he)- x.back());
                s.pop_back();
                x.pop_back();
            }
        }
        if(x.size())re=0;
        while(s.size()){
            ans.push_back(s.back());
            s.pop_back();
        }
        if(re){
            reverse(ans.begin() , ans.end());
            bool z=1;
            for(long long val:ans){
                if(z&&(val==0))continue;
                else z=0;
                cout<<val;
            }
            cout<<endl;

        }
        else cout<<-1<<endl;

    }
    
}