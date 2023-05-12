#include <stdio.h>
int main(){
    char myarray[100];

    fgets(myarray, sizeof(myarray), stdin);

    printf("Hello Mr. %s\nHow are you?", myarray);

    return 0;
}
