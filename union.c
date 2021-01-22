#include <stdio.h>

/**
 * Example using Union
 * @author ashish
 */
union Data{
    int i;
    float f;
};
int main() {
    union Data data;
    printf("\n Memory occupied by data is %d\n",sizeof(data));
    return 0;
}
