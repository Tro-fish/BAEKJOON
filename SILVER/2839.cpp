#include <iostream>
using namespace std;

int N,x,y;

int find_min_sum()
{
    for(int i=1;i<N;i++)
    {
        x = i;
        y = 0;        
        for(int k=0;k<i+1;k++)
        {
            if((5*x + 3*y) == N)
            {
                return i;
            }
            else
            {
                x--; y++;
            }
        }
        if(3*i > N) 
        {
            return -1;
        }
    }
    return -1;
}

int main(void)
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    int result;
    cin>>N;
    cout<<find_min_sum()<<endl;    
}