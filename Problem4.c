#include <stdio.h>
void main(){
	int shirt1=423;
	int shirt2=320;
	int shirt3=270;
	int shirt4=680;
	int shirt5=520;
	float total_bill=shirt1+shirt2+shirt3+shirt4+shirt5;
	float discount=15.0/100.0;
	float discount_Bill=total_bill*(1-discount);
	printf("Total bill before discount: %.2f\n", total_bill);
    printf("Total bill after discount: %.2f\n", discount_Bill);
}
