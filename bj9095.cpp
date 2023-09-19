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
    int n, t;
    cin >> t;
    int list[11] = {0, };
    
    list[1] = 1;
    list[2] = 2;
    list[3] = 4;
    for (int i=4; i<=10; i++){
        list[i] = list[i-1] + list[i-2] + list[i-3];
    }

    for (int i=0;i<t;i++){
        cin >> n;
        cout << list[n] << "\n";
    }


}

int main(){
    INIT();
    INPUT();
    return 0;
}