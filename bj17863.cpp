#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string input;
    cin >> input;
    
    bool flag = true;
    for(int i = 0; i < 3; i++) if(input[i] != '5') flag = false;
    
    if(flag) cout << "YES";
    else cout << "NO";
    
    return 0;
}
