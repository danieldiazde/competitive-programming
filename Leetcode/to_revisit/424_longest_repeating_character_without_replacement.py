class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = longest = 0
        most_f = 0
        ch_freq = {}

        for right, ch in enumerate(s):
            ch_freq[ch] = ch_freq.get(ch, 0) + 1
            most_f = max(most_f, ch_freq[ch])

            while right - left + 1 - most_f > k:
                ch_freq[s[left]] -= 1
                left += 1

            longest = max(right - left + 1, longest)

        return longest