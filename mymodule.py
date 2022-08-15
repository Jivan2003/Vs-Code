
string = input(("Enter a string:"))
if(string == string[::-1]):
    print ("The string is a Pallindrome")
else:
    print("Not a Pallindrome")

def p(str):
    for i in range(0,int(len(str))/2):
        if str[i] != str[len(str)-i-1]:
            return False  
        else:
            s = input("Enter any string")

            str1 = p(s)
        if(str1):
            print("string is Pallindrome")
        else :
            print("not a Pallindrome")


num1 = input('Enter first number:')  
num2 = input('Enter second number:')  
      
sum = float(num1) + float(num2)  
min = float(num1) - float(num2)  
mul = float(num1) * float(num2)  
div = float(num1) / float(num2)  
    
print('The sum of {0} and {1} is {2}'.format(num1, num2, sum))  
    
print('The subtraction of {0} and {1} is {2}'.format(num1, num2, min))  
    
print('The multiplication of {0} and {1} is {2}'.format(num1, num2, mul))  

print('The division of {0} and {1} is {2}'.format(num1, num2, div))

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