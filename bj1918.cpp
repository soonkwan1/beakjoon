#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    string line; cin >> line;
    map<char, int> op;
    deque<char> dq;
    op['+'] = 2; op['-'] = 2; op['*'] = 3; op['/'] = 3; op['('] = 1;

    for (int i=0; i<line.size(); i++){
        if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/'){
            while (!dq.empty()){
                if (op[dq.back()] < op[line[i]]){
                    break;
                }
                cout << dq.back();
                dq.pop_back();
            }
            dq.push_back(line[i]);
        }
        else if (line[i] == '('){
            dq.push_back('(');
        }
        else if (line[i] == ')'){
            while (dq.back() != '('){
                cout << dq.back();
                dq.pop_back();
            }
            dq.pop_back();
        }
        else{
            cout << line[i];
        }
    }
    while (!dq.empty()){
        cout << dq.back();
        dq.pop_back();
    }
    cout << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}