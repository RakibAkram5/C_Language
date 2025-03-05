#include <stdio.h>
void main(){
	int a=10;
	int b=5;
	printf("a=%d and b=%d Before Swapping ",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d and b=%d After Swapping ",a,b);
}
