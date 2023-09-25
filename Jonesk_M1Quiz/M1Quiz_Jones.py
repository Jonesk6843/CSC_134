"""
This is the Template Repl for Python with Turtle.

Python with Turtle lets you make graphics easily in Python.

Check out the official docs here: https://docs.python.org/3/library/turtle.html

CSC 134
M1QUIZ
Jones
8/30/23
"""
import turtle

# Creating the turtles
Mikey = turtle.Turtle()
Mikey.color('orange')
Mikey.pensize(3)
Raph = turtle.Turtle()
Raph.color('darkred');
Raph.pensize(3)

# Drawing two pentagrams
#   Pentagram 1

# Draw the star
Mikey.left(80)
Mikey.forward(130)
Mikey.left(-145)
Mikey.forward(130)
Mikey.right(150)
Mikey.forward(130)
Mikey.right(140)
Mikey.forward(130)
Mikey.right(141)
Mikey.forward(139)

# Drawing the circle
Raph.penup()
Raph.goto(40,0)
Raph.pendown()
Raph.circle(70)

#   Pentagram 2
# Star
Mikey.penup()
Mikey.forward(100)
Mikey.pendown()
Mikey.left(-80)
Mikey.forward(-130)
Mikey.left(145)
Mikey.forward(-130)
Mikey.right(-150)
Mikey.forward(-130)
Mikey.right(-140)
Mikey.forward(-130)
Mikey.right(-141)
Mikey.forward(-139)

# circle
Raph.penup()
Raph.goto(-8,-155)
Raph.pendown()
Raph.circle(70)

#   Pentagram 3
# star
Mikey.penup()
Mikey.goto(-180, 40)
Mikey.pendown()
Mikey.left(80)
Mikey.forward(130)
Mikey.left(-145)
Mikey.forward(130)
Mikey.right(150)
Mikey.forward(130)
Mikey.right(140)
Mikey.forward(130)
Mikey.right(141)
Mikey.forward(139)

# circle
Raph.penup()
Raph.goto(-145, 40)
Raph.pendown()
Raph.circle(70)