#Emily Lu, Simon Freund

def caesark(s):
    caps = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    ciphertext = "" 
    for char in s:
        old = caps.index(char)
        new = (old + 7) % 26
        ciphertext = ciphertext + caps[new]
    return(ciphertext)

#'NOW IS THE WINTER OF OUR DISCONTENT'

def stringToPermutation(s):
    permutation = ""
    x = {}
    s_sorted = sorted(s)
    acc = 1
    for ch in s_sorted:
        number = ord(ch) 
        for number in s_sorted:
            if number not in x:
                x[number] = acc
                acc = acc + 1
    for i in s_sorted: 
        permutation += str(x[i]) 
    return permutation

#the function above now prints in the correct formatting. Ignore notes below.     
#return[(int(str(x[i]).rstrip(','))) for i in s] 
# can also use "return[x[i] for i in s]" 

def mixedList(aList):
    num = 0
    string = ''
    numcount = 0
    for i in aList:
        if type(i) == int:
            num = num +1
            numcount = numcount + 1
        elif type(i) == float:
            num = num + i
            numcount = numcount + 1
        elif type(i) == str:
            string = string + i  
    print('Average is ' + str(num/numcount))
    print('String portion is: ' + str(string)) 
