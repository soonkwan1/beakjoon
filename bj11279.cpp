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
    priority_queue<long long> hq;

    int n; cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (tmp == 0){
            if (hq.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << hq.top() << "\n";
                hq.pop();
            }
        }
        else{
            hq.push(tmp);
        }
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}