//라온드럭 문제집 C언어 9번 문항:

#include <stdio.h>
#define pi 3.141592653589793238
int main(void) {
	int a;
	scanf("%d", &a);
	printf("%.6lf %.6lf", double(pi*a*a), double(a*a*2));
}
