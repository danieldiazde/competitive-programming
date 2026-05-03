class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:

        stack = []

        def backtrack(current_index, current_answer):

            #Base Case
            if len(current_answer) == k:
                stack.append(current_answer[:])
                return

            for i in range(current_index, n + 1):
                current_answer.append(i)
                backtrack(i + 1, current_answer)
                current_answer.pop()
            
        
        backtrack(1, list())

        return stack

        