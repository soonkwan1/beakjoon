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

int transDigit(string word, int dig, unordered_map<char, int> um) {
    int ret = 0;

    int digit = 1;
    for (int i=word.size()-1; i>=0; i--){
        ret += um[word[i]] * digit;
        digit *= dig;
    } 

    return ret;
}
void INPUT(){
    unordered_map<char, int> um;
    um['0'] = 0; um['1'] = 1; um['2'] = 2;
    um['3'] = 3; um['4'] = 4; um['5'] = 5;
    um['6'] = 6; um['7'] = 7; um['8'] = 8;
    um['9'] = 9; um['a'] = 10; um['b'] = 11;
    um['c'] = 12; um['d'] = 13; um['e'] = 14; um['f'] = 15;

    string word; cin >> word;
    if (word.size() == 1){
        cout << word << endl;
    }
    else if (word.size() == 2){
        if (word[0] == '0') cout << transDigit(word, 8, um);
        else cout << word << endl;
    }
    else{
        if (word[0] == '0'){
            if (word[1] == 'x') cout << transDigit(word, 16, um) << endl;
            else cout << transDigit(word, 8, um) << endl;
        }
        else cout << word << endl;
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