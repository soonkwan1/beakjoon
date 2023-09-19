#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    long long int n;
    cin >> n;
    cin.ignore();
    string* line = new string[n];
    for (int i=0; i<n; i++){
        getline(cin, line[i]);
        cin.clear();
    }
    
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << line[i] << "\n";
    }
    
    delete[] line;
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
5
Lionel Cosgrove
Alice
Columbus and Tallahassee
Shaun and Ed
Fido
*/