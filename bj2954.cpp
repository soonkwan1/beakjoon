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
    string line; getline(cin, line);
    string aeiou = "aeiou";
    for (int i=0; i<line.size(); i++){
        bool flag = true;
        for (int j=0; j<aeiou.size(); j++){
            if (line[i] == aeiou[j]){
                flag = false;
                cout << line[i];
                i += 2;
            }
        }
        if (flag) cout << line[i];
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