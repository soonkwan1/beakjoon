#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
10812_바구니 순서 바꾸기
1116kb	0ms
*/
#include <cstdio>

const int LM = 101;
int a[LM], t[LM];

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif // _WIN32
	int n, m;
	scanf("%d %d", &n, &m);

	int x;
	for (x = 1; x <= n; ++x) a[x] = x;

	int i, j, k;
	while (m--) {
		scanf("%d %d %d", &i, &j, &k);
		for (x = i; x <= j; ++x) t[x] = a[x];

		int idxA = i, idxT = k;
		while (1) {
			a[idxA++] = t[idxT++];
			if (idxT == j + 1) idxT = i;
			if (idxT == k) break;
		}
	}

	for (x = 1; x <= n; ++x) printf("%d ", a[x]);
	puts("");
	return 0;
}
