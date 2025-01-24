#include <bits/stdc++.h>
using namespace std;
int N;
int d;
int case_num;
int total = 0;
int v[20];
int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> case_num;
        for(int j = 0; j < 20; j++){
            cin >> v[j];
        }
        for(int j = 0; j < 20; j++){
            for(int k = j - 1; k >= 0; k--){
                if(v[k] > v[j]){
                    // cout << v[j] << " "<< v[k] << " " << (v[k] > v[j]) << " " << "\n";
                    total += 1;
                }
            }
        }
        cout << case_num << " " << total << "\n";
        total = 0;
    }
    return 0;
}