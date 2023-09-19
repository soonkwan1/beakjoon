#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    string num;
    cin >> num;
    cout << stoi(num) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}