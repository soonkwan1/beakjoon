#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
pair<int, int> dpMax(){
    int n; cin >> n;
    int t1, t2, t3; cin >> t1 >> t2 >> t3;
    int r1, r2, r3;
    int r4, r5, r6;
    int max_list[3] = {t1, t2, t3};
    int min_list[3] = {t1, t2, t3};
    for (int i=1; i<n; i++){
        cin >> t1 >> t2 >> t3;
        
        r1 = max(max_list[0], max_list[1]);
        r2 = max(max_list[0], max(max_list[1], max_list[2]));
        r3 = max(max_list[1], max_list[2]);

        r4 = min(min_list[0], min_list[1]);
        r5 = min(min_list[0], min(min_list[1], min_list[2]));
        r6 = min(min_list[1], min_list[2]);
        
        max_list[0] = t1 + r1;
        max_list[1] = t2 + r2;
        max_list[2] = t3 + r3;
        min_list[0] = t1 + r4;
        min_list[1] = t2 + r5;
        min_list[2] = t3 + r6;
    }

    return make_pair(max(max_list[0], max(max_list[1], max_list[2])), min(min_list[0], min(min_list[1], min_list[2])));
}
void INPUT(){
    pair<int, int> result = dpMax();
    cout << result.first << " " << result.second << "\n";
}
int main(){
    INIT();
    INPUT();
    return 0;
}