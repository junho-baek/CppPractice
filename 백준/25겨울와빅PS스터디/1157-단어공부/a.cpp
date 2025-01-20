#include <bits/stdc++.h>
using namespace std;
string s;
map<char, int> mp;

bool nested = false;
int maxInt = 0;
char maxChar;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> s;
    for(char i : s){
        mp[toupper(i)]++;
    };
    for(auto i :mp){
        if(maxInt < i.second){
            nested = false;
            maxInt = i.second;
            maxChar = i.first;
        }
        else if(maxInt == i.second){
            nested = true;
        }
    } 

    if(nested){
        cout << "?" << "\n";
    }
    else{
        cout << maxChar << "\n";
    }
    return 0;
}