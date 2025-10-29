#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    long long  i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}
int  main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long  tt; cin >> tt;
    while(tt--){
        long long  n; cin >> n;
        string s; cin >> s;
        if(palindrome(s)){
            cout << 0 << endl;
            continue;
        }
        bool fo = false;
        for(long long mask = 1; mask < (1 << n) && !fo; mask++){
            vector<long long> in;
            string removed = "";
            for(long long i = 0; i < n; i++){
                if(mask&(1<<i)){
                    in.push_back(i);
                    removed+=s[i];
                }
            }
            bool ano = true;
            for(long long  i = 1; i < removed.size(); i++){
                if(removed[i] < removed[i-1]){
                    ano = false;
                    break;
                }
            }
            if(!ano) continue;
            string rem = "";
            for(long long  i = 0; i < n; i++){
                if(!(mask & (1 << i))){
                    rem += s[i];
                }
            }
            if(palindrome(rem)){
                cout << in.size() << endl;
                for(long long  i = 0; i < in.size(); i++){
                    if(i>0)cout<<" ";
                    cout<<in[i]+1;
                }
                cout<<endl;
                fo=true;
            }
        }
        
        if(!fo){
            cout<<-1<<endl;
        }
    }
    
    return 0;
}