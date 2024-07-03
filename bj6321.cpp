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
    int n; cin >> n;
    int idx = 1;
    while (n--){
        string word; cin >> word;
        cout << "String #" << idx << endl;
        idx++;
        for (int i=0; i<word.size(); i++){
            char ch = char(int(word[i]) + 1);
            if (ch == '[') cout << 'A';
            else cout << char(int(word[i] + 1));
        }
        cout << endl;
        cout << endl;
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