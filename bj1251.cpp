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
string reverseWord(string word){
    string tmp = "";
    for (int i=word.size()-1; i>=0; i--) tmp += word[i];
    return tmp;
}
void divideThree(vector<string>& v, string word, int x, int y){
    string word1 = "", word2 = "", word3 = "";

    for (int i=0; i<x; i++) word1 += word[i];
    for (int j=x; j<y; j++) word2 += word[j];
    for (int k=y; k<word.size(); k++) word3 += word[k];
    v.push_back(reverseWord(word1)+reverseWord(word2)+reverseWord(word3));
}
struct compMin{
    bool operator() (const string& a, const string& b) const{
        return a < b;
    }
};
void INPUT(){
    string words; cin >> words;
    vector<string> v;
    
    for (int i=1; i<words.size(); i++){
        for (int j=i+1; j<words.size(); j++){
            divideThree(v, words, i, j);
        }
    }
    sort(v.begin(), v.end(), compMin());
    cout << v[0] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}