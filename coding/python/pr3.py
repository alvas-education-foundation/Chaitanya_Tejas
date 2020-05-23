PROBLEM STATEMENT:
Write a menu program in Python to find Area-Circle, Circumference-Circle, Area- Square, Circumference-Square using functions with menu choice
Create seperate functions for each choice of menu

SOLUTION:
def AreaCircle(r):
	return 3.142*r*r

def CircumferenceCircle(r):
	return 2*3.142*r

def AreaSquare(b,h):
	return b*h

def CircumferenceSquare(h):
	return 4*h


def circle():
	r=float(input("Enter Radius Of Circle : "))
	a=AreaCircle(r)
	print("Area Of Circle: ",a)
	c=CircumferenceCircle(r)
	print("Circumference Of Circle is: ",c)
	print("\n----------------------------------------\n")
	return 

def square():
	b=float(input('Enter Base Of Square : '))
	h=float(input('Enter Height Of Square : '))
	A=AreaSquare(b,h)
	print("Area Of Square is: ",A)
	CS=CircumferenceSquare(h)
	print("Circumference Of Square is: ",CS)
	print("\n----------------------------------------\n")
	return 

while(1):
	n=int(input("1: CILRCLE\n2: SQUARE\n3: EXIT\n"))
	print("\n----------------------------------------\n")
	if n==1:
		circle()
	elif n==2:
		square()
	else:
exit(0)
