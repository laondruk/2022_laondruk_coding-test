//라온드럭 문제집 C언어 5번 문항:
 
#include <stdio.h>
int main(void) {
	int con_c, val_c, price, result;
	result = -1;
	scanf("%d %d %d", &con_c, &val_c, &price);
	if(price>val_c) {
		result = con_c / (price-val_c) +1;
	}
	printf("%d", result);
}
