Problem : Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 

My Solution : 
use an temporary array B of size d , to store the elements A(0,..d) then store the values A(d..n-1) into A(0,n-d) . then store the values of B into A(n-d, n-1) if the indexed element = n-d

Time Complexity : O(n)
Space Complexity : O(d) using the temporary array of size d .