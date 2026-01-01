# 13185 DPA Numbers I

### Description
In number theory, a positive integer belongs to one and only one of the following categories: Deficient, Perfect or Abundant (DPA).

To decide the category of a positive integer *n*, first you have to calculate the sum of all its proper positive divisors. If the result is less than *n* then *n* is a deficient number, if the result is equal to *n* then *n* is a perfect number and if the result is greater than *n* then *n* is an abundant number. Remember that the proper divisors of *n* don’t include **n* itself.

For example, the proper divisors of the number 8 are 1, 2 and 4 which sum 7. Since 7 < 8 therefore 8 is a deficient number. The proper divisors of the number 6 are 1, 2 and 3 which sum 6. Since 6 = 6 therefore 6 is a perfect number. The proper divisors of the number 18 are 1, 2, 3, 6 and 9 which sum 21. Since 21 > 18 therefore 18 is an abundant number.

The task is to choose the category of a positive integer *n* as a deficient, perfect or abundant number.

### Input
Input begins with an integer *t* (1 ≤ *t* ≤ 500), the number of test cases, followed by t lines, each line containing an integer *n* (2 ≤ *n* ≤ 10<sup>3</sup>).

### Output
For each test case, you should print a single line containing the word ‘deficient’, ‘perfect’ or ‘abundant’ that representing the category of the number *n*.

### Sample Input
```
10
5
6
16
18
21
28
29
30
40
43
```

### Sample Output
```
deficient
perfect
deficient
abundant
deficient
perfect
deficient
abundant
abundant
deficient
```

---
* CPE 2018-10-02 P5
