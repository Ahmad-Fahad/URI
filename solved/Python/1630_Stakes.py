def gcd(x, y):
	while x%y!=0:
		z = x%y
		x = y
		y = z
	return y

while True:
	try:
		x, y = input().split() 
		x = int(x)
		y = int(y)
		if x > y :
			n = gcd(x, y)
		else:
			n = gcd(y, x)
		stake = 2*(x+y)/n
		stake = int(stake)
		print(stake) 
	except EOFError:
		break 
	
