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
#include <climits>
#define endl "\n"
#define ll long long
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    ll result=0, overflow=0;
    int n;

    for (int test_case=0; test_case<3; test_case++){
        cin>>n;

        result   = 0;
        overflow = 0;

        for (int i=0; i < n; i++){
            ll tmp; cin>>tmp;

            if (result > 0 and tmp > 0 and tmp > LLONG_MAX - result) overflow += 1;
            if (result < 0 and tmp < 0 and tmp < LONG_MIN - result) overflow -= 1;
            
            result += tmp;
        }

        if (overflow < 0){
            std::cout<<"-\n";
        }
        else if (overflow > 0){
            std::cout<<"+\n";
        }
        else if (result==0){
            std::cout<<"0\n";
        }
        else if (result < 0){
            std::cout<<"-\n";
        }
        else if (result > 0){
            std::cout<<"+\n";
        }
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}