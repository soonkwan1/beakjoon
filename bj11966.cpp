#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }
 
    int squareNum = 1;
    for (int i = 0; i < 30; i++) {
        squareNum *= 2;
        
        if (N == squareNum) {
            cout << 1 << endl;
            return 0;
        }
    }
 
    cout << 0 << endl;
 
    return 0;
}
