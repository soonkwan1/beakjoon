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
    string word; cin >> word;
    
    if (word == "miss") cout << 0 << endl;
    else if (word == "bad") cout << n * 200 << endl;
    else if (word == "cool") cout << n * 400 << endl;
    else if (word == "great") cout << n * 600 << endl;
    else if (word == "perfect") cout << n * 1000 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}