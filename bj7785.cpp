#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int compare(const string a, const string b){
    return a > b;
}

void INPUT(){
    map<string, int> list;
    vector<string> name_list;
    int n; cin >> n;
    while (n--){
        string name, record; cin >> name >> record;
        if (list[name] == 0){
            list[name] = 2;
            name_list.push_back(name);
        }

        else if (list[name] == 2){
            list[name] = 1;
        }
        else if (list[name] == 1){
            list[name] = 2;
        }
    }

    sort(name_list.begin(), name_list.end(), compare);

    for (int i=0; i<name_list.size(); i++){
        if (list[name_list[i]] == 2){
            cout << name_list[i] << "\n";
        }
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}