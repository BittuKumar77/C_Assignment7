//5. Write a program to check whether two given numbers are co-prime
//numbers or not

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    int flag = 1;
    int condition = x < y ? x : y;
    for (int i = 2; i <= condition; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("It is co-prime no");
    else
        printf("It is not co-prime no.");
    return 0;
}
