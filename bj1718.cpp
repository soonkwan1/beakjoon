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
    string word; getline(cin, word);
    string secu; getline(cin, secu);

    for (int i=0; i<word.size(); i++){
        if (word[i] == ' ') cout << word[i];
        else{
            int tmp = (int(word[i]) - 96) - (int(secu[i % secu.size()]) - 96);
            tmp = tmp >= 1 ? tmp : 26 + tmp;
            cout << char(tmp + 96);
        }
    }
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