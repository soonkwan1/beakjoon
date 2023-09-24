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
int findMaxIdx(int* c, int n){
    int max = 0;
    int idx = 0;
    for (int i=0; i<n; i++){
        if (c[i] >= max){
            idx = i;
            max = c[i];
        }
    }
    return idx;
}
void INPUT(){
    int n; cin >> n;
    int* candidates = new int[n];
    for (int i=0; i<n; i++){
        cin >> candidates[i];
    }

    int res = 0;
    while (1){
        int idx = findMaxIdx(candidates, n);
        if (idx == 0){
            cout << res << "\n";
            break;
        }
        candidates[0]++;
        candidates[idx]--;
        res++;
    }

    delete[] candidates;
}

int main(){
    INIT();
    INPUT();
    return 0;
}