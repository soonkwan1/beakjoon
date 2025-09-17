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
    string word; cin >> word;
    int left = 0; int right = 0;
    for (int i=0; i<word.size()/2; i++){
        left += int(word[i]) - 48;
    }
    for (int i=word.size()/2; i<word.size(); i++){
        right += int(word[i]) - 48;
    }
    if (left == right) cout << "LUCKY" << endl;
    else cout << "READY" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}