t = int(input())
inp = [int(x) for x in input().split()]
sorted_inp = inp.sort()
result = 0
counter = 0
for x in sorted_inp:
    counter += x
    if (counter == 4):
        result += 1
        counter = 0
    if (counter>4):
        result += 2
        counter = 0
if(counter != 0):
    result += 1
print(result)

    