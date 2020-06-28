#Emily Lu, Simon Freund


names = ['joe','tom','barb','sue','sally']
scores = [10,23,13,18,12]
       
def makeDictionary(names, scores):
    scoreD = {names[n]: scores[n] for n in range(len(names))}
    return(scoreD)

scoreD = makeDictionary(names, scores)

#scoreD['barb']
#scoreD['john'] = 19
#scoreD['sally'] = scoreD['sally'] + 1
#del scoreD['tom']

def sortScores(scoreD):
    return[values for values in sorted(scoreD.values())]

def averageScores(scoreD):
    average = sum(values for values in scoreD.values())/len(scoreD.values())
    return float(average)
            
def printNames(scoreD):
    for key in sorted(scoreD.keys()):
        print ( key, '', scoreD[key]) 
    

    
    






