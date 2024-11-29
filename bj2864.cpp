#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main() {
	int A, B, len_A = 1, len_B = 1;	// len_A, B: A와 B의 각 최대 자릿수
	int i, minA, maxA, minB, maxB;
	scanf("%d %d", &A, &B);
	minA = A;	maxA = A;	minB = B;	maxB = B;
 
	int temp = A;	// A의 최대 자릿수 파악
	for (i = 10; temp / i != 0; i * 10) {
		len_A++;
		temp /= i;
	}
 
	temp = B;	// B의 최대 자릿수 파악
	for (i = 10; temp / i != 0; i * 10) {
		len_B++;
		temp /= i;
	}
 
	int deci = 10;
	for (i = 0; i < len_A; i++) {
		if (A / (deci / 10) % 10 == 5)	// 5인 것은 6으로 바꿔서 max에 저장
			maxA = maxA + deci / 10;
 
		else if (A / (deci / 10) % 10 == 6)	// 6인 것은 5로 바꿔서 min에 저장
			minA = minA - deci / 10;
		
		deci *= 10;
	}
 
	deci = 10;
	for (i = 0; i < len_B; i++) {
		if (B / (deci / 10) % 10 == 5)
			maxB = maxB + deci / 10;
 
		else if (B / (deci / 10) % 10 == 6)
			minB = minB - deci / 10;
 
		deci *= 10;
	}
	printf("%d %d", minA + minB, maxA + maxB);
	return 0;
}
