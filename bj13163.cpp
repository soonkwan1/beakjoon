#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++) {
        string s; getline(cin, s);
        int cnt = 0;
        for (int j = 0; j < s.length(); j++) {
            cnt++;
            if (s[j] == ' ')break;
        }
        cout << "god";
        for(int k=cnt; k<s.length(); k++){
            if (s[k] != ' ') cout << s[k];
        } 
        cout << "\n";
    }
}
