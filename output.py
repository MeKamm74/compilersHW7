from __future__ import print_function
stuff = [0 for i in range(1 , 20 +1)]
data = max = 0
i = loc = 0
def sort():
	i = n = 0
	flag = 0
	def swap():
		n = 0
		n = stuff [i - 1]
		stuff [i - 1]= stuff [i + 1 - 1]
		stuff [i + 1 - 1]= n 
		flag = True
	flag = True
	n = max 
	while n > 1 and flag :
		flag = False 
		i = 1 
		while i < n :
			if stuff [i - 1]> stuff [i + 1 - 1]:
				swap()
			
			i = i + 1 

		
		n = n - 1 

	
def find():
	i = j = k = 0
	found = 0
	i = 1 
	j = max 
	found = False 
	while i <= j and not found :
		k = i + j /2 
		if stuff [k - 1]> data :
			j = k - 1 
		else:
			if stuff [k - 1]< data :
				i = k + 1 
			else:
				found = True
			
		

	
	if found :
		loc = k 
	else:
		loc = 0 
	
max = 0 
print('>' , ' ' , end='')
data  = int(raw_input())

while data >= 0 and max < 20 :
	max = max + 1 
	stuff [max - 1]= data 
	print('>' , ' ' , end='')
	data  = int(raw_input())
	


sort()
print('(' , ' ' , end='')
i = 1 
while i <= max :
	print(stuff [i - 1], ' ' , end='')
	i = i + 1 


print(')' , '\n', end='')
print('?' , ' ' , end='')
data  = int(raw_input())

while data >= 0 :
	find()
	if loc == 0 :
		print('N' , 'o' , ' ' , 'm' , 'a' , 't' , 'c' , 'h' , ' ' , 'f' , 'o' , 'r' , ' ' , data , '\n', end='')
	else:
		print('S' , 't' , 'u' , 'f' , 'f' , '[' , loc , ']' , ' ' , '=' , ' ' , data , '\n', end='')
	
	print('?' , ' ' , end='')
	data  = int(raw_input())
	


print('e' , 'n' , 'd' , '\n', end='')
print()
