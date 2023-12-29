#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int n; cin >> n;
    vector<string> ans;

    while (n--){
        string sig; cin >> sig;
        int state = 0;
        bool flag = true;
        for (int i=0; i<sig.size(); i++){
            if (sig[i] == '1'){
                if (state == 0) state = 1;
                else if (state == 1){
                    flag = false;
                    break;
                }
                else if (state == 2){
                    flag = false;
                    break;
                }
                else if (state == 3) state = 4;
                else if (state == 4) state = 6;
                else if (state == 5 || state == 7 || state == 8) state = 0;
            }
            else if (sig[i] == '0'){
                if (state == 0) state = 8;
                else if (state == 1) state = 2;
                else if (state == 2) state = 3;
                else if (state == 4) state = 5;
                else if (state == 5){
                    flag = false;
                    break;
                }
                else if (state == 6) state = 7;
                else if (state == 7) state = 3;
                else if (state == 8) {
                    flag = false;
                    break;
                }
            }
        }

        if (state != 0 && state != 4 && state != 6) flag = false;

        if (flag) ans.push_back("YES");
        else ans.push_back("NO");
    }

    for (int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}