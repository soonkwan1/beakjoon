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
int lineLimit(int* h, int i, int j, int k){
    double check = ( (double)(h[j] - h[i]) / (double)(j - i)) * (double)(k - j) + h[j];
    return check > h[k];
}
void INPUT(){
    int n; cin >> n;
    int* height = new int[n];
    for (int i=0; i<n; i++) cin >> height[i];

    int ans = 0;
    for (int i=0; i<n; i++){
        int cnt = 0;
        // left side
        for (int j=i-1; j>=0; j--){
            int flag = 1;
            for (int k = j + 1; k <= i - 1; k++){
                if (!lineLimit(height, i, j, k)){
                    flag = 0;
                    break;
                }
            }

            if (flag){
                cnt++;
            }
        }
        // right side
        for (int j=i+1; j<n; j++){
            int flag = 1;
            for (int k = i + 1; k <= j - 1; k++){
                if (!lineLimit(height, i, j, k)){
                    flag = 0;
                    break;
                }
            }

            if (flag){
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    delete[] height;
}

int main(){
    INIT();
    INPUT();
    return 0;
}