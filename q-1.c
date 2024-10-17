#include <stdio.h>

int main() {
    int no, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &no);

   
    int original = no;

   
    while (no != 0) {
        int sum = no % 10;
        reverse = reverse * 10 +sum;
        no /= 10;
    } 
    printf("Reversed number: %d", reverse);

 
}
