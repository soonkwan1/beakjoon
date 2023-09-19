#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    long int* list = new long int[100];

    list[0] = 1;
    list[1] = 1;
    list[2] = 1;
    list[3] = 2;
    list[4] = 2;
    for (int i=5; i<100; i++){
        list[i] = list[i-1] + list[i-5];
    }

    int n;
    for (int i=0; i<t; i++){
        cin >> n;
        cout << list[n-1] << "\n";
    }

    delete[] list;
    return 0;
}
