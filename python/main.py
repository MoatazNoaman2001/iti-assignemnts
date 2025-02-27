#1
import math

str ="sun raise every morning"
count=0
for c in str:
    if c in ['a' , 'u', 'e', 'i' , 'o']:
        count +=1
print(f"vowels count: {count}")

#2
def generateList(length, start):
    return [x for x in range(start, length)]

#3
lst = []
for i in range(0, 5):
    (lst.append
     (input("enter item: ")))
print(sorted(lst))
print(sorted(lst[::-1]))

#4
n = int(input("enter number: "))

if n%3 == 0 and n%5 ==0:
    print("FizzBuzz")
elif n%3 == 0:
    print("Fizz")
elif n%5 == 0:
    print("Buzz")

#5
str = input("type some text: ")
print(str[::-1])

#6
r = input("enter circle radius: ")
print(f"area: {math.pi * (int(r)**2)}")
print(f"circumference: {2 * math.pi * (int(r))}")

#7
name=input("please enter your name: ")
if len(name) != 0 and name.isalpha():
    email=input("please enter you email: ")
    import re
    valid = re.match(r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$', email)
    if valid:
        print(f"name: {name}, email: {email}")
    else:
        print("invalid email")
        print(f"name: ${name} , email: ${email}")
else:
    print("invalid name")

#8
str="iti is our world , we love iti, iti is the best"
print(str.count("iti"))

#9
alphas=[]
str=input("enter str for 9: ")
prev=''
curs=0
for c in str:
    if c > prev:
        prev=c
        if len(alphas) == 0 or len(alphas) < curs:
            alphas.append(c)
        else:
            alphas[curs] = alphas[curs] + c
    else:
        curs+=1
        alphas.append(c)
def strLen(s):
    return len(s)
print(alphas.sort(key=strLen, reverse=True))


