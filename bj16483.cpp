#include <stdio.h>
#include <math.h>

double T;
int main(void) {
	scanf("%lf", &T);
	printf("%.0lf\n", round((T/2.0) * (T/2.0))); 
	return 0;
}
