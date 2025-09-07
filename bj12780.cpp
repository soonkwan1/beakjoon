#include <iostream>
#include <algorithm>
#include <string>
#define endl "\n"
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    string line, word; cin >> line >> word;
    int ans = 0;
    int pos = line.find(word);
    while (pos != string::npos){
        ans++;
        pos = line.find(word, pos + word.size());
    }

    cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    return 0;
}