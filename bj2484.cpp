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

// void INPUT(){
//     int t; cin >> t;
//     int ans = 0;
//     while (t--){
//         unordered_map<int, int> um;
//         int four = 0;
//         int three = 0;
//         int two = 0;

//         for (int i=0; i<4; i++){
//             int tmp; cin >> tmp;
//             um[tmp]++;
//         }


//     }
// }
// void SOLUTION(){

// }
// int main(){
//     fastio;
//     INPUT();
//     SOLUTION();
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dice[7];

int main(){
  int n;
  vector<int> v;
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=1; j<7; j++){
      dice[j] = 0;
    }
    for(int j=0; j<4; j++){
      int k;
      cin >> k;
      dice[k]++;
    }
    int flag = 1;
    int fEye = 0;
    int sEye = 0;
    for(int j=1; j<7; j++){
      if(dice[j]==4){
        flag = 4;
        fEye = j;
        break;
      }else if(dice[j]==3){
        flag = 3;
        fEye = j;
        break;
      }else if(dice[j]==2){
        if(flag==2) sEye=j;
        else fEye=j;
        flag = 2;
      }
    }
    if(flag == 4) v.push_back(50000+fEye*5000);
    else if(flag == 3) v.push_back(10000+fEye*1000);
    else if(flag == 2){
      if(sEye) v.push_back(2000+fEye*500+sEye*500);
      else v.push_back(1000+fEye*100);
    } else{
      for(int j=6; j>0; j--){
        if(dice[j]){
          v.push_back(j*100);
          break;
        }
      }
    }
  }
  sort(v.begin(), v.end());
  cout << v.back();
}