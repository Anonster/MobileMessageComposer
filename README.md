# MobileMessageComposer
C++ Program which will act as a mobile keypad will take input 0 - 9 and produce output accordingly as a mobile keypad do....
Mobile Message Composer 
You have to write a program that works in the same fashion as a message composer in the mobiles. 
  
Write a program that compose message in the same fashion as using above keypad. The program must receive integer input. When use enter 2 the program outputs letter ‘A’ and if 2 is pressed twice, the letter ‘A’ will disappear from screen and character ‘B’ will appear and if 2 is pressed thrice the letter ‘B’ will disappear and Letter C will appear. To enter ‘AA’ you have to enter number ‘2’ twice with delay. Delay must be as smaller as it is usually in the mobile.  
To check a delay between two key press use the following library 
#include <time.h> 
To get the current time use following function time(0) 
This function will return numeric value of time. You can compute the time difference by getting time at both key press events and test for a fixed time delay to check whether the key press are consecutive or not. 
 
If you want to clear screen use following statement 
System(“CLS”); 
Similarly find the associated letters with number on the picture above and complete your assignment. 
 
 
Program Requirement. 
You have to use only those programming elements discussed in the class so far. You cannot use string and character array. Only primitive data types are allowed. You are allowed to use header files that is mentioned in the assignment or may use other libraries. 
 
 
 
