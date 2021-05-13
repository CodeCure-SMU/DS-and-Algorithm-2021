

table = {')':'(', '}':'{', ']':'['}

class Solution:
	def isValid(self, s: str) -> bool:
		stack = []
		for char in s:
			print(stack)
			if char not in table:
				stack.append(char) # (
			elif not stack or stack.pop() != table[char]:
				return False
		return len(stack) == 0

s = "()"
print(Solution().isValid(s))
