#Emily Lu, Simon Freund

def maxList(aList):
    x = " "
    print('Maximum is'+ x +str(max(aList))+ x +'at index'+ x+ str(aList.index(max(aList))))
    
def nameLengths(myList):
    x = " " 
    for s in myList:
        print(s + x + str(len(s)))

def pileUp():
    '''a game of luck where players must keep guessing until they unlock the magic word'''
    while True:
        sentence = input('I will keep looping unitl you find the magic word: ')
        if sentence == 'please':
            break
        else:
            print('Sorry, please try again.')
    return 'Congratulations! You have broken the loop'  

         
    
    
