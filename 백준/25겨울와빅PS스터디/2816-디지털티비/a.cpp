#include <bits/stdc++.h>
using namespace std;
int a;
int cnt1, cnt2;
string r;
int main(){
    cin >> a;
    string s[a];
    
    for(int i = 0; i < a; i++){
        cin >> s[i]; 
        if(s[i] == "KBS1"){
            cnt1 = i;
        }
        if(s[i] == "KBS2"){
            cnt2 = i;
        }
    }
    
    if(cnt1 > cnt2){
        for(int i = 0 ; i < cnt1 ; i++){
            r += "1";
        }
        for(int i = 0 ; i < cnt1 ; i++){
            r += "4";
        }
        for(int i = 0 ; i < cnt2 + 1 ; i++){
            r += "1";
        }
        for(int i = 0 ; i < cnt2 ; i++){
            r += "4";
        }
    }
    if(cnt1 < cnt2){
        for(int i = 0 ; i < cnt1 ; i++){
            r += "1";
        }
        for(int i = 0 ; i < cnt1 ; i++){
            r += "4";
        }
        for(int i = 0 ; i < cnt2 ; i++){
            r += "1";
        }
        for(int i = 0 ; i < cnt2 - 1 ; i++){
            r += "4";
        }
    }
    cout << r << "\n";
    return 0;
}