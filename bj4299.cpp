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

int psychoDist(string a, string b){
    int res = 0;
    for (int i=0; i<4; i++){
        if (a[i] != b[i]){
            res++;
        }
    }
    return res;
}

void INPUT(){
    int t;
    cin >> t;
    vector<int> res;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        string* mbti = new string[n];
        for (int j=0; j<n; j++){
            cin >> mbti[j];
        }

        int** table = new int*[n];
        for (int j=0; j<n; j++){
            table[j] = new int[n];
        }

        long long total = 0;
        for (int x=0; x<n; x++){
            for (int y=0; y<n; y++){
                table[x][y] = psychoDist(mbti[x], mbti[y]);
            }
        }

        

        for (int j=0; j<n; j++){
            delete[] table[j];
        }
        delete[] table;
        delete[] mbti;
    }

    for (int i=0; i<res.size(); i++){
        cout << res[i] << "\n";
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
1 3 4 11 15 43 58 
1 3 
*/