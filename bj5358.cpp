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
    string name1, name2;
    while (cin >> name1 >> name2){
        for (int i=0; i<name1.size(); i++){
            if (name1[i] == 'i') cout << 'e';
            else if (name1[i] == 'e') cout << 'i';
            else if (name1[i] == 'E') cout << 'I';
            else if (name1[i] == 'I') cout << 'E';
            else cout << name1[i];
        }
        cout << " ";
        for (int i=0; i<name2.size(); i++){
            if (name2[i] == 'i') cout << 'e';
            else if (name2[i] == 'e') cout << 'i';
            else if (name2[i] == 'E') cout << 'I';
            else if (name2[i] == 'I') cout << 'E';
            else cout << name2[i];
        }
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