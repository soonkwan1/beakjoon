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
    int li = 0, ti = 0;
    for (int i=0; i<9; i++){
        string name; cin >> name;
        if (name == "Lion") li++;
        else ti++;
    }
    if (li > ti) cout << "Lion" << endl;
    else cout << "Tiger" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}