#include <bits/stdc++.h>
using namespace std;
int N;

string v = "00000000000000000000";

void add(string& s, int e){
    s[e - 1] = '1';
}
void remove(string& s, int e){
    s[e - 1] = '0';
}


void check(string& s, int e){
    cout << s[e-1] - '0' << "\n";
}

void toggle(string& s, int e){
    if(s[e-1] == '1'){
        s[e-1] = '0';
    }else{
        s[e-1] = '1';
    }
}
void all(string& s){
    s = "11111111111111111111";
}

void empty(string& s){
    s = "00000000000000000000";
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    int e;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;

        if(s == "add") {
            cin >> e;
            add(v, e);
            // cout << v << "\n";
            }
        else if(s == "remove"){
            cin >> e;
            remove(v, e);
            // cout << v << "\n";
        }
        else if(s == "check") {
            cin >> e;
            check(v, e);
            // cout << v << "\n";
            }
        else if(s == "toggle") {
            cin >> e;
            toggle(v, e);
            // cout << v << "\n";
        }
        else if(s == "all") {
            all(v);
            // cout << v << "\n";
            }
        else if(s == "empty") {
            empty(v);
            // cout << v << "\n";
        }
    }
    return 0;
}