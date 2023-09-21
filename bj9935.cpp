#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    string words; string bomb; cin >> words >> bomb;
    deque<char> answer;
    char bomb_last = bomb[bomb.size()-1];
    
    for (int i=0; i<words.size(); i++){
        answer.push_back(words[i]);
        if (answer.size() < bomb.size() || answer[answer.size() - 1] != bomb_last){
            continue;
        }
        else{
            int start_idx = answer.size() - bomb.size();
            int end_idx = answer.size() - 1;
            int idx = 0;

            for (int j=start_idx; j<=end_idx; j++){
                if (answer[j] != bomb[idx]){
                    break;
                }
                idx++;
            }

            if (idx == bomb.size()){
                
                for (int j=0; j<bomb.size(); j++){
                    answer.pop_back();
                }
            }
        }
    }

    if (answer.size() == 0) cout << "FRULA" << "\n";
    else{
        for (int i=0; i<answer.size(); i++) cout << answer[i];
        cout << "\n";
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}