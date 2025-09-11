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
    string line;
    while (getline(cin, line)){
        vector<int> v(4);
        for (int i=0; i<4; i++) v[i] = 0;

        for (int i=0; i<line.size(); i++){
            int tmp = int(line[i]);
            if (tmp >= 97 && tmp <= 122) v[0]++;
            else if (tmp >= 65 && tmp <= 90) v[1]++;
            else if (tmp >= 48 && tmp <= 57) v[2]++;
            else if (line[i] == ' ') v[3]++;
        }

        for (int i=0; i<4; i++) cout << v[i] << " ";
        cout << endl;
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