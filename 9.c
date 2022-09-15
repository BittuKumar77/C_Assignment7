//9. Write a program to check whether a given number is an Armstrong number or not

// 153 = 1 + 125 + 27
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number for checking armstrong numnber: ");
    scanf("%d", &num);
    int sum = 0;
    for (int i = num; i != 0; i /= 10)
    {
        int rem = i % 10;
        sum += rem * rem * rem;
    }
    if (sum == num)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    return 0;
}
