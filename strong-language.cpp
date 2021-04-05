#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n,k;
        cin>>n>>k;
        cin>>s;
        int count, max;
        count = max = 0;
        for(int i = 0 ; i<s.length(); i++){
            if(s[i] == '*')
            {
                count++;
                if(count>max)
                {
                    max=count;
                }
            }
            else
            {
                count=0;
            }

            if(max == k)
            {   
                cout<<"YES"<<endl;
                break;
            }
        }
        if(max<k)
        {
        cout<<"NO"<<endl;
        }
    }
    
}