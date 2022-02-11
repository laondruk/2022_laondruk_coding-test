//라온드럭 문제집 C언어 1번 문항:
 
#include <stdio.h>
int main(void) {
	int input, out;
	int loc;
	scanf("%d", &input);
	for (int i=input; i>=4; i--) {
		int j=i;
		int loc=0;
		while(j) {
			int p = j %10;
			if (p==4 || p==7) {
				j = j/10;
			}
			else { 
				loc++; 
				j=0;
			}
		}
		if (loc ==0) {
			printf("%d", i);
			i=0;
		}
	}
}
