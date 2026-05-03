from collections import deque
import operator

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:

        operators = {'+':operator.add,
                    '-':operator.sub,
                    '*':operator.mul,
                    '/': lambda a, b: int(a / b)}

        number_stack = deque()

        for char in tokens:
            if char in operators:
                last = number_stack.pop()
                second_last = number_stack.pop()
                number_stack.append(operators[char](second_last, last))
            else:
                number_stack.append(int(char))
        
        return number_stack[0]