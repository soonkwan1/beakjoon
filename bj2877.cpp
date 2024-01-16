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

void INPUT(){
    ll k; cin >> k;
    string line = "";
    
    int digit = 1;
    while (k >= pow(2, digit) - 1){
        digit++;
    }
    digit--;
    k -= pow(2, digit) - 1;

    for (int i=0; i<digit; i++){
        line += '0';
    }

    int idx = digit - 1;
    while (k > 0){
        if (k % 2 == 1) line[idx] = '1';
        k /= 2;
        idx--;
    }

    for (int i=0; i<line.size(); i++){
        if (line[i] == '0') cout << 4;
        else cout << 7;
    }
    cout << endl;

}

int main(){
    fastio;
    INPUT();
    return 0;
}