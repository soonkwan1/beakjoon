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

char** getMap(int r, int c){
    char** m = new char*[r];
    for (int i=0; i<r; i++){
        m[i] = new char[c];
        string line; cin >> line;
        for (int j=0; j<line.size(); j++){
            m[i][j] = line[j];
        }
    }
    return m;
}
void freeMap(char** m, int r){
    for (int i=0; i<r; i++) delete[] m[i];
    delete[] m;
}
void printMap(char** m, int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int t; cin >> t;
    while(t--){
        int r, c; cin >> r >> c;
        char** m = getMap(r, c);
        vector<char> keys;

        string k; cin >> k;
        for (int i=0; i<k.size(); i++){
            keys.push_back(k[i]);
        }

        

        printMap(m, r, c);
        freeMap(m, r);
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