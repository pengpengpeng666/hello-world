#include<stdio.h>
#include<unistd.h>
void main(void)
{
    int i;
    printf("hello gitlab\n");
    fork();
    printf("hello fork\n");
    scanf("%d", &i);
}
