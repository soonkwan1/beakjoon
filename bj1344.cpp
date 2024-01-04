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

bool isPrime(int a){
    int tmp = 0;
    for (int i=1; i<=sqrt(a); i++){
        if (a % i == 0){
            tmp++;
            if (a / i != i) tmp++;
        }
    }
    if (tmp > 2) return false;
    return true;
}

double binomialDis(double* fact, int a, double p){
    return fact[18] / fact[a] / fact[18 - a] * pow(p, a) * pow(1 - p, 18 - a);
}

void INPUT(){
    double p1, p2; cin >> p1 >> p2;
    p1 /= 100; p2 /= 100;
    double fact[20] = {0, };
    fact[0] = 1;
    for (int i=1; i<20; i++){
        fact[i] = fact[i - 1] * i;
    }

    vector<int> check_num;
    check_num.push_back(0); check_num.push_back(1);
    for (int i=4; i<=19; i++){
        if (!isPrime(i)) check_num.push_back(i);
    }

    cout.precision(10);
    double ans1 = 0;
    double ans2 = 0;
    for (int i=0; i<check_num.size(); i++){
        ans1 += binomialDis(fact, check_num[i], p1);
        ans2 += binomialDis(fact, check_num[i], p2);
    }

    cout << 1 - ans1 * ans2 << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}