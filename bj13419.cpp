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
    int n; cin >> n;
    while (n--){
        string line; cin >> line;
        string first = "";
        string second = "";

        if (line.size() % 2 == 0){
            for (int i=0; i<line.size(); i++){
                if (i % 2 == 0) first += line[i];
                else second += line[i];
            }
        }
        else{
            line = line + line;
            for (int i=0; i<line.size(); i++){
                if (i % 2 == 0) first += line[i];
                else second += line[i];
            }
        }

        cout << first << endl << second << endl;
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