
for i in range(1, 101):
    print('FizzBuzz'[i%3 and 4:i%5 and 4 or 8] or i, end=' ') 
print()

