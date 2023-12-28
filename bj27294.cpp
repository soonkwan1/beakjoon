#include <iostream>
using namespace std;

void INPUT(){
    int t, s; cin >> t >> s;
    if (!s){
        if (t >= 12 && t <= 16) cout << 320;
        else cout << 280;
    }
    else cout << 280;
    cout << endl;
}

int main(){
    INPUT();
    return 0;
}