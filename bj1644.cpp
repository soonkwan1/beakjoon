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
vector<int> eratosthenes(int n){
    vector<int> prime_list;
    
    int* list = new int[n+1];
    fill_n(list, n+1, 1);
    list[0] = list[1] = 0;
    for (int i=2; i<=n; i++){
        if (list[i] == 0) continue;

        if (list[i] == 1){
            prime_list.push_back(i);
            for (int j=i*2; j<=n; j+=i){
                list[j] = 0;
            }
        }
    }
    delete[] list;
    return prime_list;
}
void INPUT(){
    int n; cin >> n;
    vector<int> list = eratosthenes(n);
    int limit = list.size();
    int start, end;

    start = end = 0;
    int sum = 0;

    int ans = 0;
    while (start < limit){
        // cout << start << " " << end << " " << sum << endl;
        if (sum < n){
            sum += list[end];
            end++;
            if (end == limit) end--;
        }
        else if (sum > n){
            sum -= list[start];
            start++;
        }
        else if (sum == n){
            ans++;
            sum -= list[start];
            start++;
        }
    }
    
    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}