#include <iostream>
 
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); //입출력 시간 향상
 
    int b;
    cin>>b;
 
    while(true){
        int a;
        cin>>a;
 
        if(a==0){
        break;
        }
 
        if(a%b==0){
            cout<<a<<" is a multiple of "<<b<<".\n";
        }
        else cout<<a<<" is NOT a multiple of "<<b<<".\n";
 
    }
}
