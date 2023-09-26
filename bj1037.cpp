#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    int n; cin >> n;
    vector<int> list;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        list.push_back(tmp);
    }
    sort(list.begin(), list.end());

    if (n%2 == 0){
        cout << list[0] * list[list.size()-1] << endl;
    }
    else{
        cout << list[n/2] * list[n/2] << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}