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
    int a, b; cin >> a >> b;

    int dup = 0;
    set<int> A;
    for (int i=0; i<a; i++){
        int temp; cin >> temp;
        A.insert(temp);
    }

    for (int i=0; i<b; i++){
        int temp; cin >> temp;
        if (A.find(temp) != A.end()){
            dup++;
        }
    }

    cout << a - dup + b - dup << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}