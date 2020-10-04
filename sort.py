n = int(input())
nums = [int(x) for x in input().split()][:n]
d = {}
for i in range(n):
    freq = nums.count(nums[i])
    if(freq not in d):
        d[freq] = []
    if(nums[i] not in d[freq]):
        d[freq].append(nums[i])
for freq in sorted(d.keys()):
    for i in sorted(d[freq]):
            print(i,end = " ")
