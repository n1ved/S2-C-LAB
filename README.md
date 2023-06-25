# C Programs for S2 Lab
---
## INDEX 
[1. Hello world](#hello-world)\
[2. Program to add two numbers](#sum-of-numbers)\
[3. Program to print pattern](#pattern-using-loops)\
[4. Program to Calculate Area & Circumference or a circle ](#area-and-circumference)\
[5. Program to Calculate simple interest](#simple-interest)\
[6. Program to evaluate Expression (A+B)*(C-D)](#evaluate-expression)\
[7. Program to print largest of two integers ](#largest)\
[8. Program to print smallest of two integers ](#smallest)\
[9. Program to check whether prime number or not ](#prime)\
[10. Program to check whether Armstrong number or not ](#armstrong)\
[11. Program to check whether leap year or not ](#leap-year)\
[12. Program to check weather the number is odd or even](#odd-or-even)\
[13. Program to check weather the number is positive or negative](#p)\

---

## HELLO WORLD

[CODE](/helloworld.c)

```
STEP 1  :   START
STEP 2  :   PRINT "HELLO WORLD"
STEP 3  :   STOP
```
---
## SUM OF NUMBERS

[CODE](/sum.c)

```
STEP 1  :   START
STEP 2  :   READ A,B
STEP 3  :   CALCULATE SUM = A+B
STEP 4  :   PRINT SUM
STEP 5  :   STOP
```
---
## PATTERN (using loops)

[CODE](/pattern.c)

```
STEP 1  :   START
STEP 2  :   SET I = 1
STEP 3  :   SET J = 1
STEP 4  :   PRINT '*\t'
STEP 5  :   SET J = J + 1
STEP 6  :   IF J <= I
STEP 7  :       GOTO 4
STEP 8  :   PRINT '\n'
STEP 9  :   SET I = I + 1 
STEP 10 :   IF I <= 4
STEP 11 :       GOTO 3
STEP 12 :   STOP
```
---
## AREA AND CIRCUMFERENCE

[CODE](/circle.c)

```
STEP 1  :   START
STEP 2  :   READ R
STEP 3  :   CALCULATE A = 3.14 * R * R
STEP 4  :   CALCULATE C = 2 * 3.14 * R
STEP 5  :   PRINT A , C
STEP 6  :   STOP
```
---
## SIMPLE INTEREST

[CODE](/interest.c)

```
STEP 1  :   START
STEP 2  :   READ P , N , R
STEP 3  :   CALCULATE I = P * N * R
STEP 4  :   PRINT I;
STEP 5  :   STOP
```
---
## EVALUATE EXPRESSION

[CODE](/expression.c)

```
STEP 1  :   START
STEP 2  :   READ A , B , C , D
STEP 3  :   CALCULATE R = (A+B)*(C-D)
STEP 4  :   PRINT R
STEP 5  :   STOP
```
---

## LARGEST

[CODE](/largest.c)

```
STEP 1  :   START
STEP 2  :   READ A , B
STEP 3  :   IF A > B
STEP 4  :       PRINT A
STEP 5  :   ELSE
STEP 6  :       PRINT B
STEP 7  :   STOP
```
---
## SMALLEST

[CODE](/smallest.c)

```
STEP 1  :   START
STEP 2  :   READ A , B
STEP 3  :   IF A < B
STEP 4  :       PRINT A
STEP 5  :   ELSE
STEP 6  :       PRINT B
STEP 7  :   STOP
```
---

## PRIME

[CODE](/prime.c)

```
STEP 1  :   START
STEP 2  :   READ A
STEP 3  :   SET I = 0
STEP 4  :   IF I>A/2 GOTO 11
STEP 5  :   IF(A%I = 0)
STEP 6  :       PRINT "NOT PRIME"
STEP 7  :       GOTO 12
STEP 8  :   ELSE
STEP 9  :       I = I + 1
STEP 10 :       GOTO 4
STEP 11 :   PRINT "PRIME"
STEP 12 :   STOP
```
---

## ARMSTRONG

[CODE](/armstrong.c)

```
STEP 1 : START
STEP 2 : READ A
STEP 3 : COPY A TO B
STEP 4 : SET DIGITS = 1 , PROD = 0
STEP 5 : REPEAT STEPS 6 AND 7 WHILE A>=10
STEP 6 : SET A = A/10
STEP 7 : SET DIGITS = DIGITS + 1
STEP 8 : COPY B TO A
STEP 9 : SET I = 1
STEP 10: REPEAT STEPS 11 TO 15 WHILE I<=DIGITS
STEP 11: SET TEMP = 1 , J = 1
STEP 12: REPEAT STEP 13 WHILE J<=DIGITS
STEP 13: SET TEMP = TEMP * (A % 10)
STEP 14: SET PROD = PROD + TEMP
STEP 15: SET NUM = NUM / 10
STEP 16: IF PROD EQUALS B PRINT "ARMSTRONG"
STEP 17: OTHERWISE PRINT "NOT ARMSTRONG"
STEP 18: STOP
```
---

## LEAP YEAR

[CODE](/leapyear.c)

```
STEP 1  :   START
STEP 2  :   READ A
STEP 3  :   IF(A%100 = 0)
STEP 4  :       IF(A%400 = 0)
STEP 5  :           PRINT "LEAP YEAR"
STEP 6  :       ELSE
STEP 7  :           PRINT "NOT A LEAP YEAR"
STEP 8  :   ELSE
STEP 9  :       IF(A%4 = 0)
STEP 10 :           PRINT "LEAP YEAR"
STEP 11 :       ELSE
STEP 12 :           PRINT "NOT A LEAP YEAR"
STEP 13 :   STOP
```
---

## ODD OR EVEN

[CODE](/oddoreven.c)

```
STEP 1  :   START
STEP 2  :   READ A
STEP 3  :   CHECK IF A%2 = 0
STEP 4  :   PRINT 'EVEN' IF TRUE
STEP 5  :   ELSE PRINT 'ODD'
STEP 6  :   STOP
```
---

## Positive or negative

[CODE](/positiveornegative.c)

```
STEP 1  :   START
STEP 2  :   READ A
STEP 3  :   CHECK A>0 IF TRUE GOTO 6
STEP 4  :   CHECK A<0 IF TRUE GOTO 7
STEP 5  :   CHECK A=0 IF TRUE GOTO 8
STEP 6  :   PRINT POSITIVE AND GOTO 9
STEP 7  :   PRINT NEGATIVE AND GOTO 9
STEP 8  :   PRINT ZERO
STEP 9  :   END
```
---

