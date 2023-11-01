#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    map<string, string> fighting;
    fighting["SONGDO"] = "HIGHSCHOOL";
    fighting["CODE"] = "MASTER";
    fighting["2023"] = "0611";
    fighting["ALGORITHM"] = "CONTEST";

    string tmp; cin >> tmp;
    cout << fighting[tmp] << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
