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

void INPUT(){
    int alpha[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    
    string my_name, her_name; cin >> my_name >> her_name;
    deque<int> comb;
    for (int i=0; i<my_name.size(); i++){
        comb.push_back(alpha[int(my_name[i]) - 65]);
        comb.push_back(alpha[int(her_name[i]) - 65]);
    }

    int length = comb.size();
    while (length > 2){
        int first = comb.front();
        comb.pop_front();
        int second;
        for (int i=0; i<length - 1; i++){
            second = comb[0];
            comb.pop_front();
            comb.push_back((first + second) % 10);
            first = second;
        }
        length = comb.size();
    }
    cout << to_string(comb[0]) << to_string(comb[1]) << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}