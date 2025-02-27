str=input("enter string: ")
c=input("enter char: ")
lst=[]
for  index, char in enumerate(str):
    if char == c:
        lst.append(index)
print(lst)

n=int(input("number: "))
nlst=[]
for i in range(1 , n +1):
    nlst.append([])
    for k in range(1, i+1):
        nlst[i -1].append(k * i)
print(nlst)

name_lst= ["ahmed", "fatma", "Ibrahim"]
name_dict={}
# print()
for name in name_lst:
    name_dict[name[0].lower()] = name
print(name_dict)