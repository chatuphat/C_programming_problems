#include <stdio.h>

void main()
{
    printf("===================== \n");
    printf("Tax Calculator \n");
    printf("====================== \n");
    int S,D;
    printf("Enter is S:");
    scanf("%d", &S);
    printf("Enter is D:");
    scanf("%d", &D);
    int net = S - D;
    double tax = 0;

    if (net > 1000000)
    {
        tax = 30;
    }
    else if (net > 5000000)
    {
        tax = 20;
    }
    else if (net > 200000)
    {
        tax = 7;
    }

    printf("========================= \n");
    printf("Net Money is: %d Baht \n",net);
    printf("Tax rate is: %1.f Percent \n",tax);
    printf("========================== \n");
}
