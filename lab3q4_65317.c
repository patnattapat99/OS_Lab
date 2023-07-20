#include <stdio.h>
int main() {
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int sum = 0;
	int count = 0;
	while (n > 0) {	
		sum += n;
		count++;
		printf("enter a number : ");
		scanf("%d",&n);
	}
	printf("sum = %d\n",sum);
	printf("avg = %.2f\n",(double)sum/count);
	return 0;
}
