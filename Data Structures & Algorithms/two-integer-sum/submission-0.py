class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
            found = {}
            for i,num in enumerate(nums):
                diff = target - num
                if diff in found:
                    return [ found [diff],i]
                found[num]=i
            