# User function Template for python3

class Solution:
    def countOfElements(self, x, arr):
        count = 0
        for num in arr:
            if num <= x:
                count += 1
        return count


