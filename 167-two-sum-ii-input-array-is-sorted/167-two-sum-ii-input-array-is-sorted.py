class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        start = 0
        end = len(numbers)-1
        while (start<end):
            if numbers[start] + numbers[end] == target:
                result = [start+1, end+1]
                return result
            elif numbers[start] + numbers[end] < target:
                start += 1
            else:
                end -= 1
        return result
        '''
        for i in range(len(numbers)):
            for j in range(i+1, len(numbers)):
                if numbers[i] + numbers[j] == target:
                    result = [i+1,j+1]
                    return result
        return 0
        '''
        
        