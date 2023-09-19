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
    int n; cin >> n;
    int* list = new int[n];
    int* ans = new int[n];
    fill_n(ans, n, 1);
    for (int i=0; i<n; i++) cin >> list[i];

    for (int i=1; i<n; i++){
        int ref = 0;
        for (int j=i; j>=0; j--){
            if (list[j] < list[i] && ans[j] > ref){
                ref = ans[j];
            }
        }
        ans[i] += ref;
    }

    cout << *max_element(ans, ans+n) << endl;

    delete[] list;
    delete[] ans;
}

int main(){
    INIT();
    INPUT();
    return 0;
}