class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        #print(intervals[0][1]) #print 2nd coord
        #print(intervals[1][0]) #print 1st coord
        intervals.sort(key = lambda i : i[0])
        result = []
        i = 0
        while i < len(intervals):
            temp = intervals[i][1]
            j = i+1
            while j < len(intervals) and intervals[j][0] <= temp:
                temp = max(temp, intervals[j][1])
                j+=1
            ans = (intervals[i][0], temp)
            result.append(ans)
            i=j
        return result
        
        
        
        '''
         if len(intervals)<=1:
            return intervals
        if len(intervals)==2:
            j = 0
            if (intervals[j][1] >= intervals[i][0]) and intervals[j][1] <= intervals[i][1]:
                temp = [min(intervals[j][0], intervals[i][0]), intervals[i][1]]
                result.append(temp)
                return result
            else:
                return intervals
        if len(intervals)>2:
            while i < len(intervals):
                if (intervals[i-1][1] >= intervals[i][0]) and intervals[i-1][1] <= intervals[i][1]:
                    if (intervals[i-1][0] > intervals[i][0]):
                        temp = [intervals[i][0], intervals[i][1]]
                    else:
                        temp = [intervals[i-1][0], intervals[i][1]]
                    result.append(temp)
                    i+=1
                else:
                    temp = [intervals[i][0], intervals[i][1]]
                    result.append(temp)        
                    i+=1
        return result
    
        
        '''
       