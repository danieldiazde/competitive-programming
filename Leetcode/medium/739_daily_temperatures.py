class Solution:
    def dailyTemperatures(self, temperatures: list[int]) -> list[int]:
        answer = [0] * len(temperatures)
        
        # We only store indices
        stack = [] 
        #pOWERRR OF MONOLITHIC sTACK
        # Iterate backward through the array, starting from the very end
        for i in range(len(temperatures) - 1, -1, -1):
            
            # Pop elements from stack if they are cooler than or equal to current temp
            while stack and temperatures[stack[-1]] <= temperatures[i]:
                stack.pop()
            
            if stack:
                answer[i] = stack[-1] - i
            
            stack.append(i)

        return answer