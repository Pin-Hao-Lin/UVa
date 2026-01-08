# 11536 Smallest Sub-Array

### Description
Consider an integer sequence consisting of N elements where

*X*<sub>1</sub> = 1<br>
*X*<sub>2</sub> = 2<br>
*X*<sub>3</sub> = 3<br>
*X*<sub>*i*</sub> = (*X*<sub>*i*-1</sub> + *X*<sub>*i*-2</sub> + *X*<sub>*i*-3</sub>) % *M* + 1 for *i* = 4 to *N*

Find 2 values *a* and *b* so that the sequence (*X*<sub>*a*</sub> *X*<sub>*a*+1</sub> *X*<sub>*a*+2</sub> . . . *X*<sub>*b*−1</sub>*X*<sub>*b*</sub>) contains all the integers from [1, *K*]. If there are multiple solutions then make sure (*b* − *a*) is as low as possible.

In other words, find the smallest subsequence from the given sequence that contains all the integers from 1 to *K*.

Consider an example where *N* = 20, *M* = 12 and *K* = 4.<br>
The sequence is {1 2 3 7 1 12 9 11 9 6 3 7 5 4 5 3 1 10 3 3}.<br>
The smallest subsequence that contains all the integers {1 2 3 4} has length 13 and is highlighted in the following sequence:<br>
{1 2 3 7 1 12 9 11 9 6 3 7 5 4 5 3 1 10 3 3}.

### Input
First line of input is an integer *T* (*T* < 100) that represents the number of test cases. Each case consists of a line containing 3 integers *N* (2 < *N* < 1000001), *M* (0 < *M* < 1001) and *K* (1 < *K* < 101). The meaning of these variables is mentioned above.

### Output
For each case, output the case number followed by the minimum length of the subsequence. If there is no valid subsequence, output ‘sequence nai’ instead. Look at the sample for exact format.

### Sample Input
```
2
20 12 4
20 12 8
```

### Sample Output
```
Case 1: 13
Case 2: sequence nai
```

---
* CPE 2020-12-22 P4
