words = input().split()
words = set(words)
count = {}
for word in words:
    length = len(word)
    if(length not in count):
        count[length] = []
    count[length].append(word)
m = max(count.keys())
for v in count[m]:
    print(v)
    break
