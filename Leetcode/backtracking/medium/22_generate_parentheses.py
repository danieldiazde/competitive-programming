class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        stack = []

        def backtracking(open_count, closed_count, string):

            if open_count == closed_count and closed_count == n:
                stack.append(string)
                return
            
            if open_count < n:
                backtracking(open_count + 1, closed_count, string + "(")
            
            if closed_count < open_count:
                backtracking(open_count, closed_count + 1, string + ")")

            
        backtracking(0,0, '')
        return stack


            

