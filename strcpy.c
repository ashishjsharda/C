#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    char *description;
    strcpy(name,"Sainath");
    description=malloc(sizeof(name));
    if (description==NULL){
        printf("String is null");
    } else{
        strcpy(description,name);
    }
    printf("Description seen is %s",description);
    return 0;
}
