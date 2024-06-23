# without loop
import turtle

a = int(input("Nhap a = "))
b = int(input("Nhap b = "))

p = turtle.Turtle()

# draw ox, oy
p.backward(300)
p.forward(600)
p.penup()
p.goto(290, 15)
p.write("Ox", font = ("Arial", 12, "normal"))

p.goto(0, 0)
p.pendown()
p.goto(0, -300)
p.goto(0, 300)

p.penup()
p.goto(15, 290)
p.write("Oy", font = ("Arial", 12, "normal"))

p.penup()
p.goto(0, 0)


p.goto(-a/2, -b/2)
p.pendown()
p.pensize(2)
p.color("red")

p.forward(a)
p.left(90)
p.forward(b)
p.left(90)
p.forward(a)
p.left(90)
p.forward(b)
p.left(90)

p.penup()
p.goto(-b/2, -b/2)

p.pendown()
p.pensize(2)
p.fillcolor("cyan")

p.begin_fill()

p.forward(b)
p.left(90)
p.forward(b)
p.left(90)
p.forward(b)
p.left(90)
p.forward(b)
p.left(90)

p.end_fill()



turtle.done()














