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
#define ll long long
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct Jew{
    int weight, value;
};
struct compJew{
    bool operator() (const Jew& a, const Jew& b) const{
        return a.weight < b.weight;
    }  
};
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    int n, k; cin >> n >> k;
    priority_queue<int, vector<int>, less<int> > jews;
    
    Jew* jew_list = new Jew[n];
    // vector<pair<int,int> > jew_list;
    int* bags = new int[k];
    
    for (int i=0; i<n; i++){
        int weight, value; cin >> weight >> value;
        // jew_list.push_back(make_pair(weight, value));
        jew_list[i].weight = weight; jew_list[i].value = value;
    }
    for (int i=0; i<k; i++) cin >> bags[i];

    sort(jew_list, jew_list + n, compJew());
    sort(bags, bags+k, compMin());

    // for (int i=0; i<n; i++) cout << jew_list[i].weight << " " << jew_list[i].value << endl;
    // for (int i=0; i<k; i++) cout << bags[i] << endl;

    int idx = 0;
    ll sum = 0;
    for (int i=0; i<k; i++){
        while (idx < n && bags[i] >= jew_list[idx].weight){
            jews.push(jew_list[idx].value);
            idx++;
        }
        if (!jews.empty()){
            sum += jews.top();
            jews.pop();
        }
    }
    cout << sum << endl;

    // free memory
    // delete[] jew_list;
    delete[] bags;
}

int main(){
    INIT();
    INPUT();
    return 0;
}
