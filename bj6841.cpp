#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

void INPUT() {
    string line;
    while (cin >> line) {
        if (line == "CU") cout << "see you" << endl;
        else if (line == ":-)") cout << "I’m happy" << endl;
        else if (line == ":-(") cout << "I’m unhappy" << endl;
        else if (line == ";-)") cout << "wink" << endl;
        else if (line == "(~.~)") cout << "sleepy" << endl;
        else if (line == ":-P") cout << "stick out my tongue" << endl;
        else if (line == "TA") cout << "totally awesome" << endl;
        else if (line == "CUZ") cout << "because" << endl;
        else if (line == "CCC") cout << "Canadian Computing Competition" << endl;
        else if (line == "TY") cout << "thank-you" << endl;
        else if (line == "YW") cout << "you’re welcome" << endl;
        else if (line == "TTYL") cout << "talk to you later" << endl;
        else cout << line << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
