host = input()
guest = input()
shuffled = input()
combined = host+guest
list1 = []
list2 = []
for i in combined:
	list1.append(i)
for i in shuffled:
	list2.append(i)
list1 = sorted(list1)
list2 = sorted(list2)
if(list1 == list2):
	print("YES")
else:
	print("NO")
