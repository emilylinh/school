#Emily Lu, Simon Freund 

def buildKey(rawKey):
    key = "" 
    x = {}
    acc = 1
    sorted_rawKey = sorted(rawKey) 
    for ch in sorted_rawKey:
        code = ord(ch)
        for code in sorted_rawKey:
            if code not in x:
                x[code] = acc
                acc = acc + 1
    for i in sorted_rawKey:
        key += str(x[i])
    return key 
            
import random             
def toPlaintext(s, keyLength):
    acc = ''
    for char in s:
        if i in range(65, 65+26):           
            acc = acc + chr(i)
            if len(acc) not // keyLength:
                addChar = len(acc)% keyLength
                acc = acc + addChar
                
                
            
    
        
        
