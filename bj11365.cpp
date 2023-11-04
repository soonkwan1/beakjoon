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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    while (true){
        string line; getline(cin, line);
        if (line == "END") break;
        for (int i=line.size()-1; i>=0; i--) cout << line[i];
        cout << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}