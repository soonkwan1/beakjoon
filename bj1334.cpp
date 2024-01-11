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

bool isPal(string word){
    for (int i=0; i<word.size()/2; i++){
        if (word[i] != word[word.size() - 1 - i]) return false;
    }
    return true;
}
string makePal(string word){
    string tmp1 = "";
    string tmp2 = "";
    for (int i=0; i<word.size()/2; i++){
        tmp1 += word[i];
        tmp2 = word[i] + tmp2;
    }
    if (word.size() % 2 == 0) return tmp1+tmp2;
    else return tmp1 + word[word.size()/2] + tmp2;
}

void INPUT(){
    string word; cin >> word;
    string n_word = makePal(word);

    while (n_word <= word){

    }
    cout << n_word << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}