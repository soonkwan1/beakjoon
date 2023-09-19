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

void INPUT(){
    int people, party; cin >> people >> party;
    int* list = new int[people+1];
    int t_p; cin >> t_p;
    for (int i=0; i<t_p; i++){
        int person; cin >> person;
        list[person] = 1;
    }
    
    vector<int>* party_list = new vector<int>[party];
    for (int i=0; i<party; i++){
        int party_people; cin >> party_people;
        int flag = 0;
        while (party_people--){
            int person; cin >> person;
            party_list[i].push_back(person);
            if (list[person]){
                flag = 1;
            }
        }

        if (flag){
            for (int j=0; j<party_list[i].size(); j++){
                list[party_list[i][j]] = 1;
            }
        }
    }

    int res = 0;
    for (int i=0; i<party; i++){
        int flag = 0;
        for (int j=0; j<party_list[i].size(); j++){
            if (list[party_list[i][j]] == 1){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            res++;
        }
    }

    cout << res << "\n";

    delete[] list;
    delete[] party_list;
}

int main(){
    INIT();
    INPUT();
    return 0;
}