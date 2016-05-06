from __future__ import print_function
stuff = [0 for i in range(1 , 20 +1)]
data = max = 0
i = loc = x = y = z = 0
def ifThenElseFails():
	x = 0
	x = -99 
	if x > 10 :
		print(1 , sep='', end='')
	else:
		print(2 , sep='', end='')
	
	print('\n', sep='', end='')
def assignmentSimpleRelOpsExpr():
	x = y = 0
	b1 = b2 = 0
	x = 10 
	y = 5 
	b1 = y > x 
	b2 = not b1 and True
	print(x , y , sep='', end='')
def p1a():
	print('a' , sep='', end='')
def p1b():
	p1a()
	print('b' , sep='', end='')
ifThenElseFails()
assignmentSimpleRelOpsExpr()
print('\n', sep='', end='')
p1b()
print('c' , sep='', end='')
print('\n', sep='', end='')
if True:
	if False :
		print(20 , sep='', end='')
	else:
		if True:
			print(15 , sep='', end='')
		else:
			print(10 , sep='', end='')
		
	

print('\n', sep='', end='')
x = 1 
while x < 5 :
	y = 4 
	while y > 0 :
		y = y - 1 
		z = 100 
		while z != 103 :
			print(z + y , sep='', end='')
			z = z + 1 

		
		print('\n', sep='', end='')

	
	x = x + 1 


max = 0 
print('>' , ' ' , sep='', end='')
data  = int(raw_input())

while data >= 0 and max < 20 :
	max = max + 1 
	stuff [max - 1]= data 
	print('>' , ' ' , sep='', end='')
	data  = int(raw_input())
	


print('(' , ' ' , sep='', end='')
i = 1 
while i <= max :
	print(stuff [i - 1], ' ' , sep='', end='')
	i = i + 1 


print(')' , '\n', sep='', end='')
print('e' , 'n' , 'd' , '\n', sep='', end='')
print()
