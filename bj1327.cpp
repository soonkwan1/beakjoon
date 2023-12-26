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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int hasyTran(int h, int c, int k){
    deque<int> v;
    while (h > 0){
        v.push_front(h % 10);
        h /= 10;
    }
    int ret_val = 0;
    int con = 0;
    int digit = pow(10, v.size() - 1);
    for (con = 0; con < c; con++){
        ret_val += v[con] * digit;
        digit /= 10;
    }
    for (int i=con + k - 1; i>=con; i--){
        ret_val += v[i] * digit;
        digit /= 10;
    }
    for (int i=con+k; i<v.size(); i++){
        ret_val += v[i] * digit;
        digit /= 10;
    }
    return ret_val;
}
bool checkHash(int h, int res){
    if (h == res) return true;
    return false;
}
int bfs(vector<int> v, int n, int k){
    deque<pair<int,int> > dq;
    unordered_map<int, bool> um;
    int res_l[9] = {0, 1, 12, 123, 1234, 12345, 123456, 1234567, 12345678};
    int res = res_l[n];

    int digit = pow(10, v.size()-1);
    int start_val = 0;
    for (int i=0; i<v.size(); i++){
        start_val += v[i] * digit;
        digit /= 10;
    }

    dq.push_back(make_pair(start_val, 0));
    um[start_val] = true;

    while (!dq.empty()){
        int h = dq.front().first;
        int c = dq.front().second;
        dq.pop_front();

        if (checkHash(h, res)) return c;

        for (int i=0; i<=n-k; i++){
            int nh = hasyTran(h, i, k);
            if (!um[nh]){
                um[nh] = true;
                dq.push_back(make_pair(nh, c+1));
            }
        }
    }
    return -1;
}
void INPUT(){
    int n, k; cin >> n >> k;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    cout << bfs(v, n, k) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}