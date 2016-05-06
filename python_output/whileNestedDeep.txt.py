from __future__ import print_function
x = y = z = 0
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


print(x , '\n', y , '\n', z , sep='', end='')
print()
