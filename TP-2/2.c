#include<stdio.h>
int cube(int);
int main(void){
	int x;
	for(x=1;x<=10;x++){
		printf("%d\n",cube(x));
	}
	return 0;
}
int cube(int y){
	return y*y*y;
}
