#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int sumarray[t];
    int sum=0;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &sumarray[i]);
        sum = sum + sumarray[i];
    }
    printf("%d", sum);
    return 0;
}