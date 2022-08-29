#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> s;
    int N;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        int num;
        string input;
        cin>>input;
        if(input == "push")
        {
            cin>>num;
            s.push(num);
        }
        else if(input == "top")
        {
            if(s.empty())
            {
                cout<<-1<<"\n";
            }
            else
            {
               cout<<s.top()<<"\n";
            }
        }
        else if(input =="size")
        {
            cout<<s.size()<<"\n";
        }
        else if(input == "empty")
        {
            if(s.empty())
            {
                cout<<1<<"\n";
            }
            else
            {
                cout<<0<<"\n";
            }
        }
        else if(input=="pop")
        {
            if(s.empty())
            {
                cout<<-1<<"\n";
            }
            else
            {
                cout<<s.top()<<"\n";
                s.pop();
            }
        }
    }
    return 0;
}