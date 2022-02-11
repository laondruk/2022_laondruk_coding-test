//라온드럭 문제집 C언어 2번 문항:
 
#include <stdio.h>
int main(void) {
	int n, v, p;
	int num = 0;
	p=0; v=1;
	int yes[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	for(int i=10; i>0; i--) {
		scanf("%d", &n);
		int ch =0;
		n = n%42;
		for(int j=10; j>0; j--) {
			if(yes[j] == n ) {
				ch++;
			}
		}
		if(ch==0) {
			yes[i] = n;
			num++;
		}
		v++;
		for(int j=10; j>0; j--) {
			//printf("%d\t", yes[j]);
		}
		//printf("=> num:%d", num);
		//printf("\n");
	}
	printf("%d", num);
}
