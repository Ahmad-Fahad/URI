c = int(input())

while(c > 0):
	m, n = input().split() 
	m = int(m)
	n = int(n)
	r = m//n
	if m%n != 0:
	   r = r+1
	print(r)
	c = c-1
	
	
	
		
