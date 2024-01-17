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

int getSelfNum(int n){
    int ret = n;
    while (n > 0){
        ret += n % 10;
        n /= 10;
    }
    return ret;
}
void INPUT(){
    int nums[10001]; fill_n(nums, 10001, 0);
    for (int i=1; i<=10000; i++){
        int check = getSelfNum(i);
        if (check > 10000) continue;
        nums[check] = 1;
    }
    
    for (int i=1; i<=10000; i++){
        if (nums[i]) continue;
        cout << i << endl;
    }
}

int main(){
    fastio;
    INPUT();
    return 0;
}