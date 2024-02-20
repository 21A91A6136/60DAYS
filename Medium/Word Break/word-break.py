#User function Template for python3
from itertools import combinations
class Solution:
    def wordBreak(self, n, s, dictionary):
        # Complete this function
        if not s:
            return 1
        for word in dictionary:
            if s.startswith(word):
                if self.wordBreak(n, s[len(word):], dictionary):
                    return 1
        return 0

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	test_case = int(input())

	for _ in range(test_case):
		n = int(input())
		dictionary = [word for word in input().strip().split()]
		s = input().strip()
		ob = Solution()
		res = ob.wordBreak(n, s, dictionary)
		if res:
			print(1)
		else:
			print(0)
# } Driver Code Ends