#without loo
import turtle

a = int(input("Nhap a = "))

p = turtle.Turtle()
p.speed(1)

p.backward(300)
p.forward(600)
p.penup()
p.goto(260, 15)
p.write("Ox (truc hoanh)", font = ("Arial", 12, "normal"))

p.goto(0, 0)
p.pendown()
p.goto(0, -300)
p.goto(0, 300)
p.penup()
p.goto(15, 290)
p.write("Oy (truc tung)", font = ("Arial", 12, "normal"))

p.penup()
p.goto(0, 0)

p.goto(-a/2, -a/2)
p.pendown()
p.color("black")
p.pensize(2)

p.forward(a)
p.left(90)
p.forward(a)
p.left(90)
p.forward(a)
p.left(90)
p.forward(a)
p.left(90)

p.penup()
p.goto(-a/4, -a/2)
p.pendown()
p.pensize(1)
p.color("blue")
p.fillcolor("blue")
p.begin_fill()
p.circle(a/4)
p.end_fill()

p.penup()
p.goto(a/4, -a/2)
p.pendown()
p.pensize(1)
p.color("green")
p.fillcolor("green")
p.begin_fill()
p.circle(a/4)
p.end_fill()

p.penup()
p.goto(a/4, 0)
p.pendown()
p.pensize(1)
p.color("red")
p.fillcolor("red")
p.begin_fill()
p.circle(a/4)
p.end_fill()

p.penup()
p.goto(-a/4, 0)
p.pendown()
p.pensize(1)
p.color("cyan")
p.fillcolor("cyan")
p.begin_fill()
p.circle(a/4)
p.end_fill()

turtle.done()

















