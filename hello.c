#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(void)
{
    int i;
    printf("hello gitlab\n");
    if(0 == fork()){
        for(i=0; i<8; i++)
            printf("hello fork\n");
        exit(0);
    }else{
        usleep(16);
        for(i=0; i<8; i++)
            printf("hello world\n");
    }
    printf("Fine.\n");
}
