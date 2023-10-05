#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void Solution(){
    int n; cin >> n;
    vector<int> list;

    bool visited[1000001] = {0,};
    int score[1000001] = {0,};

    int limit = 0;
    for (int i=0; i<n; i++){
        int temp; cin >> temp;
        visited[temp] = true;
        list.push_back(temp);
        limit = max(limit, temp);
    }

    for (int i=0; i<n; i++){
        int num = list[i];

        for (int j=num*2; j<=limit; j+=num){
            if (visited[j]){
                score[num]++;
                score[j]--;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << score[list[i]] << ' ';
    }
    cout << endl;
}
int main(){
    INIT();
    Solution();
    return 0;
}