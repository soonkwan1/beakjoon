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

bool palindrome(deque<int> dq){
    for (int i=0; i<dq.size() / 2; i++){
        if (dq[i] != dq[dq.size() - i - 1]) return false;
    }
    return true;
}

bool digitTran(int num){
    for (int b=2; b<=64; b++){
        deque<int> dq;
        int nnum = num;
        while (nnum){
            dq.push_front(nnum % b);
            nnum /= b;
        }
        if (palindrome(dq)) return 1;
    }
    return false;
}

void INPUT(){
    int n; cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        cout << digitTran(tmp) << endl;
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