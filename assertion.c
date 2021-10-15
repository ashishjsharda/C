#include <stdio.h>
#include <assert.h>


int main() {

    printf("%s","Enter an interger number");
    int num;
    scanf("%d",&num);
    assert(num>=10);
    printf("Entered integer is %d",num);
    return 0;
}
