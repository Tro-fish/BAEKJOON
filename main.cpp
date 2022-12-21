#include <iostream>
#include <random>

int main()
{
    srand(time(NULL));
    for(int i=0;i<4;i++)
    {
        printf("%d\n",(rand() % 5)+1);
    }
}