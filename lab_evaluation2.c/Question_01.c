#include <stdio.h>
int main()
{
    /* 
    int a = 10;
    int b = a++ + ++a + ++a - 2;
    printf("Value of a %d \n", a);
    printf("Value of b %d", b);

    printf("\nNEXT PROGRAM \n\n\n");
    int m = 2, n = 3, o = 0;
    int r = m++ + ++n - --m + ++o;
    printf("value of r is %d", r);/*

    /*
        printf("\nNEXT PROGRAM \n\n\n");
        int x=20;
        x+= x+++++x--x+++x;
        printf("x ix %d",x);
        error error error
    */
    /*
    int x=10;
    (a>10)?printf("\n Hai Garmiiiiii"); : printf("Hello Garmi");
    error error error
    */
   /*
    printf("\nNEXT PROGRAM \n\n\n");
    int x = 10, y = 4, z = 8;
    int r1 = ((x > y) && (x + y) < z) ? (x += x * y + z) : (y -= z * 2 - 4);
    printf("\n\nValue of r1= %d", r1);

    printf("\nNEXT PROGRAM \n\n");
    int choice = 2;
    switch (choice)
    {
    case 1:
        printf("\n hello");
    case 2:
        printf("\n hii");
    case 3:
        printf("\n hey");
    default:
        printf("\n bye");
    }

    printf("\nNEXT PROGRAM \n\n");
    float p = 2.5;
    if (p == 2.5)
    {
        printf("hello\n");
    }
    else
    {
        printf("hii \n");
    }

    int i;
    for (i = 1; i <= 10; i++)
        ;
    {
        printf(" \n %d \n", i);
    }
    */
    /*
    int j = 1;
    for (;;)
        printf("\n %d ", i);
*/
    /*
        int l,q;
        for ( l = 1,q=10; l <=10; l++,q--)
                printf("%d \t %d \n",l,q);*/

    int i,j,k;
    for ( i = 1; i <=30; i++)
    {
        for ( j = 30;j>i; j--)
        printf(" ");
        for(k=1;k<=2*i-1;k++)
        printf("*");    
        printf("\n"); 
    }
    

    return 0;
}