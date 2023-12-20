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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct compMax{
    bool operator() (const string& a, const string& b) const{
        return a.size() > b.size();
    }
};
struct compMax2{
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    int n; cin >> n;
    deque<string> words;
    for (int i=0; i<n; i++){
        string word; cin >> word;
        words.push_back(word);
    }
    
    unordered_map<char, int> um;
    vector<char> alpha;
    for (int i=0; i<n; i++){
        string word = words.front();
        words.pop_front();
    
        for (int j=0; j<word.size(); j++) {
            if (!um[word[j]]) alpha.push_back(word[j]);
            um[word[j]] += pow(10, word.size() - j - 1);
        }
    }

    vector<int> ans;
    for (int i=0; i<alpha.size(); i++){
        ans.push_back(um[alpha[i]]);
    }
    sort(ans.begin(), ans.end(), compMax2());
    int val = 9;
    ll total = 0;
    for (int i=0; i<ans.size(); i++){
        total += ans[i] * val;
        val--;
    }
    cout << total << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}