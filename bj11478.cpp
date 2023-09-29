#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    string line; cin >> line;
    set<string> s;

    for (int i=1; i<=line.size(); i++){
        for (int j=0; j<=line.size() - i; j++){
            s.insert(line.substr(j, i));
        }
    }

    cout << s.size() << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}