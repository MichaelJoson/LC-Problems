import numpy
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []
        counter = 0
        product = 1
        
        for i in range(len(nums)):
                if nums[i] == 0:
                    continue
                else:
                    product *= nums[i]

        if nums.count(0) > 1:
            for i in nums:
                output.append(0)
            return output
        if nums.count(0)==1: 
            for i in range(len(nums)):
                if nums[i] != 0:
                    output.append(0)
                elif nums[i]==0:
                    output.append(product)
            return output
        
        for i in range(len(nums)):
            nums[i] = int(product/nums[i])
        return nums