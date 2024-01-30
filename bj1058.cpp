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

int n;
char** t;
void getTable(){
    t = new char*[n];
    for (int i=0; i<n; i++){
        t[i] = new char[n];
        string line; cin >> line;
        for (int j=0; j<n; j++){
            t[i][j] = line[j];
        }
    }
}
void delTable(){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printTable(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
void floydWarshall(){
    int** isFriend = new int*[n];
    for (int i=0; i<n; i++){
        isFriend[i] = new int[n];
        fill_n(isFriend[i], n, 0);
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (t[i][j] == 'Y') isFriend[i][j] = 1;
        }
    }


    for (int k=0; k<n; k++){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i==j) continue;
                if (t[i][k] == 'Y' && t[k][j] == 'Y'){
                    isFriend[i][j] = 1;
                }
            }
        }
    }
    
    int ans = 0;
    for (int i=0; i<n; i++){
        int cnt = 0;
        for (int j=0; j<n; j++){
            cnt += isFriend[i][j];
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    
    for (int i=0; i<n; i++) delete[] isFriend[i];
    delete[] isFriend;
}
void INPUT(){
    cin >> n;
    getTable();
    floydWarshall();
    delTable();
}

int main(){
    fastio;
    INPUT();
    return 0;
}