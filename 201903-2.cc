#include <bits/stdc++.h>
 using namespace std;

bool judge(string str)
{
    bool res=false;
    queue<int>num;
    queue<char>op;
    for(int i=0;i<7;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num.push(str[i]-'0');
        }
        else if(str[i]=='x')
        {
            num.push(num.back()*(str[++i]-'0'));
        }
        else if(str[i]=='/')
        {
            num.push(num.back()/(str[++i]-'0'));
        }
        
        else
        {
            op.push(str[i]);
        }
        
    }
    int sum=num.front();
    num.pop();
    while(!op.empty())
    {
        if(op.front()=='+')
        {
            sum=sum+num.front();
            num.pop();
            op.pop();
        }
        else if(op.front()=='-')
        {
            sum=sum-num.front();
            num.pop();
            op.pop();
        }
    }
    if (sum==24)res=true;

    return res;
}

int main()
{
    string str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(judge(str))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}