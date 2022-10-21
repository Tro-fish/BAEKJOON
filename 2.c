#include <stdio.h>

int main(void)
{
    int building[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&building[i]);
    }
    // 1 9 8 3 5 4 1 3 2 1
    
    int result = 1;
    // 현재 가장 높은 빌딩 (뒤에서 부터 시작)
    int highest = building[9];
    
    for(int i=8;i>=0;i--)
    {
        if(highest < building[i])
        {
            result += 1;
            highest = building[i];
        }
    }
}