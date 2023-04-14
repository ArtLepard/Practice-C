#include <stdio.h>

int main(){
    int capital, percentage, period;
    printf("Enter Capital: ");
    scanf("%d", &capital);
    printf("Enter persenjtage: ");
    scanf("%d", &percentage);
    printf("Enter period: ");
    scanf("%d", &period);
    int invRes = capital + capital / 100 * percentage;
    printf("Investments Result: %d", invRes);
    return 0;
}