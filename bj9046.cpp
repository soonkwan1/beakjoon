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

struct compMin{
    bool operator() (const pair<char,int>& a, const pair<char,int>& b)const{
        return a.second > b.second;
    }
};

void INPUT(){
    int n; cin >> n;
    cin.ignore();
    while (n--){
        string line; getline(cin, line);
        
        unordered_map<char, int> um;
        vector<char> v;
        for (int i=0; i<line.size(); i++){            
            if (line[i] == ' ') continue;
            else{
                if (!um[line[i]]){
                    v.push_back(line[i]);
                }
                um[line[i]]++;
            }
        }
        
        vector<pair<char, int> > vec;
        for (int i=0; i<v.size(); i++){
            vec.push_back(make_pair(v[i], um[v[i]]));
        }

        sort(vec.begin(), vec.end(), compMin());
        // for (int i=0; i<vec.size(); i++){
        //     cout << vec[i].first << " : " << vec[i].second << endl;
        // }

        if (vec[0].second == vec[1].second) cout << "?" << endl;
        else cout << vec[0].first << endl;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}