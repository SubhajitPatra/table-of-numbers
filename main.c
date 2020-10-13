#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,x;
    printf("input a number I will tell you its table.\n");
    scanf("%d",&num);
    printf("input the multiple.\n");
    scanf("%d",&x);
    printf("Table of %d\n",num);
    printf("_____________________\n");
    for(int multiple=1;multiple<x;multiple= multiple+1){
    printf("%d X %d =%d\n",num,multiple,num*multiple);
    }

    return 0;
}
