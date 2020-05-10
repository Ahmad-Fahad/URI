lst_name = []
lst_sign = []
n = int(input())
for i in range(n):
	ch, strg = input().split()
	lst_sign.append(ch)
	lst_name.append(strg)
lst_name.sort()
for i in lst_name:
	print(i)
plus  = 0
minus = 0
for x in lst_sign:
	if x == '+':
		plus = plus+1
	elif x == '-':
		minus = minus+1
print("Se comportaram: {} | Nao se comportaram: {}".format(plus,minus))