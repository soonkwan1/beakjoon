//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <cmath>
//#include <deque>
//#include <queue>
//#include <map>
//#include <unordered_set>
//#include <unordered_map>
//#define ll long long
//#define INF 98765432101
//#define endl "\n"
//using namespace std;
//#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
//
//void INPUT() {
//    unsigned ll n; cin >> n;
//    int k; cin >> k;
//    int* eratos = new int[k + 1];
//    fill_n(eratos, k + 1, 1);
//    eratos[0] = 0; eratos[1] = 0;
//
//    int flag = 0;
//    int ans = 0;
//    for (int i = 2; i <= k; i++) {
//        if (eratos[i]) {
//            if (n % i == 0) {
//                flag = 1;
//                ans = i;
//                break;
//            }
//
//            for (int j = i * 2; j <= k; j += i) {
//                eratos[j] = 0;
//            }
//        }
//    }
//
//    if (flag)  cout << "BAD" << " " << ans << endl;
//    else  cout << "GOOD" << endl;
//    
//    delete[] eratos;
//}
//
//int main() {
//    fastio;
//    INPUT();
//    return 0;
//}

#include<stdio.h>
#include<string.h>

int main() {
    char P[101];
    int K, isPrime, num, key = 1000001;
    scanf("%s %d", P, &K);
    for (int i = 2; i <= K; i++) {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) if (i % j == 0) { isPrime = 0; break; }
        if (!isPrime) continue;
        num = 0;
        for (int j = 0; j < strlen(P); j++) num = (num * 10 + P[j] - '0') % i;
        if (!num) { key = i; break; }
    }
    if (key < K) printf("BAD %d", key);
    else printf("GOOD");
}
