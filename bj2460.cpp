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
    int stage = 1;
    int people;
    int mx = 0;
    while(stage<=10){
        int a, b; cin >> a >> b;
        if (stage == 1) people = b;
        else if (stage == 10) people -= a;
        else people = people - a + b;
        mx = max(mx, people);
        stage++;
    }

    cout << mx << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}