if __name__ == "__main__":
	t = int(input())
	while t>0:
		lst         = []
		lst_sorted  = []
		m = int(input())
		lst = list(input().split())
		for i in range(m):
			lst[i] = int(lst[i])
		lst_sorted = lst.copy()
		lst_sorted.sort(reverse = True)
		count = 0
		for i in range(m):
			if lst[i] == lst_sorted[i]:
				count += 1
		print(count)
		t -= 1