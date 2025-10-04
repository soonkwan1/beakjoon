#include <iostream>
using namespace std;
 
int main() {
    int gan[10];//0~9
    char zi[12]; //A~L
    int year;
    for (int i = 0; i < 10; i++)
        gan[i] = i;
    for (int i = 0; i < 12; i++)
        zi[i] = i + 65;
    cin >> year;
    cout << zi[((year +8) % 12)] << gan[(year +6) % 10];
}
