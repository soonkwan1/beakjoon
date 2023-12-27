#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int n, s;
    int* l = new int[n];
    cin >> n;
    for (int i=0; i<n; i++) cin >> l[i];
    cin >> s;
    
    int start = 0;
    while (start < n && s > 0) {
        int maxIdx = start;
        
        for (int i=start; i<=min(n-1, start+s); i++) {
            if (l[maxIdx] < l[i]) maxIdx = i;
        }
        for (int i=maxIdx; i>start; i--) {
            swap(l[i], l[i-1]);
            s--;
        }
        
        start++;
    }
    
    for (int i=0; i<n; i++) cout << l[i] << " ";
    cout << endl;
    delete[] l;
    // int n; cin >> n;
    // int* l = new int[n];
    // for (int i=0; i<n; i++) cin >> l[i];
    // int s; cin >> s;

    // while (s){
    //     int idx = -1;
    //     int i;
    //     for (i=0; i<n-1; i++){
    //         if (l[i] < l[i+1]){
    //             idx = i;
    //             break;
    //         }
    //     }

    //     // sort complete
    //     if (idx == -1) break;

    //     // sort
    //     int end = min(n-1, idx + s);
    //     int mx = -1, mx_idx = 0;
    //     for (i = idx; i<=end; i++) {
    //         if (l[i] > mx) {
    //             mx = l[i], mx_idx = i;
    //         }
    //     }
    //     for (i = mx_idx; i>idx; i--){
    //         int tmp = l[i];
    //         l[i] = l[i-1];
    //         l[i-1] = tmp;
    //         s--;
    //     }
    // }
    

    // for (int i=0; i<n; i++){
    //     cout << l[i] << " ";
    // }
    // cout << endl;

    // delete[] l;
}

int main(){
    INIT();
    INPUT();
    return 0;
}