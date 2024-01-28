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
    int** l = new int*[1000];
    for (int i=0; i<1000; i++){
        l[i] = new int[2];
    }

    int k = 0;
    while (true){
        int a, b; cin >> a >> b;
        getchar();
        if (cin.eof()) break;
        l[k][0] = a, l[k][1] = b;
        k++;
    }

    for (int i=0; i<k; i++){
        cout << l[k][0] << " " << l[k][1] << endl;
    }

    for (int i=0; i<1000; i++) delete[] l[i];
    delete[] l;
}

int main(){
    fastio;
    // INPUT();
    int a; cin >> a;
    cout << a << endl;
    return 0;
}