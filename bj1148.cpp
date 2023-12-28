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
bool isMakable(unordered_map<char, int> um, string word){
    unordered_map<char, int> check;
    for (int i=0; i<word.size(); i++){
        check[word[i]]++;
    }
    for (int i=0; i<word.size(); i++){
        if (check[word[i]] > um[word[i]]) return false;
    }
    return true;
}
struct compMin{
    bool operator() (const pair<char,int>& a, const pair<char,int>& b) const{
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    }
};
void INPUT(){
    vector<string>* graph = new vector<string>[26];
    while(true){
        string word; cin >> word;
        if (word == "-") break;
        unordered_map<char, bool> um;
        for (int i=0; i<word.size(); i++){
            if (um[word[i]]) continue;
            um[word[i]] = true;
            graph[int(word[i]) - 65].push_back(word);
        }
    }

    while (true){       
        string table; cin >> table;
        if (table == "#") break;

        vector<pair<char, int> > res;
        unordered_map<char, int> acnt;
        unordered_map<string, bool> appeared;
        for (int i=0; i<table.size(); i++) acnt[table[i]]++;

        int visited[26] = {0, };
        for (int i=0; i<table.size(); i++){
            int cnt = 0;
            int idx = int(table[i]) - 65;
            if (visited[idx]) continue;
            visited[idx] = 1;
            for (int j=0; j<graph[idx].size(); j++){
                if (appeared[graph[idx][j]]) continue;
                if (isMakable(acnt, graph[idx][j])) cnt++;
            }
            res.push_back(make_pair(table[i], cnt));
        }

        sort(res.begin(), res.end(), compMin());
        vector<char> easy;
        deque<char> hard;

        easy.push_back(res[0].first);
        for (int i=1; i<res.size(); i++){
            if (res[i].second > res[0].second) break;
            easy.push_back(res[i].first);
        }

        hard.push_back(res[res.size()-1].first);
        for (int i=res.size()-2; i>=0; i--){
            if (res[i].second < res[res.size()-1].second) break;
            hard.push_front(res[i].first);
        }

        for (int i=0; i<easy.size(); i++) cout << easy[i];
        cout << " " << res[0].second << " ";
        for (int i=0; i<hard.size(); i++) cout << hard[i];
        cout << " " << res[res.size()-1].second << endl;
    }

    

    delete[] graph;
}

int main(){
    INIT();
    INPUT();
    // string test; cin >> test;
    // cout << int(test[0]) - 97 << endl;
    return 0;
}
