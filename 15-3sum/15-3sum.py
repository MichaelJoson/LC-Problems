class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        triplets = []
        for i in range(len(nums)):
            j = i+1
            k = len(nums)-1
            while (j<k):
                if (nums[i]+nums[j]+nums[k]==0):
                    triplets.append((nums[i], nums[j], nums[k]))
                    j+=1
                    k-=1
                elif (nums[j]+nums[i]+nums[k]<0):
                    j+=1
                elif (nums[j]+nums[i]+nums[k]>0):
                    k-=1
        return set(triplets)
        '''
        result = []
        nums.sort()
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                for k in range(j+1, len(nums)):
                    if(nums[i] + nums[j] + nums[k] == 0):
                        triplets = [nums[i],nums[j],nums[k]]
                        triplets.sort()
                        if triplets not in result:
                            result.append(triplets)
        return result
        '''
        