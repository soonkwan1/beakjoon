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

string preProcessing(string st){
    if (st.size() == 4){
        return st;
    }
    else if (st.size() == 3){
        return "0" + st;
    }
    else if (st.size() == 2){
        return "00" + st;
    }
    return "000" + st;
}
string operation(string st, int n){
    string n_st = "";
    // R
    if (n==3){
        n_st += st[3];
        n_st += st[0];
        n_st += st[1];
        n_st += st[2];
        return n_st;
    }
    // L
    else if (n == 2){
        n_st += st[1];
        n_st += st[2];
        n_st += st[3];
        n_st += st[0];
        return n_st;
    }
    // D
    else if (n == 0){
        int n = stoi(st) * 2;
        if (n > 10000){
            n %= 10000;
        }
        return preProcessing(to_string(n));
    }
    // S
    else {
        int n = stoi(st) - 1;
        if (n == -1){
            n = 9999;
        }
        return preProcessing(to_string(n));
    }
}
void bfs(string start, string target){
    deque<pair<string, string> > dq;
    dq.push_back(make_pair(start, ""));
    int visited[10000] = {0, };
    visited[stoi(start)] = 1;

    string op_l = "DSLR";
    string tmp;
    string op;
    while (!dq.empty()){
        tmp = dq.front().first;
        op = dq.front().second;
        dq.pop_front();

        if (tmp == target){
            cout << op << "\n";
            break;
        }

        for (int i=0; i<4; i++){
            string n_st = operation(tmp, i);
            int n = stoi(n_st);
            if (visited[n] == 0){
                dq.push_back(make_pair(n_st, op+op_l[i]));
                visited[n] = 1;
            }
            
        }
    }
}
void new_bfs(int a, int b){
    deque<pair<int, string> > dq;
    dq.push_back(make_pair(a, ""));
    int visited[10000] = {0, };
    visited[a] = 1;

    while (true){
        int tmp = dq.front().first;
        string op = dq.front().second;
        dq.pop_front();

        if (tmp == b){
            cout << op << "\n";
            break;
        }

        // D
        int d_tmp = (tmp * 2) % 10000;
        if (visited[d_tmp] == 0){
            dq.push_back(make_pair(d_tmp, op+"D"));
            visited[d_tmp] = 1;
        }
        // S
        int s_tmp = tmp - 1 == -1 ? 9999 : tmp -1;
        if (visited[s_tmp] == 0){
            dq.push_back(make_pair(s_tmp, op+"S"));
            visited[s_tmp] = 1;
        }
        // L
        int l_tmp = (tmp % 1000) * 10 + tmp / 1000;
        if (visited[l_tmp] == 0){
            dq.push_back(make_pair(l_tmp, op+"L"));
            visited[l_tmp] = 1;
        }
        // R
        int r_tmp = (tmp % 10) * 1000 + (tmp / 10);
        if (visited[r_tmp] == 0){
            dq.push_back(make_pair(r_tmp, op+"R"));
            visited[r_tmp] = 1;
        }
    }

}
void INPUT(){
    int t; cin >> t;
    // string a, b;
    int a, b;
    for (int i=0; i<t; i++){
        cin >> a >> b;
        // a = preProcessing(a);
        // b = preProcessing(b);
        // bfs(a,b);
        new_bfs(a, b);

    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}