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
    double weight, height; cin >> weight >> height;
    double tmp = weight / height / height;
    if (tmp > 25) cout << "Overweight" << endl;
    else if (tmp >= 18.5) cout << "Normal weight" << endl;
    else cout << "Underweight" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
