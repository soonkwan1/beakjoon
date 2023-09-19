#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    priority_queue<pair<int, int> > pq;

    int n; cin >> n;
    int tmp;
    for (int i=0; i<n; i++){
        cin >> tmp;
        if (tmp == 0){
            if (pq.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << - pq.top().second << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(make_pair(-abs(tmp), -tmp));
        }

    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}