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

int retChar(char a){
    int tmp = int(a);
    if (tmp >= 97 && tmp < 97+26) return tmp - 97;
    else if (tmp >= 65 && tmp < 65+26) return tmp - 65;
    return -1;
}

void INPUT(){
    int n; cin >> n;
    cin.ignore();
    while (n--){
        string line; getline(cin, line);

        unordered_map<int, bool> um;
        for (int i=0; i<line.size(); i++){
            um[retChar(line[i])] = true;
        }

        vector<char> v;
        for (int i=0; i<26; i++){
            if (!um[i]) {
                v.push_back(char(i + 97));
            }
        }

        if (v.size() == 0) cout << "pangram" << endl;
        else{
            cout << "missing" << " ";
            for (int i=0; i<v.size(); i++){
                cout << v[i];
            }
            cout << endl;
        }

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