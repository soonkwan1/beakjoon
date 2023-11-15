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

struct Data{
    int num;
    int cnt;
    int rank;
};
void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct compMin{
    bool operator() (const Data& a, const Data& b) const{
        if (a.num != b.num) return a.num < b.num;
        return a.cnt < b.cnt;
    }
};
struct compInit{
    bool operator() (const Data& a, const Data& b) const{
        return a.cnt < b.cnt;
    }
};
void INPUT(){
    int n; cin >> n;
    Data* dl = new Data[n];

    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        dl[i].num = tmp; dl[i].cnt = i;
    }

    sort(dl, dl+n, compMin());
    for (int i=0; i<n; i++){
        dl[i].rank = i;
    }

    sort(dl, dl+n, compInit());
    for (int i=0; i<n; i++) cout << dl[i].rank << " ";
    cout << endl;

    delete[] dl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}