#include <iostream>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N;

    N += 3071;
    S.push_back(N / 4096 + 234);
    S.push_back(N / 64 % 64 + 128);
    S.push_back(N % 64 + 128);

    cout << S << "\n";
    return 0;
}
