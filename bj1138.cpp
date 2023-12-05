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
    int* line = new int[n]; fill_n(line, n, 0);

    for (int i=1; i<=n; i++){
        int cnt; cin >> cnt;
        int idx = 0;
        
        for (int j=0; j<n; j++){
            if (line[j] == 0 && idx == cnt) {
                line[j] = i;
                break;
            }
            
            if (line[j] == 0) idx++;
        }
    }
    
    for (int i=0; i<n; i++) cout << line[i] << " ";
    cout << endl;
    
    delete[] line;
}

int main(){
    INIT();
    INPUT();
    return 0;
}