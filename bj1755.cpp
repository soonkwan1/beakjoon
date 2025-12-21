#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int M, N;
vector<pair<int, string>> v;
map<string, int> m;

bool cmp(pair<int, string> a, pair<int, string> b){
    return a.second < b.second;
}

string getNum(int n){
    if(n == 0) return "zero";
    else if(n == 1) return "one";
    else if(n == 2) return "two";
    else if(n == 3) return "three";
    else if(n == 4) return "four";
    else if(n == 5) return "five";
    else if(n == 6) return "six";
    else if(n == 7) return "seven";
    else if(n == 8) return "eight";
    else return "nine";
} 

int main(){
    cin >> M >> N;
    
    for(int i = M; i <= N; i++){
        if(i / 10){ // 10의 자리
            int a = i / 10; int b = i % 10;
            v.push_back({i, getNum(a) + ' ' + getNum(b)});
        }
        else{ // 1의 자리
            v.push_back({i, getNum(i)});
        }
    }
    
    sort(v.begin(), v.end(), cmp);
    
    int f = 1;
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ';
        if(f % 10 == 0) cout << '\n';
        f++;
    }
}
