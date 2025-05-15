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
    string line; cin >> line;
    int left = 0; int right = 0;
    int state = 0;
    for (int i=0; i<line.size(); i++){
        if (line[i] == '(') state = 1;
        else if (state == 0){
            if (line[i] == '@'){
                left++;
            }
        }
        else if (state == 1){
            if (line[i] == '@'){
                right++;
            }
        }
    }
    cout << left << " " << right << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}