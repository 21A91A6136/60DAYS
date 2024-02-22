#Sort the array using insertion sort

class Solution:
    def insert(self, alist, index, n):
        pass
        
    def insertionSort(self, alist, n):
        for i in range(1, n):
            key = alist[i]
            j = i-1
            while j>=0 and key<alist[j]:
                alist[j+1] = alist[j]
                j -= 1
            alist[j+1] = key


#{ 
 # Driver Code Starts

if __name__=="__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
    
        Solution().insertionSort(arr,n)
    
        for i in range(n):
            print(arr[i],end=" ")
    
        print()
# } Driver Code Ends