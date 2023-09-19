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
    int young, middle;
    cin >> young >> middle;

    cout << 2 * middle - young << endl ;

}

int main(){
    INIT();
    INPUT();
    return 0;
}