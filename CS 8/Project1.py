#Emily Lu, Simon Freund

import turtle
import math

def drawCircle(myTurtle, radius):
    numberOfSides = 30
    sideLength = 2*math.pi*radius/numberOfSides
    turnAngle = 360/numberOfSides
    for i in range(numberOfSides):
        myTurtle.forward(sideLength)
        myTurtle.left(turnAngle)

def drawCircleWithCenter(myTurtle, radius, x , y):
    myTurtle.up()
    myTurtle.goto(x, y)
    myTurtle.down()
    drawCircle(myTurtle, radius)

def drawSquareWithCenter(myTurtle, radius, x, y):
    myTurtle.up()
    myTurtle.goto(x, y)
    myTurtle.down() 
    for i in range(4):
        myTurtle.forward(2*radius)
        myTurtle.left(90)

def initialize(myTurtle):
    turtle.setworldcoordinates(-1, -1, 5, 5)
    myTurtle.hideturtle()

#random.randint(a,b) includes endpoints
#random.randrange(a,b) includes numbers from a to b
#random.uniform(a,b) float a<=x<b
    
import random 
cx= random.uniform(0, 5)
cy= random.uniform(-1,4)
cr= random.uniform(0,1) 
colors = ['white', 'yellow', 'green', 'blue', 'purple', 'red', 'black', 'magenta', 'pink', 'brown'] 

def generateCircle(myTurtle):
    cx= random.uniform(-1, 5)
    cy= random.uniform(-1,4)
    cr= random.uniform(0,1) 
    myTurtle.up()
    myTurtle.goto(cx, cy)
    myTurtle.down()
    Index = random.randint(0,9)
    color = colors[Index]
    myTurtle.color(color)
    myTurtle.begin_fill()
    drawCircleWithCenter(myTurtle, cr, cx, cy)
    myTurtle.end_fill()

def generateSquare(myTurtle):
    cx= random.uniform(-1, 5)
    cy= random.uniform(-1,4)
    cr= random.uniform(0,1) 
    myTurtle.up()
    myTurtle.goto(cx, cy)
    myTurtle.down()
    Index = random.randint(0,9)
    color = colors[Index] 
    myTurtle.color(color)
    myTurtle.begin_fill() 
    drawSquareWithCenter(myTurtle, cr, cx, cy)
    myTurtle.end_fill()
     

def generateFigures(myTurtle, numFig):
    for i in range(numFig):
        i = random.randint(2,3)
        if i==2:
            generateCircle(myTurtle)
        else:
            generateSquare(myTurtle)
            
import turtle
import math
import random            
bubbles = turtle.Turtle()
bubbles.shape('turtle')
bubbles.speed(200) 
initialize(bubbles)
generateFigures(bubbles, 100) 

    
    





        
    
    
    
