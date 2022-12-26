class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        sequence_start, longest_sequence = 0, 0
        numSet = set(nums)
        for i in nums:
            if i-1 not in numSet: #if num has no left neighbor it is start of sequence
                sequence_length = 0
                while (i+sequence_length) in numSet:
                    sequence_length+=1
                longest_sequence = max(longest_sequence, sequence_length)
        return longest_sequence