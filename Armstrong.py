number = int(input('Enter a Number:'))
n=number
sum = 0

while n!=0:
    
    k = n%10
    sum += k*k*k
    n//=10
if  sum == number:

    print('Armstrong Number')

else:

    print('Not A Armstrong Number')