#User function Template for python3

class Solution:
    def findIndex (self,arr, n, key ):
        #code here.
        if(key not in arr):
            return [-1,-1]
        first_index=arr.index(key)
        last_index=first_index
        for i in range(n-1,0,-1):
            if(arr[i]==key):
                last_index=i
                return first_index,last_index 
        return first_index,last_index


#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    key=int(input())
    ob = Solution()
    ans=ob.findIndex(a, n, key )
    print(*ans)
    
# } Driver Code Ends