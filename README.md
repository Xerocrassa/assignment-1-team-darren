# `livecode-projectile`
---
![](https://travis-ci.org/SOFE-2850U/assignment-1-team-darren.svg?branch=master)

A simple implementation of an Euler integrator for projectile motion. This program was written (mostly) live, in lecture for SOFE-2850U in Fall 2017.

Next week, we will add drag and stopping conditions. The drag will make the output more interesting. Implementing stopping conditions in a generic way force us to introduce lambdas and templates.

## Compilation

Compile with
```bash
clang++ -std=c++14 -o projectile projectile.cpp
```
or
```bash
g++ -std=c++14 -o projectile projectile.cpp
```
and run as
```bash
./projectile
```
and watch your terminal fill with numbers.

## Output

The output will be six columns of numbers with the following order:
```
time [s], x-position [m], y-position [m], x-speed [m/s], y-speed [m/s]
```
Plot the, you get the familiar parabolic trajectory, which will depend on your constants:  
![](example.jpg)


##Question 1: [10 pts] Modify the livecode for the trajectory of a projectile to compute the trajectory of Bob while complying to the fixed conditions and requirements.

The code was changed in the .cpp and .hpp files.


## Question 2: [5 pts] In the context of Question 1, how should the trajectory produced by the Verlet algorithm differ from the Euler integrator we used in the livecode?



## Question 3: [5 pts] in livecode-projectile.hpp,  we defined a type-constructor called VecR2<typename> along with operators for addition and scalar mutiplication. Does the VecR2<int> type constitute a vector space? If yes, prove it. If not, explain why not.



## Question 4: [5-amnesty pts] Using the type algebra we described in class, describe the type encoded in the following type equation: L(T) = 1 + T x L(T). [NB: Here, 1 is the same as the unit type, () that we descussed in class.]

