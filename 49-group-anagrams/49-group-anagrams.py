class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        added = []
        anagrams = {}
        
        for x in strs:
            sortedWord = ''.join(sorted(x))
            if sortedWord in anagrams:
                anagrams[sortedWord].append(x)
            else:
                anagrams[sortedWord] = [x]
        return anagrams.values()