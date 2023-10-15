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
    int n; cin >> n;
    while (n--){
        int tmp; cin >> tmp;
        for (int i=0; i<tmp; i++) cout << '=';
        cout << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}
