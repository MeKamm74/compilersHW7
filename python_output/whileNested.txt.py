from __future__ import print_function
x = y = 0
x = 1 
while x < 5 :
	y = 10 
	while y > 0 :
		y = y - 1 
		print('*' , sep='', end='')

	
	print('\n', sep='', end='')
	x = x + 1 


print(x , '\n', y , sep='', end='')
print()
