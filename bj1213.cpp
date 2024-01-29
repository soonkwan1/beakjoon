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
    string name; cin >> name;
    int alpha[26]; fill_n(alpha, 26, 0);

    for (int i=0; i<name.size(); i++){
        alpha[int(name[i]) - 65]++;
    }

    int odd_cnt = 0;
    for (int i=0; i<26; i++){
        if (alpha[i] % 2 == 1) odd_cnt++;
    }

    
    if (odd_cnt >= 2) cout << "I'm Sorry Hansoo" << endl;
    else {
        string head = "", tail = "";
        string mid_word = "";
        for (int i=0; i<26; i++){
            while(alpha[i]){
                if (alpha[i] % 2 == 1){
                    mid_word = char(i + 65);
                    alpha[i]--;
                }
                else{
                    head = head + char(i + 65);
                    tail = char(i+65) + tail;
                    alpha[i] -= 2;
                }
            }
        }
        cout << head + mid_word + tail << endl;
    }
}

int main(){
    fastio;
    INPUT();
    return 0;
}