//��µ巰 ������ C��� 3�� ����:

#include <stdio.h>
int main() {	
	int n;
	char file[81], com[81];
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%s", &file); 
		if (i==0) {
			for(int j=0; j<50; j++) {
				com[j] = file[j];
			}
		}
		for(int j=0; j<50; j++) {
			if (com[j] != file[j]) {
				com[j] = '?';
			}
		}
	}
	printf("%s",com);
	return 0;
}
