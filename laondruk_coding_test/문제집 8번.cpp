//��µ巰 ������ C��� 8�� ����:

#include <stdio.h>
int main(void) {
	int x,y,w,h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min = ((x>w ? x:w) - (x<w ? x:w))<((y>h ? y:h) - (y<h ? y:h)) ? (x>w ? x:w) - (x<w ? x:w):(y>h ? y:h) - (y<h ? y:h); //x,y���� ���� ��ġ�� �κ������� �ִܰŸ� 
	min = min < (x<y ? x:y) ? min:(x<y ? x:y); //x,y���� �Ʒ��� ��ġ�� �κ������� �ִܰŸ� �����ؼ� ��� 
	printf("%d",min);
}
