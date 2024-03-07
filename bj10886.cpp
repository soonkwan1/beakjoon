#include <iostream>
using namespace std;

int main(){
    int N, ser, count0 = 0, count1 = 0;
    
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> ser;
        if(ser == 0)
            count0++;
        else
            count1++;
    }
    
    if(count0 > count1)
        cout << "Junhee is not cute!";
    else
        cout << "Junhee is cute!";
    
    return 0;
}
