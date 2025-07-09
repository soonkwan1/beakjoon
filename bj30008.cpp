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

int getGrade(int k){
    if (k <= 4) return 1;
    if (k <= 11) return 2;
    if (k <= 23) return 3;
    if (k <= 40) return 4;
    if (k <= 60) return 5;
    if (k <= 77) return 6;
    if (k <= 89) return 7;
    if (k <= 96) return 8;
    return 9;
}

void INPUT(){
    int n, k; cin >> n >> k;
    for (int i=0; i<k; i++){
        int tmp; cin >> tmp;
        tmp = tmp * 100 / n;
        cout << getGrade(tmp) << " ";
    }
    cout << endl;
}   
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}