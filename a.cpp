#include <bits/stdc++.h>
using namespace std;
int a[3] = { 23, 13, 11};
int main(){
    //포인터 선언/ 할당을 a 라는 array이름으로 하면..?
    int *c = a;
    cout << c << "\n";
    cout << &a[0] << "\n"; // array to pointer decay 현상. 어레이의 첫번째 요소의 주소값이 선언된 c에 할당됌.
    cout << *c << "\n"; // 역참조로 어떤 값이 들어있는지 확인 // 23이 들어가 있음
    cout << *(c+1) << "\n"; // 그 다음 것은 13..!
}