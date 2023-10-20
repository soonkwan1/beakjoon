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
    int list[3];
    for (int i=0; i<3; i++) cin >> list[i];
    sort(list, list+3);
    cout << list[1] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}