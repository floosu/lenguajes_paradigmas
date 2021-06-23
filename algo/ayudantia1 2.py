import numpy 
MAX=100
top=0
store= numpy.zeros(MAX)
def push(c):
    global top
    if (top<MAX):
        store[top+1]= c
        top=top+1
push(1)

