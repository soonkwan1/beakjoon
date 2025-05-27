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
    cin.ignore();
    while (n--){
        string line; getline(cin, line);

        vector<string> v;
        string tmp = "";
        int g = 0; int b = 0;
        for (int i=0; i<line.size(); i++){
            if (line[i] == ' '){
                v.push_back(tmp);
                tmp = "";
            }
            else{
                if (line[i] == 'g' || line[i] =='G'){
                    g++;
                }
                if (line[i] == 'b' || line[i] =='B'){
                    b++;
                }
                tmp += line[i];
            }
        }
        if (tmp != "") v.push_back(tmp);

        for (int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }

        if (g == b) cout << "is NEUTRAL" << endl;
        else if (g > b) cout << "is GOOD" << endl;
        else cout << "is A BADDY" << endl;
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