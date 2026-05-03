class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:

        stack = []
        candidates.sort()

        def backtrack(current_sum, visited_index, current_answer):

            if current_sum == target:
                stack.append(current_answer[:])
                return
            
            for i in range(visited_index, len(candidates)):

                if current_sum  +  candidates[i] <= target:
                    current_sum += candidates[i]
                    current_answer.append(candidates[i])
                    backtrack(current_sum, i, current_answer)
                    current_answer.pop()
                    current_sum -= candidates[i]
                    

        backtrack(0, 0, list())

        return stack
        