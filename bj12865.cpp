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
void freeMem(int** dp, int k){
    for(int i=0; i<=k; i++){
        delete[] dp[i];
    }
    delete[] dp;
}
int** allocMem(int k, int n){
    int** tmp = new int*[k+1];
    for (int i=0; i<=k; i++){
        tmp[i] = new int[n+1];
    }
    fill_n(tmp[0], n+1, 0);
    for (int i=0; i<=k; i++) tmp[i][0] = 0;
    return tmp;
}
void printDP(int** dp, int n, int k){
    for (int i=1; i<=k; i++){
        for (int j=1; j<=n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int n, k; cin >> n >> k;
    int** dp = allocMem(k, n);

    vector<pair<int, int> > items;
    items.push_back(make_pair(0,0));
    for (int i=0; i<n; i++){
        int weight, value; cin >> weight >> value;
        items.push_back(make_pair(weight, value));
    }
    // sort(items.begin(), items.end());

    for (int i=1; i<=k; i++){
        for (int j=1; j<=n; j++){
            int w = items[j].first;
            int v = items[j].second;
            if (w > i) dp[i][j] = dp[i][j-1];
            else dp[i][j] = max(dp[i-w][j-1] + v, dp[i][j-1]);
                
        }
    }
    
    // printDP(dp, n, k);
    cout << dp[k][n] << "\n";
  
    freeMem(dp, k);
}

int main(){
    INIT();
    INPUT();
    return 0;
}