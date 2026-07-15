
# task 1 (3-08-24)
'''
1. Function to find the odd one in an array. (if others are odd then find the even, if others are even find the odd)

INPUT ARRAY                         OUTPUT
(a)[1,2,3,5,7,9]                       2
(b)[2,4,2,6,8,10,12,14,2,7]            7
Hint: Separate the task of determing the arra as odd or even, based on that find the odd one out.
'''

'''
2. Given a string find the character whose frequency is not like the frequency of others.

INPUT STRING.                    OUTPUT
(a)aasddffww
'''

#1. Function to find the odd one in an array. (if others are odd then
# find the even, if others are even find the odd)

arr1=[1,2,3,5,7,9]
arr2=[2,4,2,6,8,10,12,14,2,7]

def odd_one(arr):
    count=0
    for i in arr:
        if i%2==0: # i is an even number
            count+=1
    if count%2==0:
        for i in arr:
            if i%2!=0:
                return i
    else:
        for i in arr:
            if i%2==0:
                return i
print(odd_one(arr1))
print(odd_one(arr2))

''' Given a string find the character whose frequency is not like the frequency of others.

INPUT STRING.                    OUTPUT
(a)aasddffww
'''

def odd_one(string):
    count=0
    for i in string:
        if string.count(i)%2==0:
            count+=1
    if count%2==0:
        for i in string:
            if string.count(i)%2==1:
                return i
print(odd_one('aasddffww'))
