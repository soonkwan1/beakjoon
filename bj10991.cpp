#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) { // /을 기준으로 왼쪽
            cout << " ";
        }
        for (int k = 1; k <= i; k++) { // /을 기준으로 오른쪽
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
