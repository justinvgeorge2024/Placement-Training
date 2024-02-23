// emi finder -

//(P*R*(1+R)^T)/((1+R)^T -1)
#include <math.h>
#include <stdio.h>

float calc_emi(float p, float r, float t)
{
    float emi;
    r = r / (12 * 100);
    t = t * 12;
    emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
    return (emi);
}
int main()
{
    float principal, rate, t;
    printf("Enter principal amount: ");
    scanf("%f",&principal);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time in year: ");
    scanf("%f",&t);
    printf("\nMonthly EMI is= %f\n", calc_emi(principal, rate, t));
    return 0;
}