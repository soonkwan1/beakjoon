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
    unordered_map<string, string> um;
    um["NLCS"] = "North London Collegiate School";
    um["BHA"] = "Branksome Hall Asia";
    um["KIS"] = "Korea International School";
    um["SJA"] = "St. Johnsbury Academy";
    
    string word; cin >> word;
    cout << um[word] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}

/*
BHA: Branksome Hall Asia
KIS: Korea International School
SJA: St. Johnsbury Academy
*/