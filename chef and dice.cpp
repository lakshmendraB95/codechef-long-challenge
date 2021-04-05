#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int layers = n/4;
        long long int die_at_top = n%4;
        long long a,b,c,d,e;
        a=b=c=d=e=0;
        if(die_at_top == 1)
        {
            d=1;
        }
        else if(die_at_top == 2)
        {
            c=2;
        }
        else if(die_at_top ==3 )
        {
            c=2;
            b=1;
        }
        if(layers >0)
        {
            a += (layers*4); 
            e = (4-die_at_top)*4; 
        }
        long long int answer = (a*11)+(b*15)+(c*18)+(d*20)+e;
        cout<<answer<<endl;
    }   
}