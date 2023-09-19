#include <iostream>
#include <string>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    int n, p;
    cin >> n >> p;
    int total = n * p;

    int tmp;
    for (int i=0; i<5; i++){
        cin >> tmp;
        cout << tmp - total << " ";
    }
    cout << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}