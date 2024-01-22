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
    string nl[5];
    for (int i=0; i<5; i++){
        cin >> nl[i];
    }

    int result = 1;
    for (int i=0; i<5; i++){
        int state = 0;
        for (int j=0; j<nl[i].size(); j++){
            if (nl[i][j] == 'F'){
                state = 1;
            }
            else if (state == 1 && nl[i][j] == 'B'){
                state = 2;
            }
            else if (state == 2 && nl[i][j] == 'I'){
                state = 3;
            }
            else{
                state = 0;
            }

            if (state == 3){
                cout << i+1 << " ";
                result = 0;
                break;
            }
        }
    }

    if (result){
        cout << "HE GOT AWAY!" << endl;
    }
    else{
        cout << endl;
    }
}

int main(){
    fastio;
    INPUT();
    return 0;
}