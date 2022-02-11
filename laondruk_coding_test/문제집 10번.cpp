//라온드럭 문제집 C언어 10번 문항:

#include <stdio.h>
int main(void) {
	int n, k, final=0;
	scanf("%d", &n);
	for(int i=n; i>0; i--) {
		scanf("%d", &k);
		final += k-1;
	}
	printf("%d\n", ++final);
}
