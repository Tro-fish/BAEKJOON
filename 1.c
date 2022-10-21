#include <stdio.h>


void n_power(int *num,int *exp)
{
    // num = 3, exp =1
    // 
    int num_copy = *num;
    for(int i=0;i<*exp-1;i++)
    {
        *num *= num_copy;
    }
}

int main(void)
{
    int num, exp;
    scanf("%d %d",&num,&exp);

    n_power(&num,&exp);

    printf("%d\n",num);
}