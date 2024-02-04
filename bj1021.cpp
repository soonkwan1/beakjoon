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
    int n, k; cin >> n >> k;
    deque<int> dq;
    for (int i=0; i<n; i++){
        dq.push_back(i+1);
    }

    deque<int> tar;
    for (int i=0; i<k; i++){
        int tmp; cin >> tmp;
        tar.push_back(tmp);
    }

    int move = 0;
    while (!tar.empty()){
        int target = tar.front(); tar.pop_front();
        deque<int> to_left = dq, to_right = dq;
        // for (int i=0; i<to_left.size(); i++){
        //     cout << to_left[i] << " ";
        // }
        // cout << endl;

        int cnt = 0;
        while (true){
            if (to_left.front() == target){
                move += cnt;
                to_left.pop_front();
                dq = to_left;
                break;
            }
            else if (to_right.front() == target){
                move += cnt;
                to_right.pop_front();
                dq = to_right;
                break;
            }  

            cnt++;
            to_left.push_back(to_left.front()); to_left.pop_front();
            to_right.push_front(to_right.back()); to_right.pop_back();
        }
    }
    cout << move << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}