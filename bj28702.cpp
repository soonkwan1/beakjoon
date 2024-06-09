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
    int ans;
    for (int i=0; i<3; i++){
        string word; cin >> word;
        if (word == "Fizz" || word == "Buzz" || word == "FizzBuzz") continue;
        ans = stoi(word) + (3 - i);
    }
    if (ans % 3 == 0 && ans % 5 == 0) cout << "FizzBuzz" << endl;
    else if (ans % 3 == 0) cout << "Fizz" << endl;
    else if (ans % 5 == 0) cout << "Buzz" << endl;
    else cout << ans << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}