#include <iostream>
#include <vector>
using namespace std;

int retrive(int input, int now)
{
    int result = 0;

    if (input < now)
    {
        return 0;
    }
    else if (input == now)
    {
        return 1;
    }

    if (input >= now + 1)
    {
        result += retrive(input, now + 1);
    }
    if (input >= now + 2)
    {
        result += retrive(input, now + 2);
    }
    if (input >= now + 3)
    {
        result += retrive(input, now + 3);
    }

    return result;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int N, input;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        v.push_back(retrive(input, 0));
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}