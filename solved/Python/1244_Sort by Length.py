def sort(lst):
	l = len(lst)
	for i in range(1,l):
		temp = lst[i]
		j = i-1
		while j>=0:
			if len(temp)>len(lst[j]):
				lst[j+1] = lst[j]
				lst[j]   = temp
			j = j-1
	return lst

n = int(input())
while n>0:
	lst = []
	lst = input().split()
	lst = sort(lst)
	limit = len(lst)
	for i in range(limit-1):
		print(lst[i], end=' ')
	print(lst[limit-1])
	n = n-1
	