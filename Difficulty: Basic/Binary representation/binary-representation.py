#User function Template for python3
class Solution:
	def getBinaryRep(self, n):
		# code here
		    return bin(n)[2:].zfill(32)