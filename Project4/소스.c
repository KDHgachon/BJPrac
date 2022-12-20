#include <stdio.h>
#define MAX 5
int main() {
	int a[5] = { 10,20,30,40,50 };
	int MAX,l=0, h=MAX-1, m, data,flag=0;
	scanf("%d", &data);
	while (l <= h && flag == 0) {
		m = (l + h) / 2;
		if (data == a[m]) {
			flag == 1;
			printf("Data Found->%d, ");
		}
		else if (data > a[m]) {
			l = m + 1;
		}
		else {
			h = m - 1;
		}
	}
	return 0;
}