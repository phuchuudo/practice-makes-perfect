# without loop

import turtle

a = int(input("Nhap a = "))
b = int(input("Nhap b = "))
c = int(input("Nhap c = "))

p = turtle.Turtle()
p.speed(1)

# ve truc toa do
p.backward(300)
p.forward(600)
p.goto(0, 0)
p.goto(0, 300)
p.goto(0, -300)
p.goto(0, 0)



#write ox, oy
p.penup()
p.goto(15, 290)
p.write("0y", font = ("Arial", 12, "normal"))
p.goto(290, 15)
p.write("Ox", font = ("Arial", 12, "normal"))
p.goto(0, 0)

# draw cạnh đáy (nằm ở trục ox)
p.pendown()
p.pensize(2)

p.color("red")
p.fillcolor("green")

p.begin_fill()

p.goto(a/2, 0)
p.goto(-a/2, 0)

# quay góc c độ và vẽ một đoạn có giá trị là b

p.left(c)
p.forward(b)
p.goto(a/2, 0)
p.goto(0, 0)

p.end_fill()

turtle.done()






















