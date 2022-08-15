
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
