#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    int e, s, m; cin >> e >> s >> m;
    int s1, s2, s3; s1 = s2 = s3 = 1;

    int year = 1;
    while (true){
        if ((s1 == e)&& (s2 == s) && (s3 == m)){
            cout << year << "\n";
            break;
        }
        s1++; s2++; s3++;
        year++;
        if (s1 > 15) s1 = 1;
        if (s2 > 28) s2 = 1;
        if (s3 > 19) s3 = 1;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}