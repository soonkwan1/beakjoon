#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT2(){
    int t; cin >> t;
    for (int tc=0; tc<t; tc++){
        int m; cin >> m;
        string oper; long long num;

        priority_queue<long long> lpq;
        priority_queue<long long, vector<long long>, greater<long long> > spq;
        map<long long, int> count;

        for (int i=0; i<m; i++){
            cin >> oper >> num;
            if (oper == "D"){
                if (num == 1){
                    while (!lpq.empty()){
                        if (count[lpq.top()] > 0){
                            count[lpq.top()]--;
                            lpq.pop();
                            break;
                        }
                        lpq.pop();
                    }
                }
                else if (num == -1){
                    while (!spq.empty()){
                        if (count[spq.top()] > 0){
                            count[spq.top()]--;
                            spq.pop();
                            break;
                        }
                        spq.pop();
                    }
                }
            }
            else if (oper == "I"){
                lpq.push(num);
                spq.push(num);
                if (count[num]){
                    count[num]++;
                }
                else{
                    count[num] = 1;
                }
            }
        }

        if (lpq.empty() || spq.empty()){
            cout << "EMPTY" << "\n";
        }
        else{
            while (true){
                if (count[lpq.top()] > 0){
                    break;
                }
                lpq.pop();
            }
            while (true){
                if (count[spq.top()] > 0){
                    break;
                }
                spq.pop();
            }
            cout << lpq.top() << " " << spq.top() << "\n";
        }
    }
}
void q_push(priority_queue<long long> max_queue, priority_queue<long long, vector<long long>, greater<long long> > min_queue, map<long long, int> m, long long n){
    max_queue.push(n);
    min_queue.push(n);
    m[n]++;
}
void max_delete(priority_queue<long long> max_queue, map<long long, int> m){
    if (!max_queue.empty()){
        m[max_queue.top()]--;
        max_queue.pop();
    }
}
void min_delete(priority_queue<long long, vector<long long>, greater<long long> > min_queue, map<long long, int> m){
    if (!min_queue.empty()){
        m[min_queue.top()]--;
        min_queue.pop();
    }
}
void clear_queue(priority_queue<long long> max_queue, priority_queue<long long, vector<long long>, greater<long long> > min_queue, map<long long, int> m){
    while (!max_queue.empty() && m[max_queue.top()] == 0){
        max_queue.pop();
    }
    while (!min_queue.empty() && m[min_queue.top()] == 0){
        min_queue.pop();
    }
}
void INPUT3(){
    int t; cin >> t;
    for (int tc=0; tc<t; tc++){
        int m; cin >> m;
        char cmd; long long num;

        priority_queue<long long> max_queue;
        priority_queue<long long, vector<long long>, greater<long long> > min_queue;
        map<long long, int> count;
        while (m--){
            cin >> cmd >> num;
            if (cmd == 'D'){
                if (num == 1){
                    // max_delete(max_queue, count);
                    if (!max_queue.empty()){
                        count[max_queue.top()]--;
                        max_queue.pop();
                    }
                }
                else{
                    // min_delete(min_queue, count);
                    if (!min_queue.empty()){
                        count[min_queue.top()]--;
                        min_queue.pop();
                    }
                }

                // clear_queue(max_queue, min_queue, count);
                while (!max_queue.empty() && count[max_queue.top()] == 0){
                    max_queue.pop();
                }
                while (!min_queue.empty() && count[min_queue.top()] == 0){
                    min_queue.pop();
                }
            }
            else{
                // q_push(max_queue, min_queue, count, num);
                max_queue.push(num);
                min_queue.push(num);
                count[num]++;
                // cout << max_queue.top() << " " << min_queue.top() << "\n";
            }
        }
        
        // clear_queue(max_queue, min_queue, count);
        while (!max_queue.empty() && count[max_queue.top()] == 0){
            max_queue.pop();
        }
        while (!min_queue.empty() && count[min_queue.top()] == 0){
            min_queue.pop();
        }

        if (max_queue.empty() || min_queue.empty()){
            cout << "EMPTY" << "\n";
        }
        else{
            cout << max_queue.top() << " " << min_queue.top() << "\n";
        }
    }
}
int main(){
    INIT();
    INPUT3();
    return 0;
}

/*
2
7
I 16
I -5643
D -1
D 1
D 1
I 123
D -1
9
I -45
I 653
D 1
I -642
I 45
I 97
D 1
D -1
I 333
*/