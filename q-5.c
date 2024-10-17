#include<stdio.h>
int cube(int num){
	return num*num*num;
}
int main(){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	
	int result=cube (number);
	printf("cube of %d : %d\n",number,result);
}
