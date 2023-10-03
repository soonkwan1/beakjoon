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
    int n; cin >> n;
    int M = 0, Y = 0;

    for (int i=0; i<n; i++){
        int temp; cin >> temp;
        Y += (temp / 30 + 1) * 10;
        M += (temp / 60 + 1) * 15;
    }

    if (M == Y){
        cout << "Y M " << M << endl;
    }
    else if (M > Y){
        cout << "Y " << Y << endl;
    }
    else{
        cout << "M " << M << endl;
    }

}

int main(){
    INIT();
    INPUT();
    return 0;
}