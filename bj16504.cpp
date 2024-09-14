#include <iostream>
#include <algorithm>
#include <queue>
#include <climits>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long sum=0;
    for (auto i=0; i< n*n; i++){
        int temp;
        cin >> temp;
        sum += temp;

    }
    cout << sum;
}
