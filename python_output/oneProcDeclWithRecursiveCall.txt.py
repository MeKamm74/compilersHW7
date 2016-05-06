from __future__ import print_function
def p1():
	x = 0
	x  = int(raw_input())
	
	if x < 0 :
		print('!' , '\n', sep='', end='')
	else:
		p1()
	
	print('x' , '=' , x , '\n', sep='', end='')
p1()
print('d' , 'o' , 'n' , 'e' , sep='', end='')
print()
