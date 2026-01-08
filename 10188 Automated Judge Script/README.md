# 10188 Automated Judge Script

### Description
The judges from the programming contests are known to be very mean and very lazy. We, judges, want less work and more Wrong Answers! So, we’d like you to help us and write an automated judge script to judge solution runs from teams all over the world. All you have to do is write a program which receives the standard solution and a team output and gives as answer one of the following messages: “*Accepted*”, “*Presentation Error*” or “*Wrong Answer*”. We define each one as:

**Accepted:** As we are very mean judges, we only want you to give ‘Accepted’ as answer if the team output matches the standard solution integrally. That is, ALL characters must match and must be in the same order.

**Presentation Error:** We want you to give ‘Presentation Error’ if all visible characters match but there is at least one invisible character (space or new line symbol) wrong.

**Wrong Answer:** If the team output could not be classified as any of the two above, then you have no option but to give ‘Wrong Answer’ as an answer!

### Input
The input will consist of an arbitrary number of input sets. Each input set begins with a positive integer *n* < 100, alone in a line, which describes the number of lines of the standard solution. The next *n* lines contain the standard solution. Then there is a positive integer *m* < 100, alone in a line, which describes the number of lines of the team output. The next *m* lines contain the team output. The input is terminated by a value of *n* = 0, and should not be processed.

No line will have more than 120 characters.

### Output
For each set you should output one of the following lines:

Run #*x*: Accepted *y*<br>
Run #*x*: Presentation Error *y*<br>
Run #*x*: Wrong Answer *y*

Where *x* stands for the number of the input set (starting from 1), and *y* is the total number of characters (including spaces, but not including the symbols for new lines) in the standard solution.

### Sample Input
```
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 15
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 5
3
Input Set #1: YES
Input Set #2: NO
Input Set #3: NO
3
Input Set #0: YES
Input Set #1: NO
Input Set #2: NO
1
1 0 1 0
1
1010
1
The judges are mean!
1
The judges are good!
0
```

### Sample Output
```
Run #1: Accepted 33
Run #2: Wrong Answer 33
Run #3: Presentation Error 34
Run #4: Wrong Answer 49
Run #5: Presentation Error 7
Run #6: Wrong Answer 20
```

---
* CPE 2020-12-22 P2
