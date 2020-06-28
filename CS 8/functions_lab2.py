#Emily Lu, Simon Freund

    
import turtle

tristan = turtle.Turtle()
isolde = turtle.Turtle()
tristan.shape('turtle')
isolde.shape('turtle')
tristan.speed()
isolde.speed() 
    
turtle.setworldcoordinates(0, 0, 50, 50)

def setup(myTurtle1, myTurtle2):
    myTurtle1.up() 
    myTurtle1.goto(1,25)
    myTurtle1.down()
    myTurtle2.up()
    myTurtle2.goto(1,25)
    myTurtle2.down()
    myTurtle1.color('red')
    myTurtle2.color('red')
    myTurtle1.setheading(0)
    myTurtle2.setheading(0)

import random

def newHeading(myTurtle, maxAngle):
    x=random.uniform(-maxAngle, maxAngle)
    myTurtle.setheading(x) 

def newColors(myTurtle1, myTurtle2):
    x=myTurtle1.xcor()
    y=myTurtle2.xcor() 
    if x > y:
        myTurtle1.color('green')
        myTurtle2.color('red')
    else:
        myTurtle1.color('red')
        myTurtle2.color('green')

def tipsyTurtleRace(myTurtle1, myTurtle2, maxAngle, numSteps):
    for i in range(numSteps):
        newHeading(myTurtle1, maxAngle)
        myTurtle1.forward(1)
        newHeading(myTurtle2, maxAngle)
        myTurtle2.forward(1)
        newColors(tristan, isolde) 
       
setup(tristan, isolde)
tipsyTurtleRace(tristan, isolde, 61, 50)



   

