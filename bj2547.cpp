#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
#define ll long long
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        int people; cin >> people;
        ll total = 0;
        for (int i=0; i<people; i++){
            ll tmp; cin >> tmp;
            total = (total + tmp) % people;
        }

        if (total % people == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 4f2bf23908abfb19afdccdeac5a29646dc17d603
