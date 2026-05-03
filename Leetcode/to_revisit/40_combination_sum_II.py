class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        
        candidates.sort()

        solution = []

        def backtracking(current_index, current_sum, current_answer):

            if current_sum == target:
                solution.append(current_answer[:])
                return
            
            if current_sum > target:
                return
            
            for i in range(current_index, len(candidates)):

                if i > current_index and  candidates[i] == candidates[i  - 1]:
                    continue
                   

                if current_sum + candidates[i] <= target:
                    current_sum += candidates[i]
                    current_answer.append(candidates[i])
                    backtracking(i + 1, current_sum, current_answer)
                    current_sum -= candidates[i]
                    current_answer.pop()
            
        backtracking(0, 0, list())

        return solution