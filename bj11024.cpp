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

int stringToInt(string n){
    int tmp = 0;
    for (int i=0; i<n.size(); i++){
        tmp += (int(n[i]) - 48) * (pow(10, n.size() - i - 1));
    }
    return tmp;
}

void INPUT(){
    int t; cin  >> t;
    cin.ignore();
    while (t--){
        ll total = 0;
        string line; getline(cin, line);
        string word = "";

        for (int i=0; i<line.size(); i++){
            if (line[i] == ' ') {
                total += stringToInt(word);
                word = "";
            }
            else{
                word += line[i];
            }
        }
        total += stringToInt(word);
        cout << total << endl;
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