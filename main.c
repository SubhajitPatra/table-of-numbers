#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("tell me a number I will tell you it's table.\n");
    scanf("%d",&a);
    printf("...................\n");
    printf("Table of %d\n",a);
    printf("....................\n");
     int b=1;
     while(b<11){
        printf("%d X %d = %d\n",a,b,a*b);
        b++;
     }



    return 0;
}
