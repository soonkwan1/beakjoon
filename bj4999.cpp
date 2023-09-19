#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    string str1, str2; cin >> str1 >> str2;
    if (str1.size() >= str2.size()) cout << "go" << endl;
    else cout << "no" << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}