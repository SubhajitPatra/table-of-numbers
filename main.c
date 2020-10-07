#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("input a number I will tell you its table.\n");
    scanf("%d",&num);
    for(int multiple=1;multiple<=10;multiple= multiple+1){
    printf("%d X %d =%d\n",num,multiple,num*multiple);
    }
    return 0;
}
