"""
Problem: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/ 
Category : Basic Programming
Difficulty : Easy
Date : 10/06/2025
Language : Python
"""

t = int(input()) # Test Cases

for i in range(t):
    g, p = map(int, input().split(" ")) # Cost of green and purple balloons
    n = int(input()) # Number of participants
    q1 = 0 
    q2 = 0
    for i in range(n):
        x, y = map(int, input().split(" "))
        q1 += x
        q2 += y
    c1 = q1*g + q2*p
    c2 = q1*p + q2*g
    
    print(min(c1,c2)) # Display the minimum 
