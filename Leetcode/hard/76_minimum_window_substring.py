from collections import defaultdict, Counter

class Solution:
    def minWindow(self, s: str, t: str) -> str:

        if len(t) > len(s) or not t: return ""

        to_reach = Counter(t)
        freq = defaultdict(int)

        left = 0
        have = 0
        need = len(to_reach)
        best = None
        smallest = float('inf')

        for right, char in enumerate(s):

            freq[char] += 1

            if char in to_reach and freq[char] == to_reach[char]:
                have +=1

            while have == need:

                if best is None or (right - left + 1) < smallest:
                    best = s[left:right + 1]
                    smallest = (right - left + 1)

                char_l = s[left]
                freq[char_l]-=1

                if char_l in to_reach and freq[char_l] < to_reach[char_l]:
                    have -=1

                left +=1
        
        if best is not None:
            return best
        else:
            return ""






        

        
            
        