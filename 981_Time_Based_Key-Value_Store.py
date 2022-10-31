import bisect

class TimeMap:

    def __init__(self):
        self.timeMap = collections.defaultdict(list)
        self.valueMap = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        bisect.insort(self.timeMap[key], timestamp) 
        self.valueMap[(key, timestamp)] = value

    def get(self, key: str, timestamp: int) -> str:
        
        index = bisect.bisect_right(self.timeMap[key], timestamp) 
        if index == 0:
            return "" 
        return self.valueMap[(key, self.timeMap[key][index-1])]
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)
