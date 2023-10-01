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
    int n1, n2;
    while (true){
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0) break;
        cout << n1 + n2 << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}