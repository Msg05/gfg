class Solution:
    def binarysearch(self, arr, k):
        # Step 1: Initialize low, high, and result
        low= 0
        high = len(arr) - 1
        result = -1   # to store the first occurrence of k

        # Step 2: Loop until search space is valid
        while low <= high:
            # Step 3: Find the middle index
            mid = (low + high) // 2

            # Step 4: If arr[mid] is equal to k
            if arr[mid] == k:
                result = mid       # store the index
                high = mid - 1     # move left to find smaller index

            # Step 5: If arr[mid] is smaller than k
            elif arr[mid] < k:
                low = mid + 1      # move right

            # Step 6: If arr[mid] is greater than k
            else:
                high = mid - 1     # move left

        # Step 7: Return the result (-1 if not found)
        return result
