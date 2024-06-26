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

void flushChar(string s, int& idx){
    while (s[idx] != '>'){
        cout << s[idx];
        idx++;
    }
    cout << s[idx];
}
void reverseChar(vector<char>& v){
    for (int i=v.size() - 1; i>=0; i--){
        cout << v[i];
    }
    while (v.size() > 0) v.pop_back();
}
void INPUT(){
    string word;
    getline(cin, word);

    vector<char> v;
    for (int i=0; i<word.size(); i++){
        if (word[i] == '<') {
            reverseChar(v);
            flushChar(word, i);
        }
        else if (word[i] == ' ') {
            reverseChar(v);
            cout << " ";
        }
        else v.push_back(word[i]);
    }
    reverseChar(v);
    cout << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}