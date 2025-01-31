#include <bits/stdc++.h>
using namespace std;

struct Point{
    int country, x, y, z;
    Point(int country, int x, int y, int z) : country(country), x(x), y(y), z(z) {}
    Point() {country = -1; x = -1; y = -1; z = -1;}
    
    // 메달이 모두 같은지 확인하는 함수
    bool isSameRank(const Point& a) const {
        return x == a.x && y == a.y && z == a.z;
    }
    
    bool operator < (const Point & a) const {
        if(x == a.x){
            if(y == a.y){
                return z > a.z;  // 내림차순으로 변경
            }
            return y > a.y;  // 내림차순으로 변경
        }
        return x > a.x;  // 내림차순으로 변경
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, target;
    cin >> N >> target;
    
    vector<Point> v;
    int k, g, s, b;
    for(int i = 0; i < N; i++){
        cin >> k >> g >> s >> b;
        v.push_back(Point(k, g, s, b));
    }
    
    sort(v.begin(), v.end());  // 내림차순 정렬
    
    int rank = 1;
    int same_rank = 1;
    
    // target 국가의 순위 찾기
    for(int i = 0; i < N; i++) {
        if(i > 0 && !v[i].isSameRank(v[i-1])) {
            rank = i + 1;
        }
        if(v[i].country == target) {
            cout << rank << "\n";
            break;
        }
    }
    
    return 0;
} 