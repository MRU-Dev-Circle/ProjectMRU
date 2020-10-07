#LANGUAGE: Python
#AUTHOR: Gauravsaha-97
#GITHUB: https://github.com/Gauravsaha-97

def rectangleArea(length, breadth):
    return length * breadth

length = int(input("Enter the length: "))
breadth = int(input("Enter the breadth: "))

area = rectangleArea(length, breadth)
print("Area of a Rectangle with length {} and Breadth {} is {}".format(length,breadth, area))
