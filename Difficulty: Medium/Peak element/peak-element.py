class Solution:
    def peakElement(self, arr):
        n = len(arr)
        low, high = 0, n - 1
        
        while low <= high:
            mid = (low + high) // 2

            # Step 1: Check if mid is a peak
            if (mid == 0 or arr[mid] > arr[mid - 1]) and (mid == n - 1 or arr[mid] > arr[mid + 1]):
                return mid   # found peak

            # Step 2: If right neighbor is bigger → peak on right side
            elif mid < n - 1 and arr[mid] < arr[mid + 1]:
                low = mid + 1

            # Step 3: Otherwise → peak on left side
            else:
                high = mid - 1
        
        return -1  # (this will never happen because peak always exists)
