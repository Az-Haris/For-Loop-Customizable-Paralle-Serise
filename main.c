#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, n, sum=0, dif, b,c;

    printf("Please Enter 1st Number : ");
    scanf("%d",&a);

    printf("Please Enter Last Number : ");
    scanf("%d",&n);

    printf("Please Enter Difference of 2 Number : ");
    scanf("%d",&dif);


    for(a; a<=n; a=a+dif)
    {
        sum=sum+a;
        printf("\t%d",a);
    }


    b=a+dif;
    c=a+dif+dif;
    printf("\n\n%d+%d+%d+............+%d = %d",a-100,b-100,c-100,n,sum);



    getch();
    return 0;
}
