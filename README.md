# Daa Assingment-2
#### Team Members

|Enrollment No.|Name|GithubId|
|--------------|----|--------|
|IIT2019111|Aditya Machhaiya|asingh1601|
|IIT2019112|Payili Vangmayi|hermoine2002|
|IIT2019113|Nimish Upadhyay|DEADPOOL2001|

**Group No-** 7

**Faculty Name-** Dr. Rahul Kala IIIT Allahabad

**Mentor Name-** Md. Meraz

---
## Problem Statement
Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up. Solve using Dynamic programming.

---
## How to use code

Download project
```
git clone https://github.com/DEADPOOL2001/DaaAssingment2.git
```
Project Initialize 
```
#Opening Assingment folder
cd DaaAssingment2

#Compiling The code
g++ naive_approach.cpp -o output1
g++ dp_approach.cpp -o output2
```
---

Run the code
```
./output1
./output2
```
Input
```
First line of input contains two space seperated integers n .
where n is the no. of friends.
```
Ouput 
```
Total number of ways in which friends can remain single or can be paired up.
```
---
**Test case**

Test Case-1
```
Input:
3
Output:
4
Explanation:
{1}, {2}, {3} : all single
{1}, {2, 3} : 2 and 3 paired but 1 is single.
{1, 2}, {3} : 1 and 2 are paired but 3 is single.
{1, 3}, {2} : 1 and 3 are paired but 2 is single.
Note that {1, 2} and {2, 1} are considered same.
```

Test Case-2
```
Input:
4
Output:
10
```
---
### Theory

Logic
```
f(n) = ways n people can remain single 
       or pair up.

For n-th person there are two choices:
1) n-th person remains single, we recur 
   for f(n - 1)
2) n-th person pairs up with any of the 
   remaining n - 1 persons. We get (n - 1) * f(n - 2)

Therefore we can recursively write f(n) as:
f(n) = f(n - 1) + (n - 1) * f(n - 2)

```
---
### Analysis

**Time Complexity**
```
1) For naive approach :- 
   T(n) = o(2^n)

2) For Dp approach :- 
   T(n) = o(n)
```
**Space Complexity**
```
1) For naive approach :- let S(n) be the Space complexity of the naive approach then,
   S(n) = Stack Space of the recursion = o(n)

2) For Dp approach :- let S(n) be the Space complexity of the Dp approach then,
   S(n) = Stack Space of the recursion + size of the array = o(n) + o(n) = o(n)
```
where n is no. of rows and m is no. of coloumns in our matrix.

---
### References

GFG : Dynamic programming

Cp Algorithm : Time-complexity Analysis
