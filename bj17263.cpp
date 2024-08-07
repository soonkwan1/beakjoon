#include <iostream> 
#include <string> 

using namespace std; 

int main(){ 
    int n, i, a; 
    int b = 0; 
    cin >> n; 

    for (i = 0; i < n; i++) { 
        cin >> a; 
        if (a > b) { 
            b = a; 
        } 
    } 
    cout << b; 
    return 0; 
}
