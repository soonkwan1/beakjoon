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
    int* increase = new int[n]; fill_n(increase, n, 1);
    int* decrease = new int[n]; fill_n(decrease, n, 1);

    int* list = new int[n];
    for (int i=0; i<n; i++) cin >> list[i];

    for (int i=1; i<n; i++){
        for (int j=0; j<i; j++){
            if (list[i] > list[j]){
                increase[i] = max(increase[i], increase[j] + 1);
            }
            else if (list[i] < list[j]){
                decrease[i] = max(decrease[i], max(increase[j] + 1, decrease[j] + 1));
            }
        }
    }

    int res = 0;

    for (int i=0; i<n; i++){
        res = max(res, max(increase[i], decrease[i]));
    }
    cout << res << "\n";

    // for (int i=0; i<n; i++) cout << list[i] << " ";
    // cout << endl;
    // for (int i=0; i<n; i++) cout << increase[i] << " ";
    // cout << endl;
    // for (int i=0; i<n; i++) cout << decrease[i] << " ";
    // cout << endl;

    delete[] list;
    delete[] increase;
    delete[] decrease;
}

int main(){
    INIT();
    INPUT();
    return 0;
}