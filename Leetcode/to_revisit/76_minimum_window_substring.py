from collections import Counter, defaultdict

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not t: return ""

        seen = defaultdict(int)
        freq = dict(Counter(t))
        have = 0
        need = len(freq)

        shortest = float('inf')
        left = 0
        best_window = [-1, -1]

        for right in range(len(s)):
            char = s[right]
            seen[char] += 1

            if char in freq and freq[char] == seen[char]:
                have += 1

            while have == need:
                if shortest > right - left + 1:
                    shortest = right - left + 1
                    best_window = [left, right]
                
                # Decrement FIRST, then check if we lost our match
                seen[s[left]] -= 1
                if s[left] in freq and seen[s[left]] < freq[s[left]]:
                    have -= 1

                left += 1

        if shortest != float('inf'):
            return s[best_window[0] : best_window[1] + 1]
        else:
            return ""
