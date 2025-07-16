#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    int t; cin >> t;
    vector<int> score;
    for (int i=0; i<t; i++){
        int tmp; cin >> tmp;
        score.push_back(tmp);
    }
    for (int i=0; i<5-t; i++){
        score.push_back(0);
    }

    int st_id = 0;
    if (score[0] > score[2]) st_id += (score[0] - score[2]) * 508;
    else st_id += (score[2] - score[0]) * 108;

    if (score[1] > score[3]) st_id += (score[1] - score[3]) * 212;
    else st_id += (score[3] - score[1]) * 305;

    if (score[4]) st_id += score[4] * 707;

    cout << st_id * 4763 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}