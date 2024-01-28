// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <cmath>
// #include <deque>
// #include <queue>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// #define endl "\n"
// #define ll long long
// #define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
// using namespace std;
// #define max_num 10000000

// struct compMin{
//     bool operator() (const ll& a, const ll& b) const{
//         return a < b;
//     }
// };
// void INPUT(){
//     vector<ll> v;
//     ll* num_list = new ll[max_num+1]; fill_n(num_list, max_num + 1, 1);
//     num_list[1] = 0;
//     for (ll i=2; i<=max_num; i++){
//         if (num_list[i] == 0) continue;
        
//         for (ll j=i*i; j<=max_num; j*=i){
//             v.push_back(j);
//         }

//         for (ll j=i*2; j<=max_num; j+=i){
//             num_list[j] = 0;
//         }
//     }

//     sort(v.begin(), v.end(), compMin());
//     ll a, b; cin >> a >> b;
//     ll ans = 0;
//     for (int i=0; i<v.size(); i++){
//         if (v[i] > b) break;
//         else if (v[i] >= a) ans++;
//     }

//     cout << ans << endl;
    

//     delete[] num_list;
// }

// int main(){
//     fastio;
//     INPUT();
//     return 0;
// }

// [1456] 거의 소수
#include <iostream>
#include <vector>
#define MAX 10000001
using namespace std;
typedef long long ll;

ll A, B, ans;
bool isPrime[MAX];
vector<int> primeVec;

void Eratos()
{
    for(int i = 2; i < MAX; i++) isPrime[i] = true; // 처음엔 전부 소수로 초기화
    for(int i = 2; i * i <= MAX; i++) {
		if(isPrime[i]) {
            for(int j = i * i; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
	}  
}

void getAlmostPrime()
{
    for(int i = 2; i <= MAX; i++) {
        if(isPrime[i]) {
            ll num = i, n = 2;
            while(num <= B / i) { // num * i <= b
                if(A <= num * i) ans++;
                num *= i;
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    cin >> A >> B;
    Eratos();
    getAlmostPrime();
    cout << ans << '\n';

    return 0;
}