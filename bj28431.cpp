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
    int visit[10]; fill_n(visit, 10, 0);

    int ans = 0;
    for (int i=0; i<5; i++){
        int tmp; cin >> tmp;
        if (visit[tmp]) visit[tmp] = 0;
        else visit[tmp]++;
    }

    for (int i=0; i<10; i++){
        if (visit[i] == 1){
            cout << i << endl;
            continue;
        }
    }
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}