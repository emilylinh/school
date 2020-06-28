#Emily Lu, (partner not available)

from cImage import*

def freq(fileName):
    myIm = FileImage(fileName)
    w = myIm.getWidth()
    h = myIm.getHeight()
    d = {} 
    for w_ind in range(w):
        for h_ind in range(h):
            myPix = myIm.getPixel(w_ind, h_ind)
            r = myPix.getRed()
            g = myPix.getGreen()
            b = myPix.getBlue()
            x = (r, g, b)
            if x not in d:
               d[x] = 1
            else:
                d[x] = d[x] + 1
    return(d)

d = freq('melon.gif') 
for item in d:
    print(str(item).rjust(20), str(d[item]).rjust(20))

#      (167, 96, 198)                 7251
#     (251, 248, 232)                79527
#      (246, 159, 54)                 8848
#       (242, 14, 34)                53212
#     (196, 162, 208)                11743
#      (254, 235, 64)                18039
#       (235, 98, 59)                 9485
#      (146, 27, 184)                16695

def aver(d):
    lstR = []
    lstG = []
    lstB =[]
    lstF = [] 
    for item in d:
        R = (item[0] * d[item])
        G = (item[1] * d[item])
        B = (item[2] * d[item])
        lstR.append(R)
        lstG.append(G)
        lstB.append(B)
        lstF.append(d[item]) 
    numOfFreq = sum(lstF) 
    avR = sum(lstR)/numOfFreq 
    avG = sum(lstG)/numOfFreq 
    avB = sum(lstB)/numOfFreq 
    tup = (avR, avG, avB)
    return tup

tup = aver(d) 

def averColor(tup):
    myWin2 = ImageWin('averColor', 300, 200) 
    im = EmptyImage(300, 200)
    pix = Pixel(int(tup[0]), int(tup[1]), int(tup[2]))
    im.draw(myWin2) 
    for x in range(300):
        for y in range(200):
            im.setPixel(x, y, pix)
    
