if __name__ == "__main__":
	t = int(input())
	while t>0:
		sand  = input()
		lst   = list()
		count = 0
		for i in sand:
			if i == '<':
				lst.append(i)
			elif i == '>':
				if not lst:
					continue
				c = lst.pop()
				if c == '<': 
					count+=1
		print(count)
		t -= 1