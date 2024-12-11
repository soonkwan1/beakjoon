#include<bits/stdc++.h>
using namespace std;
int n,check,alp_num;
string name;
int cnt[26];
string alp;
int main(){
    check = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> name;
        int alp_num = name[0];
        cnt[alp_num-97]++;
    }
    for(int i =0; i<26;i++){
        
        if (cnt[i] >= 5){
        alp = i+'a';
        cout << alp;
        check = 1;
        }
    }
    if(check ==0) cout << "PREDAJA";
    return 0;
}
