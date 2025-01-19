#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main(){
    while(true){
        cin >> a >> b >> c;
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());
        if(v[0] == 0)
        {
            break;
        }
        else if (v[2] >= v[0] + v[1])
        {
            cout << "Invalid" << "\n";
        }
        else if (v[0] == v[1] && v[0] == v[2])
        {
            cout << "Equilateral" << "\n";
        }
        else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
        {
            cout << "Isosceles" << "\n";
        }
        else
        {
            cout << "Scalene"  << "\n";
        }
    }
    

    return 0;
}