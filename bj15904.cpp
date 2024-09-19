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
    string line; getline(cin, line);
    int state = 0;
    for (int i=0; i<line.size(); i++){
        if (state == 0 && line[i] == 'U') state = 1;
        else if (state == 1 && line[i] == 'C') state = 2;
        else if (state == 2 && line[i] == 'P') state = 3;
        else if (state == 3 && line[i] == 'C') state = 4;
    }
    
    if (state == 4) cout << "I love UCPC" << endl;
    else cout << "I hate UCPC" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}