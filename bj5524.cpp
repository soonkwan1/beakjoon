#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    int n; cin >> n;
    while(n--){
        string name; cin >> name;
        for (int i=0; i<name.size(); i++){
            cout << char(tolower(name[i]));
        }
        cout << "\n";
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}