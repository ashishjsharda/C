#include <stdio.h>

/**
 * Find factorial of a number
 * @author ashish
 */

int fact(int num)
{
    if(num==1){
        return 1;
    }
    return fact(num-1)*num;
}
int main() {

    int factorial=fact(4);
    printf("%d",factorial);
    return 0;
}
