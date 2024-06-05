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


typedef struct Node{
    string name;
    int korean, eng, math;
}Node;
struct compSort{
    bool operator() (const Node& a, const Node& b) const{
        if (a.korean != b.korean) return a.korean > b.korean;
        if (a.eng != b.eng) return a.eng < b.eng;
        if (a.math != b.math) return a.math > b.math;
        return a.name < b.name;
    }
};

void INPUT(){
    int n; cin >> n;
    vector<Node> v;
    while (n--){
        Node tmp;
        cin >> tmp.name >> tmp.korean >> tmp.eng >> tmp.math;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compSort());
    for (int i=0; i<v.size(); i++) cout << v[i].name << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}