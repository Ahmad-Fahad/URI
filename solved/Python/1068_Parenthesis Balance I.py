def is_correct(s):
    lst = list()
    for i in s:
        if i == '(':
            lst.append(i)
        elif i ==')':
            if not lst:
                return False
            lst.pop()
    if not lst:
        return True
    else:
        return False
while True:
	try:
		exp  = input()
		flag = is_correct(exp)
		if flag==True:
			print("correct")
		else:
			print("incorrect") 
	except EOFError:
		break