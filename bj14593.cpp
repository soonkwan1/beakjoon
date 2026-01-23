#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

struct score {
    int s, c, l,ord;
};


bool compare(score a, score b) {
    if (a.s == b.s && a.c == b.c ) return a.l < b.l; 
// 점수의 총합과 제출 횟수가 같은 경우, 
// 마지막으로 점수를 획득한 문제의 업로드 시간이 빠른 참가자가 더 높은 순위를 가진다.
    if (a.s == b.s ) return a.c < b.c;  
 // 점수의 총합이 같은 경우, 제출 횟수가 적은 참가자가 더 높은 순위를 가진다.
    return a.s > b.s;   
// 해결한 문제 점수의 총합이 높은 참가자가 더 높은 순위를 가진다.
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<score> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].s >> v[i].c >> v[i].l;
        v[i].ord = i+1;
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0].ord;
    
    return 0;
}
