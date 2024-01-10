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
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

struct Node{
    int x1, y1, x2, y2;
};

int getNodeNum(int x, int y, int c){
    return x * (c + 1) + y;
}

void INPUT(){
    int r, c; cin >> r >> c;
    int k; cin >> k;

    vector<pair<int,int> > v;
    for (int i=0; i<k; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int n1 = getNodeNum(x1, y1, c);
        int n2 = getNodeNum(x2, y2, c);
        if (n1 > n2) swap(n1, n2);
        v.push_back(make_pair(n1, n2));
    }
    
    ll** dp = new ll*[r+1];
    for (int i=0; i<=r; i++){
        dp[i] = new ll[c+1];
        fill_n(dp[i], c+1, 0);
    }

    dp[0][0] = 1;

    for (int i=0; i<=r; i++){
        for (int j=0; j<=c; j++){
            int my_node = getNodeNum(i, j, c);
            
            if (i - 1 >= 0){
                int from_node = getNodeNum(i - 1, j, c);
                int flag = false;
                for (int k=0; k<v.size(); k++){
                    if (v[k].first == from_node && v[k].second == my_node){
                        flag = true;
                        break;
                    }
                }

                if (!flag){
                    dp[i][j] += dp[i-1][j];
                }
            }

            if (j - 1 >= 0){
                int from_node = getNodeNum(i, j - 1, c);
                int flag = false;
                for (int k=0; k<v.size(); k++){
                    if (v[k].first == from_node && v[k].second == my_node){
                        flag = true;
                        break;
                    }
                }

                if (!flag){
                    dp[i][j] += dp[i][j-1];
                }
            }

        }
    }

    cout << dp[r][c] << endl;

    for (int i=0; i<=r; i++) delete[] dp[i];
    delete[] dp;
    // delete[] v;
}

int main(){
    fastio;
    INPUT();
    return 0;
}