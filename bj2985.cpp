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

void INPUT(){
    int a, b, c; cin >> a >> b >> c;
    char op[4] = {'+', '-', '*', '/'};

    if (a == b && b == c){
        cout << a << "=" << b << "=" << c << endl;
    }
    else if (a + b == c){
        cout << a << "+" << b << "=" << c << endl;
    }
    else if (a - b == c){
        cout << a << "-" << b << "=" << c << endl;
    }
    else if (a * b == c){
        cout << a << "*" << b << "=" << c << endl;
    }
    else if (a / b == c){
        cout << a << "/" << b << "=" << c << endl;
    }
    else if (b + c == a){
        cout << a << "=" << b << "+" << c << endl;
    }
    else if (b - c == a){
        cout << a << "=" << b << "-" << c << endl;
    }
    else if (b * c == a){
        cout << a << "=" << b << "*" << c << endl;
    }
    else if (b / c == a){
        cout << a << "=" << b << "/" << c << endl;
    }
}

int main(){
    fastio;
    INPUT();
    return 0;
}