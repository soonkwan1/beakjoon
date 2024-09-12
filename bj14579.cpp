#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <math.h>
#include <memory.h>
using namespace std;
 
#define MAX_SIZE 100
#define INF 0x7fffffff
#define CENDL "\n"
#define ll long long
 
#define c_reverse(s) reverse(s.begin(), s.end())
#define c_sort(s) sort(s.begin(), s.end())
#define print_vector(v) for(int i=0; i<v.size(); i++) cout << v[i];
 
 
int count(int c)
{
    int d = 0;
    for (int i = 1; i <= c; i++) {
        d = d + i;
    }
    return d;
};
 
int main() {
 
    cin.tie(0);
    std::ios::sync_with_stdio(false);
 
    int a,b; cin >> a >> b;
 
    int sol = 1;
    for (int i = a; i <= b; i++ ) {
        sol = sol * count(i);
        sol = sol % 14579;
    }
 
    if(a < b && a >= 1 && b<= 1000) {
        cout << sol << CENDL;
    }
    return 0;
}
