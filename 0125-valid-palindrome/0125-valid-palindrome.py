class Solution:
    def isPalindrome(self, s: str) -> bool:
        ans = ""
        for i in s:
            if('a'<=i<='z') or ('A'<=i<='Z') or ('0'<=i<='9'): 
                ans = i.lower() + ans

        return ans == ans[::-1]