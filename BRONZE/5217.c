#include <stdio.h>

void pairs(int input)
{
    printf("Pairs for %d : ",input);
    for(int i=1;i<input;i++)
    {
        for(int k=1;k<input;k++)
        {
            if(k+i == input && k>i)
            {
                printf("%d %d ",i,k);
            }
        }
    }
    printf("\n");
}

int main(void)
{
    int n;
    scanf(" %d",&n);
    for(int i=0;i<n;i++)
    {
        int input;
        scanf(" %d",&input);
        pairs(input);
    }
}