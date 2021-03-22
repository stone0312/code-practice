#!/usr/bin/python3

def fibonacci(a,b):
    
    while b<1000:
        a=b
        b=a+b
    return b

a,b =0,1
print(fibonacci(a,b))
