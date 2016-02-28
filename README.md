# Estimating-Pi-Using-OpenMP

π can be estimated using the Leibniz formula: 

1 - 1/3 + 1/5 - 1/7 + 1/9 - .... = π/4.

![alt text][formula]

[formula]: http://i.stack.imgur.com/F7C0M.png "Leibniz formula summation notation"

This program estiamtes π using Leibniz formula.  First I wrote the serial implementation, and modified the serial program into two shared memory programs using OpenMP.  In the first OpenMP program, I chose to use the critical pragma.  In the second OpenMP program I chose to use the reduction pragma.  

Comparing runtimes (To be done): 

Tp with respect to different n and t values.
n = number of terms in the Leibniz formula
t = number of threads

