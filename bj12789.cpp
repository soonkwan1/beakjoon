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

deque<int> main_line;
int n;
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        main_line.push_back(tmp);
    }
}
void SOLUTION(){
    vector<int> sub_line;

    int cnt = 1;
    while (true){
        if (!main_line.empty() && main_line.back() == cnt){
            
        }
        else if (!sub_line.empty() && sub_line.back() == cnt){

        }
    }
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}