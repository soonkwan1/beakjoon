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
    map<int, int> list;
    for (int i=0; i<line.size(); i++){
        list[int(line[i]) - 97]++;
    }

    for (int i=0; i<26; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}
