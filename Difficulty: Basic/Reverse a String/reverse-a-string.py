#User function Template for python3

class Solution:
     def reverseString(self, s: str) -> str:
        # code here
        return s[::-1]
          
"""
Explanation:
s[::-1] is Python’s slicing syntax that reverses the string.
s[start:stop:step]
start → index to begin (default = 0)
end → index to stop (default = len(s))
step → how much to move forward or backward each time

So, when we use s[::-1],we’re saying “start from end and step backward one at a time.”
"""