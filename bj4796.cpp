#include <iostream>
using namespace std;
#define endl "\n"

int main(){
    cout.tie(0);
    cin.tie(0);
    
    int cnt = 1;
    while (1) {
        int L, P, V;
        cin >> L >> P >> V;

        if (L==0 && P==0 && V==0) break;
        int use = V / P;
        int remain = V % P;
        if (L < remain) remain = L;

        int result = L * use + remain;

        cout << "Case "<< cnt << ": " << result << endl;
        cnt++;
    }
    return 0;
}
