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
    int n; cin >> n;
    int blank = 0;
    int ref = 2 * n - 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<blank; j++){
            cout << ' ';
        }
        for (int j=0; j<ref; j++){
            cout << '*';
        }
        cout << "\n";
        
        blank++;
        ref -= 2;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}