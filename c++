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
__builtin_clz(a) - giveno of zeros from right 
__builtin_ctz(a) - give no  of zeros from left
__builtin_popcount(a) - counts the set bits
__builtin_parity(a) - count odd&even bits
int b = ceil(log2(n)); - required no of bits of a number;
int least2power = (1<<(b-1)); - least 2 power
next2power = (1<<b) - next 2 power
ceil(log10(a)) - for decimal number 
#include <iostream>
using namespace std;
int PrintBinary(int c)
{
    for(int i=31;i>=0;i--)
    {
        int mask = (1<<i);
        if((c&mask)>0)
        {
            cout<<1;
        }
        cout<<0;
    }
}
int MSB(int n)
{
    for(int i=31;i>=0;i--)
    {
        int mask = 1<<i;
        if((n&mask)>0)
        {
            return i;
        }
    }
}
int LSB(int n)
{
    for(int i=0;i<=31;i++)
    {
        int mask = 1<<i;
        if((n&mask)>0)
        {
            return i;
        }
    }
}
int main()
{
    int a = 5482;
    PrintBinary(a);
    cout<<__builtin_clz(a)<<endl;
    cout<<__builtin_ctz(a)<<endl;
    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_parity(a)<<endl;
    cout<<MSB(a)<<endl;
    cout<<LSB(b)<<endl;
    int b = (1<<(b-1));
    cout<<b<<endl;
    int c = (1<<(b));
    cout<<c<<endl;
    int d = ceil(log2(n));
    cout<<d<<endl;
    int e = ceil(log10(n));
    cout<<e<<endl;
}
