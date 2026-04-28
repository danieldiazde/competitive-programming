from collections import deque
class Solution:
    def isValid(self, s: str) -> bool:

        if len(s) < 2:
            return False

        stack = deque()

        options = {
            '(': ')',
            '{': '}',
            '[' : ']'
        }

        if s[0] not in options:
            return False
        else:
            stack.append(options[s[0]])

        for i in range(1, len(s)):
            if s[i] in options:
                stack.append(options[s[i]])
            else:
                if not stack:
                    return False
                needed = stack.pop()
                if s[i] != needed:
                    return False
        if not stack:
            return True
        else:
            return False