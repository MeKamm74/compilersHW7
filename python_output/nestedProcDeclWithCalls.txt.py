from __future__ import print_function
x = 0
def p0():
	print('!' , sep='', end='')
def p1():
	a = 0
	def p1a():
		b = 0
		def p1a_a():
			f = 0
			f = 1 + 2 
			print('f' , '=' , f , '\n', sep='', end='')
		b = 1 + 1 
		p1a_a()
		print('b' , '=' , b , '\n', sep='', end='')
	a = 1 
	p1a()
	print('a' , '=' , a , '\n', sep='', end='')
p1()
print('\n', 'd' , 'o' , 'n' , 'e' , sep='', end='')
print()
