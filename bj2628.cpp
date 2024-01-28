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

int row, col;
int** getMem(){
    int** t = new int*[row];
    for (int i=0; i<row; i++){
        t[i] = new int[col];
        fill_n(t[i], col, 1);
    }
    return t;
}
void freeMem(int** t){
    for (int i=0; i<row; i++) delete[] t[i];
    delete[] t;
}
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    cin >> col >> row;
    int** table = getMem();

    vector<int> vline; vline.push_back(0), vline.push_back(col);
    vector<int> hline; hline.push_back(0), hline.push_back(row);

    int m; cin >> m;
    for (int i=0; i<m; i++){
        int type, n; cin >> type >> n;
        if (type) vline.push_back(n);
        else hline.push_back(n);        
    }

    sort(vline.begin(), vline.end(), compMin());
    sort(hline.begin(), hline.end(), compMin());

    int ans = -1;
    for (int i=0; i<vline.size() - 1; i++){
        for (int j=0; j<hline.size() - 1; j++){
            int rec = 0;
            for (int x = vline[i]; x < vline[i + 1]; x++){
                for (int y = hline[j]; y < hline[j + 1]; y++){
                    rec++;
                }
            }
            ans = max(ans, rec);
        }
    }

    cout << ans << endl;

    freeMem(table);
}

int main(){
    fastio;
    INPUT();
    return 0;
}