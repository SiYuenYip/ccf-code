#include<iostream>
using namespace std;

bool res7(int n)
{
    //cout<<n<<endl;
    if(n%7==0) return true;
    if(n%10 == 7 || n/10 ==7) return true;
    if((n/10)%10 ==7 || n/100==7)return true;
    else return false;
}
int main()
{
   // cout<<"input:"<<endl;
    int n;
    cin>>n;
    int a[4]={0};
   // cout<<"print a "<<a[0]<<endl;
    int num=0,i=1;
   // cout<<n<<endl;
    while(n--)
    {
        if(res7(i)){
            i++;
            a[num]++;
            num++;
            num=num%4;
            n++;
        }
        else
        {
            i++;
            num++;
            num=num%4;
        }

    }
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;


    return 0;
}