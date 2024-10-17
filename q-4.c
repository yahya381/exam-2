#include<stdio.h>
int main(){
	float Fahrenheit,celsius;
	printf("Enter temperature in Fahrenheit :");
	scanf("%f",&Fahrenheit);
	
	celsius=(Fahrenheit-32)/1.8;
	
	printf("%.2f°F = %.2f°C\n",Fahrenheit,celsius);
}

