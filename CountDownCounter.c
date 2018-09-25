#include <stdio.h>

int main()
{
    unsigned int countDownCounter =100;
    while(countDownCounter) {
        printf("%d\n" , countDownCounter);
        countDownCounter--;
    }
    printf("Liftof\n");
    
    return 0;
 }
