* Problem Description

The task is to deduce the elements of an array of size n using specific queries:

and x y: Returns the bitwise AND of elements at positions x and y.

or x y: Returns the bitwise OR of elements at positions x and y.

The following property is used to simplify calculations:


The goal is to reconstruct the array by combining the results of these queries.

* How the Code Works

Input:

The program takes the size of the array n as input.

It interacts with the environment (e.g., an online judge or custom input system) to retrieve the results of and and or queries.

Calculation:

For each element from 2 to n, it calculates the sum of the first element and the current element using and and or queries.

Using additional queries between elements 2 and 3, it deduces the value of the first element of the array.

Subsequently, it calculates the remaining elements of the array.

Output:

The program prints the reconstructed array.
