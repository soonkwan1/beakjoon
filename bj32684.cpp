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
    double score[6] = {13, 7, 5, 3, 3, 2};
    double cocjr = 0;
    double ekwoo = 1.5;

    for (int i=0; i<6; i++){
        double tmp; cin >> tmp;
        cocjr += tmp * score[i];
    }
    for (int i=0; i<6; i++){
        double tmp; cin >> tmp;
        ekwoo += tmp * score[i];
    }

    if (cocjr > ekwoo) cout << "cocjr0208" << endl;
    else cout << "ekwoo" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}