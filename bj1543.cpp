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
void INPUT(){
    string doc, word;
    getline(cin, doc);
    getline(cin, word);

    int ans = 0;
    int idx = 0;
    while(true){
        if (idx > doc.size() - word.size()) break;

        // cout << idx << endl;
        string tmp = "";
        for (int j=idx; j<idx + word.size(); j++) tmp += doc[j];
        
        if (tmp == word){
            idx += word.size();
            ans++;
        }
        else{
            idx++;
        }
    }

    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}