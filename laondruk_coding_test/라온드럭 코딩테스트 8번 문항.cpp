#include <stdio.h>
int ans=0;
int Fibo(int n);
int main() {
	int n;
	scanf("%d", &n);
	if(n==1) ans++; //예외 처리 
	for(int i=1; i<n; i++) {
		int f = Fibo(i);
		ans += f;
		printf("%d + ", f);
		if (i==n-1) {
			f = Fibo(i+1);
			ans += f;
			printf("%d = ", f); 
		}
}
printf("%d", ans);
}
int Fibo(int n) { //재귀함수 이용 
	if(n<1)
	{
	return 0;
	}
	if ((n == 1) || (n == 2)) {
		return 1;
	}
	return Fibo(n - 2) + Fibo(n - 1);
}
