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
    int apple, banana;
    int a, b, c;
    cin >> a >> b >> c;
    apple += 3 * a + 2 * b + c;
    cin >> a >> b >> c;
    banana += 3 * a + 2 * b + c;

    if (apple > banana) cout << "A" << endl;
    else if (banana > apple) cout << "B" << endl;
    else cout << "T" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}