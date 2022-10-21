#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int count = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char c[6];
        scanf("%s",&c);
        //1331
        int str_size = 0;
        for(int k=0;k<6;k++)
        {
            if(c[k] == '\0')
                str_size = k-2;
        }
        //printf("str_size : %d\n",str_size);
        int for_num = (str_size+1)/2;
        int is_true = 1;
        for(int k=0;k<for_num;k++)
        {
            if(c[k] != c[str_size-k])
                is_true = 0;
            //printf("%c ? %c\n",c[k],c[str_size-k]);
        }

        if(is_true == 1)
            printf("뒤집어도 똑같습니다.\n");
        else
            printf("뒤집으면 같지 않습니다.\n");
    }
    printf("%d\n",count);
}