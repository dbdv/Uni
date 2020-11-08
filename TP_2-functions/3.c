#include<stdio.h>
int main(){
	float num1=7.3,num2, *fPtr;

	*fPtr = num1;

	printf("%.1f\n",*fPtr);

	num2 = *fPtr;

	printf("%.1f\n",num2);

	printf("%p\n",&num1);

	printf("%p\n",&fPtr);

	return 0;
}
