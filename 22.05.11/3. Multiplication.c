#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	c=b;
	while(b){
		printf("%d\n",a*(b%10));
		b /= 10;
	}
	printf("%d", a*c);
}
