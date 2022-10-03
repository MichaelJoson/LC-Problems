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
        '''
        for x in range(len(strs)):
            anagrams = []
            if strs[x] not in added:
                for y in range(x+1, len(strs)):
                    currentStr = strs[x]
                    nextStr = strs[y]
                    a = []
                    b = []
                    for j in currentStr:
                        a.append(j)
                    for k in nextStr:
                        b.append(k)
                    a.sort()
                    b.sort()
                    if a==b:
                        if currentStr not in anagrams:
                            anagrams.append(currentStr)
                        anagrams.append(nextStr)
                        added.append(currentStr)
                        added.append(nextStr)
            if len(anagrams) > 1:
                result.append(anagrams)
            else:
                result.append(strs[x])
        return result
        
        '''
        