
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
Q) unique number at which bit difference
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int onecount=0;
        for(int j=0;j<n;j++){
            if((A[j]&(1<<i))>0) onecount++;
        }
        if(onecount%3!=0) ans = ans | (1<<i);
    }
    cout<<ans<<endl;
}
Q) count set bits in a range:
class Solution{
    public:
    int Nearest2Power(int n)
    {
        int c=0;
        while((1<<c)<=n)
        {
            c++;
        }
        return c-1;
    }
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0) return 0;
        int x = Nearest2Power(n);
        int ans = x*(1<<(x-1))+(n-(1<<x))+1+countSetBits(n-(1<<x));
        return ans;
    }
};
