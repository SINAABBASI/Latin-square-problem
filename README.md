# [Latin square problem](https://en.wikipedia.org/wiki/Latin_square)

In both tasks I used **back-trace** and **forward-checking** tricks to impleament.


## Task1 
  In task1.cpp we take the dimension of [latin square](https://en.wikipedia.org/wiki/Latin_square) as input and give you 
  a matric (n * n) as a solution.

### Example
#### Input:
```
13
```
#### Output:
```
1 2 3 4 5 6 7 8 9 10 11 12 13 
2 1 4 3 6 5 8 7 10 9 12 13 11 
3 4 1 2 7 8 5 6 11 12 13 9 10 
4 3 2 1 8 7 6 5 12 13 10 11 9 
5 6 7 8 1 2 3 4 13 11 9 10 12 
6 5 8 9 10 11 12 13 1 2 3 4 7 
7 8 5 10 9 12 13 11 2 1 4 3 6 
8 7 6 11 12 13 9 10 3 4 1 2 5 
9 10 11 5 13 1 2 12 4 3 6 7 8 
10 9 12 13 2 3 11 1 5 6 7 8 4 
11 12 13 6 3 4 10 9 7 5 8 1 2 
12 13 9 7 11 10 4 3 6 8 2 5 1 
13 11 10 12 4 9 1 2 8 7 5 6 3 
```
## Task2
  In task2.cpp we take the size of the dimension of  [latin square](https://en.wikipedia.org/wiki/Latin_square) and give you
  ```all of solution``` .
### Example
#### Input:
```
3
```
#### Output:
```
1 2 3 
2 3 1 
3 1 2 

1 2 3 
3 1 2 
2 3 1 

1 3 2 
2 1 3 
3 2 1 

1 3 2 
3 2 1 
2 1 3 

2 1 3 
1 3 2 
3 2 1 

2 1 3 
3 2 1 
1 3 2 

2 3 1 
1 2 3 
3 1 2 

2 3 1 
3 1 2 
1 2 3 

3 1 2 
1 2 3 
2 3 1 

3 1 2 
2 3 1 
1 2 3 

3 2 1 
1 3 2 
2 1 3 

3 2 1 
2 1 3 
1 3 2 

Number of Latin Square with n = 3 is :
12
```

### Note :
  As you can see in [this](https://en.wikipedia.org/wiki/Latin_square), The ```all of solution for n > 6``` is so large and we cannot support all of solution.
