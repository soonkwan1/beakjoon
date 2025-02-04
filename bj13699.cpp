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

string addString(string a, string b){
    string tmp = "";
    int addon = 0;
    


    return tmp;
}
void INPUT(){
    int n; cin >> n;
    ll nums[36]; fill_n(nums, 36, 0);
    nums[0] = 1;
    for (int i=1; i<=35; i++){
        for (int k=0; k<i; k++){
            nums[i] += nums[k] * nums[i - 1 - k];
        }
    }
    cout << nums[n] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}