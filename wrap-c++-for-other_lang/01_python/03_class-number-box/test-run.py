#! /usr/bin/python3.8
import myClass
box1 = myClass.Box(1,2,3)
print(box1.getVolume())
box1.setLength(2)
print(box1.getVolume())

num = myClass.Number(1) 
num.display()
num.add(2)
num.display()
num.cube()
num.display()
