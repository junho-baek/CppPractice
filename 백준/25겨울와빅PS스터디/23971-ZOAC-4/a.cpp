#include <bits/stdc++.h>
using namespace std;
//행, 열, 세로칸, 가로칸
int H, W, N, M;
int main(){
    cin >> H >> W >> N >> M;
    //나는 자료구조를 잘 모르니깐 일단 그리디하게 풀어보자
    //앉을 수 있으면 앉는게 좋은거잖아(앉을 수 있는칸 1칸 + 앉을 수 없는 칸 N 이렇게 짝을 지어서 전체칸을 나누자 //그리고 올림을 하자? 왜냐하면 소숫점 => 남는 칸이 있다 => 앉는 것이 무조건 유리하다 => 올림) (수용가능 칸 / (앉을 수 있는 칸 1 + 앉을 수 없는 칸))
    cout << (int)ceil(H/(double)(N+1)) * ceil(W/(double)(M+1)) << "\n";
    return 0;
}
