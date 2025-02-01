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
    string word; cin >> word;
    unordered_map<string, string> um;
    unordered_map<string, bool> um2;

    um["fdsajkl;"] = "in-out";
    um["jkl;fdsa"] = "in-out";
    um["asdf;lkj"] = "out-in";
    um[";lkjasdf"] = "out-in";
    um["asdfjkl;"] = "stairs";    
    um[";lkjfdsa"] = "reverse";

    um2["fdsajkl;"] = true;
    um2["jkl;fdsa"] = true;
    um2["asdf;lkj"] = true;
    um2[";lkjasdf"] = true;
    um2["asdfjkl;"] = true;
    um2[";lkjfdsa"] = true;

    if (um2[word]) cout << um[word] << endl;
    else cout << "molu" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
