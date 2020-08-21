preInit = [1,2,3,4]
print(preInit)
userSize = int(input('Please enter list size:'))
userList = []
print('Please Enter ',userSize,' elements',sep="")
for i in range(userSize):
    userList.append(int(input()))
print(userList)
print("Now Sorting:")
userList.sort()
print('Sorted List is:')
print(userList)    