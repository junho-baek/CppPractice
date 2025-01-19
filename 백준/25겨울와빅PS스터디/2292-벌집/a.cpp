#include <bits/stdc++.h>
using namespace std;
double N;
int k = 1;
int main(){
    cin >> N;
    while((N-1)/3 > (k) * (k-1)){
        k++;
    }
    cout << k <<"\n";
    return 0;
}