memo = {}
def fib(n):
	if n in memo: # key exists
		return memo[n]
	if n <= 2: f = 1
	else : f = fib(n-1)+fib(n-2)
	memo[n] = f;
	return f

#printing 10 fibonacci numbers
for i in range(1,47): # you can count as many you want not like c++
	if i == 10:
		print(fib(i))
		continue
	#print(fib(i),end=" ")
	print(f'{fib(i)} ',end= "")
