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

int transWord(string word){
    int ret = 0;
    for (int i=0; i<word.size(); i++){
        if (int(word[i]) < 97){
            ret += int(word[i]) - 38;
        }
        else{
            ret += int(word[i]) - 96;
        }
    }
    return ret;
}
void INPUT(){
    int eratos[1050];
    for (int i=0; i<1050; i++){
        eratos[i] = 1;
    }

    for (int i=2; i<1050; i++){
        if (eratos[i]){
            for (int j=i*2; j<1050; j+=i){
                eratos[j] = 0;
            }
        }
    }

    string word; cin >> word;
    if (eratos[transWord(word)]){
        cout << "It is a prime word." << endl;
    }
    else{
        cout << "It is not a prime word." << endl;
    }
    
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}