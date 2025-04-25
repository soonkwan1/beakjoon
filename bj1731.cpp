using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <functional>
#include <cmath>
#include <map>
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> PII;
 
 
 
int n;
vector<ll> num;
 
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        num.push_back(temp);
    }
 
    ll d = num[1] - num[0];
    ll r = num[1] / num[0];
 
    if (num[2] == num[1] + d) {
        cout << num[num.size() - 1] + d;
    
    }
    else if (num[2] == num[1] * r) {
        cout << num[num.size() - 1] * r;
    }
 
 
    return 0;
}
