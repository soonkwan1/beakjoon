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
    int a, b, c; cin >> a >> b >> c;
    int time[101]; fill_n(time, 101, 0);
    for (int i=0; i<3; i++){
        int start, end; cin >> start >> end;
        for (int j=start; j<end; j++){
            if (time[j] == a) time[j] = b;
            else if (time[j] == b) time[j] = c;
            else time[j] = a;
        }
    }

    int ans = 0;
    for (int i=0; i<101; i++){
        if (time[i] == a) ans += time[i];
        else if (time[i] == b) ans += time[i] * 2;
        else if (time[i] == c) ans += time[i] * 3;
    }
    cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}