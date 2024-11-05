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

void print_star1(int n){
    int state = 0;
    for (int i=0; i<n; i++){
        if (!state) {
            cout << "*";
            state = 1;
        }
        else if (state ==1 ){
            cout << " ";
            state = 0;
        }
    }
    cout << endl;
}
void print_star2(int n){
    int state = 1;
    for (int i=0; i<n; i++){
        if (!state) {
            cout << "*";
            state = 1;
        }
        else if (state ==1 ){
            cout << " ";
            state = 0;
        }
    }
    cout << endl;
}
void INPUT(){
    int n; cin >> n;
    for (int i=0; i<n; i++){
        print_star1(n);
        print_star2(n);
    }
}
int main(){
    fastio;
    INPUT();
    return 0;
}