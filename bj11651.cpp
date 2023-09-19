#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>& a, pair<int,int>& b){
    if (a.second > b.second){
        return false;
    }
    else if (a.second == b.second){
        if (a.first > b.first){
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    vector<pair<int,int> > v;
    int n;
    cin >> n;
    v.resize(n);

    for (int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    for (int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }


    return 0;
}
