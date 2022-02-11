//라온드럭 문제집 C언어 4번 문항:

#include <stdio.h>
int main() {	
	int n, a, b;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		int an=1;
		for(int j=b ; j>0; j--) {
			an*=a;
			an=an%10;
		}
		if (an==0) an=10;
		printf("%d\n", an);
	}
	return 0;
}
