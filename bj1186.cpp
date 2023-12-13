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
struct Node{
    int x, y;
};
void INPUT(){
    int n, k; cin >> n >> k;

    

    vector<int> area;

    for (int i=0; i<n; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int tmp = 0;
        for (int i=x1; i<=x2; i++){
            for (int j=y1; j<=y2; j++){
                
            }
        }
        area.push_back(tmp);
    }

    for (int i=0; i<area.size(); i++){
        cout << area[i] << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}