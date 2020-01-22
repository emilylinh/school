#Emily Lu, (partner not available)

from cImage import*

def photoAlbum():
    controls = FileImage('bottom_bar.gif')
    myWin = ImageWin('photo album', 400, 350)
    controls.setPosition(0, 300)
    controls.draw(myWin)
    pic0 = FileImage('picture0.gif')
    pic0.draw(myWin)
    current_index = 0
    n = eval(input("Enter the total # of index of photos you want in your album:")) 
    while True:
        x, y = myWin.getMouse() #click function 
        if 20<x<60 and 305<y<345: #the backward button 
            current_index = (current_index - 1) % (n+1)
            nextImage = FileImage('picture'+str(current_index) +'.gif')
            nextImage.draw(myWin)
        if 355<x<395 and 305<y<345: #the forward button 
            current_index = (current_index + 1) % (n+1)
            nextImage = FileImage('picture'+str(current_index) +'.gif')
            nextImage.draw(myWin)
        if 180<x<220 and 305<y<345: #the exit button, click twice to exit. 2nd click can be anywhere 
            myWin.exitOnClick() 
            break           

        
        
        
        
    
    
    
