class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        result = []
        count_dct = {}
        for i in nums:
            count_dct[i] = 0
        for i in nums:
            count_dct[i] += 1
        sorted_counts = (sorted(count_dct.items(), key=lambda x:x[1], reverse=True))
        for i in sorted_counts[:k][:k]:
            result.append(i[0])
        return result