#include <iostream>
using namespace std;
#define min(a, b) (((a) < (b)) ? (a) : (b))
int min_result = 9999999;

void dfs(int N, int count)
{
    if (N == 1)
    {
        //정답 찾음
        if (count < min_result)
        {
            min_result = count;          
        }
    }
    else if (N > 1 && min_result >= count)
    {
        if (N % 3 == 0)
        {
            dfs(N / 3, count + 1);
        }
        if (N % 2 == 0)
        {
            dfs(N / 2, count + 1);
        }
        dfs(N - 1, count + 1);
    }
}

int main(void)
{
    int N;
    cin >> N;
    dfs(N, 0);
    cout << min_result << endl;
}