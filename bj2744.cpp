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
    string line; cin >> line;
    for (int i=0; i<line.size(); i++){
        if (isupper(line[i])){
            cout << char(tolower(line[i]));
        }
        else{
            cout << char(toupper(line[i]));
        }
    }
    cout << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}