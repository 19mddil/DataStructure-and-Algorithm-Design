def fib(n):
	if n <= 2: return 1
	else : return fib(n-1)+fib(n-2)

#printing 10 fibonacci numbers
for i in range(1,11):
	if i == 10:
		print(fib(i))
		continue
	#print(fib(i),end=" ")
	print(f'{fib(i)} ',end= "")

