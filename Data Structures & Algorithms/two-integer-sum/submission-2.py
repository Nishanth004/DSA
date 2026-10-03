class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        loc = {}
        for i , n in enumerate(nums):
            diff = target - n
            if diff in loc:
                return [ loc[diff],i]
            loc[n] = i