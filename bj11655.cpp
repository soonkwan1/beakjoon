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

void lowerPrint(char a){
    int tmp = int(a) + 13;
    if (tmp > 122) tmp = (tmp - 122) + 96;
    cout << char(tmp);
}
void upperPrint(char a){
    int tmp = int(a) + 13;
    if (tmp > 90) tmp = (tmp - 90) + 64;
    cout << char(tmp);
}
void INPUT(){
    string line;
    getline(cin, line);
    
    for (int i=0; i<line.size(); i++){
        int tmp = int(line[i]);
        if (tmp >= 65 && tmp <= 90) upperPrint(line[i]);
        else if (tmp >= 97 && tmp <= 122) lowerPrint(line[i]);
        else cout << line[i];
    }
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}