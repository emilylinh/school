#Emily Lu, Simon Freund

def buildKey(rawKey):
    key = ''
    x = {}
    rawKey_sorted = sorted(rawKey)
    acc = 1
    for ch in rawKey_sorted:
        number = ord(ch)
        for number in rawKey_sorted:
            if number not in x:
                x[number] = acc
                acc = acc + 1
    for i in rawKey:
        key += str(x[i])
    return key

caps = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ' 
import random 
def toPlaintext(s, keyLength):
    plaintext = ''
    for char in s:
        if char in caps:
            plaintext = plaintext + char 
    if len(plaintext)% keyLength != 0:
        for i in range((len(plaintext)%keyLength) + 1):
            newS = random.randint(0,25)
            plaintext = plaintext + caps[newS]
    return(plaintext)

def columnar(plaintext, key):
    ciphertext = ''
    for i in range(1, len(key) + 1):
        newText = key.index(str(i))
        for index in range(len(plaintext)):
            if index%len(key) == newText:
                ciphertext += plaintext[index]
    return(ciphertext)

def encryptColumnar(s, rawKey): 
    c = caps
    rawKey_length = len(rawKey)
    C1 = True
    C2 = True
    C3 = rawKey_length <= 8
    for i in range(rawKey_length):
        if rawKey[i] not in c:
            C1 = False
            for x in range(i+1, rawKey_length):
                if rawKey[i] == rawKey[x]:
                    C2 = False
        if not(C1 and C2 and C3):
            return('Error')
        else:
            key = buildKey(rawKey)
            Plaintext = toPlaintext(s, len(key))
            ciphertext = columnar(Plaintext, key)
            print(ciphertext.upper())

                      
def encryptColumnar1(s, rawKey):
	key = buildKey(rawKey)
	Plaintext = toPlaintext(s, len(key))
	ciphertext = columnar(Plaintext, key)
	print(ciphertext.upper())


def encryptColumnar(s, rawKey):
    C1 = caps
    C2 = rawKey
    C3 = len(rawKey)
    for i in rawKey:
        if i not in C1:
            return('Error')
        if C2.count(i) > 1:
            return('Error')
        if C3 > 8:
            return('Error')
    key = buildKey(rawKey)
    plaintext = toPlaintext(s, len(key))
    newText = columnar(plaintext, key)
    print(newText.upper()) 
