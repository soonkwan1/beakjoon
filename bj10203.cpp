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
    int n; cin >> n;
    char check[5] = {'a', 'e', 'i', 'o', 'u'};
    while (n--){
        string line; cin >> line;
        int ans = 0;
        for (int i=0; i<line.size(); i++){
            for (int j=0; j<5; j++){
                if (check[j] == line[i]) ans++;
            }
        }
        cout << "The number of vowels in " << line << " is " << ans << "." << endl;
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