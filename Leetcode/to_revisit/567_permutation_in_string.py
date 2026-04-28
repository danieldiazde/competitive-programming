from collections import Counter, defaultdict

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        if not s1 or not s2: return False
        
        to_reach = dict(Counter(s1))
        needed = len(to_reach)
        have = 0
        freq = defaultdict(int)
        left = 0

        for right, char in enumerate(s2):
            freq[char] += 1

            if char in to_reach and freq[char] == to_reach[char]:
                have +=1

            while needed == have:

                if (right - left + 1) == len(s1):
                    return True

                freq[s2[left]] -= 1
                if s2[left] in to_reach and freq[s2[left]] < to_reach[s2[left]]:
                    have -=1
                left += 1 

        return False