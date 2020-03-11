#include<bits/stdc++.h>

using namespace std;

bool judge(string str)
{
    queue<int> q;
    stack<int> s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='0'&& str[i]<='9')
            q.push(str[i]-'0');
        if(str[i]=='+')q.push(-1);
        if(str[i]=='-')q.push(-2);
        if(str[i]=='x')q.push(-3);
        if(str[i]=='/')q.push(-4);

        cout<<q.back()<<"\t";
    } 
cout<<" :q"<<endl;
int temp;
    while(!q.empty())
    {
        
        if(q.front()==-3)
        {
            q.pop();
            temp=s.top()*q.front();
            s.pop();
            s.push(temp);
            cout<<q.front()<<'\t'<<"temp: "<<temp<<endl;
            q.pop();
        }
        else if(q.front()==-4)
        {
            q.pop();
            temp=s.top()/q.front();
            s.pop();
            s.push(temp);
            cout<<q.front()<<'\t'<<"temp: "<<temp<<endl;;
            q.pop();
        }
        //if((q.front()>='0'&& q.front()<='9')||q.front()=='+'-'0' || q.front()=='-'-'0')
        
        else
        {
            s.push(q.front());
            q.pop();
        }  
        //q.pop();
    }
    stack<int> ss;
    //s.pop();
    cout<<"s.size: "<<s.size()<<endl;
    while(!s.empty())
    {
        ss.push(s.top());cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"size: "<<ss.size()<<endl;
    int sum=ss.top();
    ss.pop();
    while(!ss.empty())
    {
        if(ss.top()==-1)
        {
            ss.pop();
            sum =sum+ ss.top();
            ss.pop();
        }
        else if(ss.top()==-2)
        {
            ss.pop();
            sum=sum-ss.top();
            ss.pop();
        }
        else
        {
            sum=ss.top();
            ss.pop();
        }
        cout<<ss.size()<<" :"<<sum<<endl;
    }
    if (sum==24)return true;
    else return  false;

}

int main()
{
    string str;
    int n;
     cin >>n;
     for(int i=0;i<n;i++)
     {
         cin>>str;
         if(judge(str))cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
     }

     return 0;
}