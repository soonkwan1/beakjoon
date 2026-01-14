#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void printTroy(int an, int eye){
    if (an >= 3 && eye <= 4) cout << "TroyMartian" << endl;
}
void printVlad(int an, int eye){
    if (an <= 6 && eye >= 2) cout << "VladSaturnian" << endl;
}
void printGraeme(int an, int eye){
    if (an <= 2 && eye <= 3) cout << "GraemeMercurian" << endl;
}

void INPUT(){
    int a, b; cin >> a >> b;
    printTroy(a, b);
    printVlad(a, b);
    printGraeme(a, b);
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}