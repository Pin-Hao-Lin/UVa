# 00145 Gondwanaland Telecom

### Description
Gondwanaland Telecom makes charges for calls according to distance and time of day. The basis of the charging is contained in the following schedule, where the charging step is related to the distance:

| Charging Step Day Rate Evening Rate Night Rate (distance) | Day Rate 8am to 6pm | Evening Rate 6pm to 10pm | Night Rate 10pm to 8am |
| ---- | ---- | ---- | ---- |
| A | 0.10 | 0.06 | 0.02 |
| B | 0.25 | 0.15 | 0.05 |
| C | 0.53 | 0.33 | 0.13 |
| D | 0.87 | 0.47 | 0.17 |
| E | 1.44 | 0.80 | 0.30 |

All charges are in dollars per minute of the call. Calls which straddle a rate boundary are charged according to the time spent in each section. Thus a call starting at 5:58 pm and terminating at 6:04 pm will be charged for 2 minutes at the day rate and for 4 minutes at the evening rate. Calls less than a minute are not recorded and no call may last more than 24 hours.

Write a program that reads call details and calculates the corresponding charges.

### Input
Input lines will consist of the charging step (upper case letter ‘A’..‘E’), the number called (a string of 7 digits and a hyphen in the approved format) and the start and end times of the call, all separated by exactly one blank. Times are recorded as hours and minutes in the 24 hour clock, separated by one blank and with two digits for each number. Input will be terminated by a line consisting of a single ‘#’.

### Output
Output will consist of the called number, the time in minutes the call spent in each of the charge categories, the charging step and the total cost in the format shown below.

### Sample Input
```
A 183-5724 17 58 18 04
#
```

### Sample Output
```
  183-5724     2     4     0  A    0.44
```

---
* CPE 2018-10-02 P3
