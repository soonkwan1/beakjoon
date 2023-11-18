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
    int* l = new int[n];
    for (int i=0; i<n; i++) cin >> l[i];

    int flag = 0;
    for (int i=0; i<n - 1; i++){
        if (l[i] > l[i+1]) {
            flag = 1; break;
        }
    }

    if (!flag){
        
    }
    else{
        for (int i=0; i<n; i++) cout << l[i] << " ";
        
    }
    cout << endl;

    delete[] l;
}

int main(){
    INIT();
    INPUT();
    return 0;
}