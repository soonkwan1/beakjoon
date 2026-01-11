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
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

int getDna(int a, int b){
    if (a == 0){
        if (b == 0) return 0;
        else if (b == 1) return 2;
        else if (b == 2) return 0;
        else if (b == 3) return 1;
    }
    else if (a == 1){
        if (b == 0) return 2;
        else if (b == 1) return 1;
        else if (b == 2) return 3;
        else if (b == 3) return 0;
    }
    else if (a == 2){
        if (b == 0) return 0;
        else if (b == 1) return 3;
        else if (b == 2) return 2;
        else if (b == 3) return 1;
    }
    else if (a == 3){
        if (b == 0) return 1;
        else if (b == 1) return 0;
        else if (b == 2) return 1;
        // else if (b == 3) return 3;
    }
    return 3;
}

void INPUT(){
    int n; cin >> n;
    unordered_map<char, int> um;
    um['A'] = 0; um['G'] = 1; um['C'] = 2; um['T'] = 3;

    string line; cin >> line;
    while (line.size() != 1){
        string tmp = "";
        for (int i=0; i<line.size() - 2; i++) tmp += line[i];
        
        int t = getDna(um[line[line.size() - 2]], um[line[line.size() - 1]]);
        if (t == 0) tmp += 'A';
        if (t == 1) tmp += 'G';
        if (t == 2) tmp += 'C';
        if (t == 3) tmp += 'T';
        line = tmp;
        // cout << line << endl;
    }
    cout << line << endl;
}

enum class A {
	A = 0, G, C, T
};

void SOLUTION(){
    int N;
	cin >> N;

	vector<vector<char>> table({ {'A','C','A','G'},{'C','G','T','A'},
		{'A','T','C','G'},{'G','A','G','T'} });
	string str, temp,start;
	map<char, A> m{
		{'A',A::A},
		{'G',A::G},
		{'C',A::C},
		{'T',A::T} };
	cin >> str;

	if (N != 1) {
		start = table[static_cast<int>(m[str[str.size() - 2]])][static_cast<int>(m[str[str.size()-1]])];
		for (int i = N - 3; i >= 0; i--) {
			temp = str[i] + start;
			start = table[static_cast<int>(m[temp[0]])][static_cast<int>(m[temp[1]])];
		}
	}
	if (N == 1) cout << str << endl;
	else cout << start << endl;
}

int main(){
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
}