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
    string word; cin >> word;
    while (word.size() % 3 != 0){
        word = '0' + word;
    }

    for (int i=0; i<word.size(); i+=3){
        cout << (int(word[i]) - 48) * 4 + (int(word[i+1]) - 48) * 2 + (int(word[i+2] - 48));
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