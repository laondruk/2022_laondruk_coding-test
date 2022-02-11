//라온드럭 문제집 C언어 7번 문항(다른풀이):

#include <stdio.h>
int main(void) {
	int a, b, c;
	a++; b++; c++;
	while (a!=0 && b!=0 && c!=0) {
		scanf("%d %d %d", &a, &b, &c);
		int hypo = (a>b ? a:b) > c ? (a>b ? a:b):c; //hypotenuse
		if (a==hypo && a != 0) {
			if(b*b + c*c == a*a) printf("right");
			else printf("wrong");
		}
		else if(b==hypo && a != 0) {
			if(a*a + c*c == b*b) printf("right");
			else printf("wrong");
		}
		else if(c==hypo && a != 0) {
			if(b*b + a*a == c*c) printf("right");
			else printf("wrong");
		}
		printf("\n");
	}
}
