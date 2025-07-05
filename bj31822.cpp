#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string recourse;
    int N, result = 0;
    
    cin >> recourse;
    cin >> N;
    
    vector<string> v(N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < N; ++i) {
        if (recourse.substr(0, 5) == v[i].substr(0, 5)) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
