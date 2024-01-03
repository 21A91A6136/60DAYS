1) Convert number to binary in c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,k;
    cin>>c;
    string a = "";
    while(c)
    {
        k = c%2;
        a=a+to_string(k);
        c = c/2;
    }
    reverse(a.begin(),a.end());
    std::cout << a << std::endl;
}
2) Count set bits
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,k=0;
    cin>>c;
    while(c)
    {
        if((c&1)>0)
        {
            k+=1;
        }
        c=c>>1;
    }
    cout<<k;
}
3) 
