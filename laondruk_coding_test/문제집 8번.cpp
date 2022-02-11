//라온드럭 문제집 C언어 8번 문항:

#include <stdio.h>
int main(void) {
	int x,y,w,h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min = ((x>w ? x:w) - (x<w ? x:w))<((y>h ? y:h) - (y<h ? y:h)) ? (x>w ? x:w) - (x<w ? x:w):(y>h ? y:h) - (y<h ? y:h); //x,y보다 위에 위치한 두변으로의 최단거리 
	min = min < (x<y ? x:y) ? min:(x<y ? x:y); //x,y보다 아래에 위치한 두변으로의 최단거리 포함해서 고려 
	printf("%d",min);
}
