#include <iostream>
using namespace std;
#define endl "\n"
#define INF 987654321

void INIT(){
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
}
void INPUT(){
	int n; cin >> n;
	string line; cin >> line;
	for (int i=n-5; i<n; i++){
		cout << line[i];
	}
	cout << endl;
}
int main(int argc, char* argv[]) {
	INIT();
	INPUT();
	return 0;
}
