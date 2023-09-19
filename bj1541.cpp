#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    string line;
    cin >> line;

    string num = "";
    int state = 0;
    int res = 0;
    for (int i=0; i<line.size(); i++){
        
        if (isdigit(line[i])){
            num += line[i];
        }
        else{
            if (state){
                res -= stoi(num);
            }
            else {
                res += stoi(num);
            }

            num = "";

            if (line[i] == '-'){
                state = 1;
                        
            }
        }
    }

    if (state){
        res -= stoi(num);
    }
    else{
        res += stoi(num);
    }
    
    cout << res << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}