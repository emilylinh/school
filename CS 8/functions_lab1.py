#Emily Lu

import turtle
tom= turtle.Turtle()
jerry= turtle.Turtle()
tom.speed(20) 
tom.forward(150)
tom.left(120)
tom.forward(150)
tom.left(120)
tom.forward(150)
tom.left(120)

jerry.speed(20)
def drawTriangleJerry(sideLength):
    jerry.forward(220)
    jerry.left(120)
    jerry.forward(220)
    jerry.left(120)
    jerry.forward(220)
    jerry.left(120)
    
drawTriangleJerry(220)

tom.reset()
jerry.reset()

def drawTriangle(myTurtle, sideLength):
    for i in range(3):
        myTurtle.forward(sideLength)
        myTurtle.left(120)

tom.speed(20)    
tom.color('red')
side =100
drawTriangle(tom, 100)
tom.shape('turtle')
jerry.shape('turtle')

jerry.speed(50)
jerry.up()
jerry.goto(-150,0)
jerry.down()
jerry.color('green')
side = 150
drawTriangle(jerry,150)

def drawFlower(myTurtle, sideLength, n):
    for i in range(n):
        drawTriangle(myTurtle, sideLength)
        myTurtle.left(360/n)

tom.speed(150)
tom.up()
tom.goto(250,250)
tom.down()
drawFlower(tom, 110, 20) 

jerry.speed(50)
jerry.up()
jerry.goto(-200,-200)
jerry.down()
drawFlower(jerry, 220, 16)

import random
sideLength= random.randint(10,100)

def randomTriangles(myTurtle, n):
    for i in range(n):
        myTurtle.up()
        myTurtle.goto(random.randint(-300,300), random.randint(-300,300))
        myTurtle.down()
        myTurtle.color('red') 
        myTurtle.begin_fill()
        drawTriangle(myTurtle,random.randint(10,100))
        myTurtle.end_fill()
        myTurtle.up()
        myTurtle.goto(random.randint(-300,300), random.randint(-300,300))
        myTurtle.down()
        

tom.speed(100)
randomTriangles(tom, 25)



                      




    




