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
// #define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    int cnt = 0;
    int n = 1;
    int a, b;

    vector<int> v;
    while (cnt != 2){
        int tmp; cin >> tmp;
        v.push_back(tmp);
        if (tmp) cnt++;
    }
    cin.ignore();

    cnt = 0;
    for (int i=0; i<v.size(); i++){
        int tmp = v[i];

        if (cnt == 0){
            cout << "? A " << n << endl << endl;
            if (tmp){
                cnt++;
                a = n;
                n = 1;
            }
            else {
                n++;
            }
        }
        else {
            cout << "? B " << n << endl << endl;
            if (tmp){
                b = n;
                break;
            }
            else {
                n++;
            }
            
        }
    }

    cout << "! " << a + b << endl;
}
void SOLUTION(){
    int tmp;
    int a, b;
    for (int i=1; i<=9; i++){
        cout << "? A " << i << endl;
        cin >> tmp;
        
        if (tmp){
            a = i;
            break;
        }
    }
    for (int i=1; i<=9; i++){
        cout << "? B " << i << endl;
        cin >> tmp;
        
        if (tmp){
            b = i;
            break;
        }
    }
    cout << "! " << a + b << endl;
}
int main(){
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
}