#include <iostream>
#include <algorithm>

using namespace std;

int a[51];

int main(void) {
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> a[i];
	}
	
	sort(a, a+N);
	
	int max=0;
	for(int i=0; i<N; i++) {
		int l=1;
		for(int j=i+1; j<N; j++) {
			if(a[j]-a[i]<5 && a[j]-a[i]>0) l++;
		}
		if(l>max) max=l;
	}
	
	cout << 5-max;
}
