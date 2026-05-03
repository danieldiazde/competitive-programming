class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:

        stack = []
        #When problem says order doesn't matter, I must use a starting index, that way it only passes thorugh numbers it hasn't seen yet
        

        def backtrack(starting_index : int, candidate):
            stack.append(candidate[:])

            for i in range(starting_index, len(nums)):
                candidate.append(nums[i])
                backtrack(i + 1, candidate)
                candidate.pop()

        backtrack(0, list())

        return stack
        