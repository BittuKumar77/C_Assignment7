//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.


#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int x = 0, y = 1;
    int sum = 0, flag = 0;
    if (n == 0 || n == 1)
        flag = 1;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            sum = x + y;
            x = y;
            y = sum;
            if (n == sum)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
        printf("Yes!, it is fibonacci series. ");
    else
        printf("Oops!, it is not fibonacci series. ");
    return 0;
}
