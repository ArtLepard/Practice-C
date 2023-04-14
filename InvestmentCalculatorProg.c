#include <stdio.h>
#include <stdlib.h>

int main(){

    float capital = 0.00f;
    printf("YourCapital: ");
    scanf("%f", &capital);
    
    int percentage = 0;
    printf("Enter your investment percentage: ");
    scanf("%d",&percentage);

    int period = 0;
    printf("Enter investment period(year): ");
    scanf("%d",&period);
    for(int q = 0; q < period ; q++) {
        capital = capital + capital / 100 * percentage; 
    }
    printf("\nCapial after %d years will be equal to %.2f", period, capital);
   return 0;

}
