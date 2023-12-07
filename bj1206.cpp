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
    int n; cin >> n;
    vector<int> aver;
    for (int i=0; i<n; i++){
        double tmp; cin >> tmp;
        aver.push_back(tmp * 1000);
    }

    for (int i=1; i<=1000; i++){
        unordered_map<int, int> m;
        for (int j=0; j<=i*10; j++){
            m[(double)j / i * 1000] = 1;
        }

        int flag = 1;
        for (int j=0; j<n; j++){
            if (!m[aver[j]]){
                flag = 0;
                break;
            }
        }

        if (flag){
            cout << i << endl;
            break;
        }
    }
}

int main(){
    INIT();
    INPUT();
    // tt();
    return 0;
}