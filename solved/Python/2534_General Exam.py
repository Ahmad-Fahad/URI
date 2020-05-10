def Sort(lst):
	l = len(lst)
	for i in range(1,l):
		temp = lst[i]
		j = i-1
		while j>=0:
			if temp>lst[j]:
				lst[j+1] = lst[j]
				lst[j]   = temp
			j = j-1
	return lst

while True:
	try:
		n,q = input().split()
		n   = int(n)
		q   = int(q)
		lst_n = []
		lst_q = []
		for i in range(n):
			x = int(input())
			lst_n.append(x)
		lst_n = Sort(lst_n)
		for i in range(q):
			x = int(input())
			lst_q.append(x)
		for i in lst_q:
			print(lst_n[i-1])
	except EOFError:
		break
