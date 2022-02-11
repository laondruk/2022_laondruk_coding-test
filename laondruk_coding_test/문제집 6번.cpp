//라온드럭 문제집 C언어 6번 문항:

#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void) {
	char color[7], clc[3];
	for (int i=0; i<3; i++) {
		scanf("%s", color);
		if (!strcmp(color, "black")) { clc[i] = 0; }
		else if (!strcmp(color, "brown")) { clc[i] = 1; }
		else if(!strcmp(color, "red")) { clc[i] = 2; }
		else if (!strcmp(color, "orange")) { clc[i] = 3; }
		else if (!strcmp(color, "yellow")) { clc[i] = 4; }
		else if(!strcmp(color, "green")) { clc[i] = 5; }
		else if (!strcmp(color, "blue")) { clc[i] = 6; }
		else if (!strcmp(color, "violet")) { clc[i] = 7; }
		else if(!strcmp(color, "grey")) { clc[i] = 8; }
		else if(!strcmp(color, "white")) { clc[i] = 9; }
	}
	long long final = (clc[0]*10 + clc[1]) * pow(10, clc[2]);
	printf("%lld", final);
}
