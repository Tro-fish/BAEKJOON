#include <stdio.h>

int main(void)
{
    int A,B;
    scanf(" %d %d",&A,&B);
    if(A==B)
    {   
        printf("0\n");
        return 0;
    }
    if(A>B)
    {
        int temp;
        temp = A; A = B; B = temp;
    }

    printf("%d\n",B-A-1);
    for(int i=A+1;i<B;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    
    
}