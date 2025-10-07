#include <stdio.h>
int main()
{
    int a,b;
    int operator;
    printf ("1.Addition 2.substraction 3.Multiplication 4.Division 5.Modulus Division\n");
    scanf("%d",&operator);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case 1 : printf("%d+%d=%d", a, b, a+b);
         break;
        case 2 : printf("%d-%d=%d", a, b, a-b);
        break;
        case 3 : printf("%d*%d=%d", a, b, a*b);
        break;
        case 4 : printf("%d/%d=%d", a, b, a/b);
        break;
        case 5 : printf("%d%%%d=%d", a, b, a%b);
        break; 
        default : printf("operator error");
    }
    return 0;
}