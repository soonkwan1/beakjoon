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
int charToBit(char a){
    return pow(2, int(a) - 97);
}
void dfs(int bt, int l, int k, int* words, int n, int idx, int& ans){
    if (l >= k){
        int tmp = 0;
        for (int i=0; i<n; i++) if ((bt & words[i]) == words[i]) tmp++;
        ans = max(ans, tmp);
        return;
    }

    for (int i=idx; i<pow(2, 26); i*=2){
        if ((bt & i) == 0){
            bt |= i;
            dfs(bt, l+1, k, words, n, i*2, ans);
            bt &= ~i;
        }
    }
}
void INPUT(){
    int charBit = 532741;
    int n, k; cin >> n >> k;
    int* words = new int[n];
    for (int i=0; i<n; i++){
        string word; cin >> word;
        int tmp_bt = 0b0;
        for (int j=0; j<word.size(); j++){
            tmp_bt |= charToBit(word[j]);
        }
        words[i] = tmp_bt;
    }
    
    int ans = 0;
    if (k >= 5) dfs(charBit, 5, k, words, n, 2, ans);
    cout << ans << endl;
    delete[] words;
}

int main(){
    INIT();
    INPUT();
    return 0;
}
