//
//  hackerRank.hpp
//  Playing
//
//  Created by PirloSasa on 13.08.2024
//

#include <iostream>
#include <vector>
#include <string>

// simple sum of an array
int simpleArraySum(std::vector<int>&& f_arr);

/* Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.
The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).
The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].
If a[i] > b[i], then Alice is awarded 1 point.
If a[i] < b[i], then Bob is awarded 1 point.
If a[i] = b[i], then neither person receives a point.
Comparison points is the total points a person earned.
Given a and b, determine their respective comparison points.
Example
a = [1, 2, 3]
b = [3, 2, 1]
For elements *0*, Bob is awarded a point because a[0] .
For the equal elements a[1] and b[1], no points are earned.
Finally, for elements 2, a[2] > b[2] so Alice receives a point.
The return array is [1, 1] with Alice's score first and Bob's second.
Function Description
Complete the function compareTriplets in the editor below.
compareTriplets has the following parameter(s):
	* int a[3]: Alice's challenge rating
	* int b[3]: Bob's challenge rating
	Return
	* int[2]: Alice's score is in the first position, and Bob's score is in the second.
*/
std::vector<int> compareTriplets(std::vector<int>&& a, std::vector<int>&& b);

/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.
For example, the square matrix  is shown below:
1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = 1 + 5 + 9 = 15. The right to left diagonal = 3 + 5 + 9 = 17. Their absolute difference is|15 - 17| = 2.
Function description
Complete the  function in the editor below.
diagonalDifference takes the following parameter:
int arr[n][m]: an array of integers
Return
int: the absolute diagonal difference
Input Format
The first line contains a single integer, , the number of rows and columns in the square matrix .
Each of the next  lines describes a row, , and consists of  space-separated integers .
Constraints

Output Format
Return the absolute difference between the sums of the matrix's two diagonals as a single integer.*/
int diagonalDifference(std::vector<std::vector<int>>&& arr);

/*
 Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.
Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.
Example

There are  elements, two positive, two negative and one zero. Their ratios are ,  and . Results are printed as:
0.400000
0.400000
0.200000
Function Description
Complete the plusMinus function in the editor below.
plusMinus has the following parameter(s):
int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.
Input Format
The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe .
Constraints


Output Format
Print the following  lines, each to  decimals:
proportion of positive values
proportion of negative values
proportion of zeros
*/

void plusMinus(std::vector<int>&& arr);

/*
 Staircase detail
 This is a staircase of size : 4
   #
  ##
 ###
####
Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
Write a program that prints a staircase of size n.
Function Description
Complete the staircase function in the editor below.
staircase has the following parameter(s):
int n: an integer
Print
Print a staircase as described above.
Input Format
A single integer, , denoting the size of the staircase.
Constraints
 .
 Output Format
 Print a staircase of size  using # symbols and spaces.
Note: The last line must have  spaces in it.
 */
void staircase(int n);

/*
 Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
 Example arr[1, 3, 5, 7, 9]

 The minimum sum is 1 + 3 + 5 + 7 = 16  and the maximum sum is 3 + 5 + 7 + 9 = 24. The function prints
 16 24
 Function Description
 Complete the miniMaxSum function in the editor below.
 miniMaxSum has the following parameter(s):
arr: an array of  integers
Print
Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.
Input Format
A single line of five space-separated integers.
Constraints

Output Format
Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)
Sample Input
1 2 3 4 5
Sample Output
10 14
 */
void miniMaxSum(std::vector<int>&& arr);

/*
 You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
 Example
 candles = [4,4,3,1]

 The maximum height candles are 4 units high. There are 2 of them, so return 2.
 Function Description
 Complete the function birthdayCakeCandles in the editor below.
 birthdayCakeCandles has the following parameter(s):
 int candles[n]: the candle heights
 Returns
int: the number of candles that are tallest
Input Format
The first line contains a single integer, , the size of .
The second line contains n space-separated integers, where each integer i describes the height of candle[i].
 */
int birthdayCakeCandles(std::vector<int>&& candles);

/*
 Given a time in -hour AM/PM format, convert it to military (24-hour) time.
Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
Example
s = '12:01:00PM'
Return '12:01:00'.
s = '12:01:00AM
Return '00:01:00'.
Function Description
Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.
timeConversion has the following parameter(s):
string s: a time in  hour format
Returns
string: the time in  hour format
Input Format
A single string  that represents a time in -hour clock format (i.e.:  or ).
 */
std::string timeConversion(std::string&& s);

/*
 Every student receives a grade in the inclusive range from 0 to 100.
 Any grade less than 40 is a failing grade.
 Sam is a professor at the university and likes to round each student's  according to these rules:
 If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
 If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
 Examples
  grade = 84  round to  (85 - 84 is less than 3)
  grade = 39  do not round (result is less than 40)
  grade = 57  do not round (60 - 57 is 3 or higher)
    Given the initial value of grade for each of Sam's n students, write code to automate the rounding process.
    Function Description
    Complete the function gradingStudents in the editor below.
    gradingStudents has the following parameter(s):
    int grades[n]: the grades before rounding
    Returns
    int[n]: the grades after rounding as appropriate
    Input Format
    The first line contains a single integer,n , the number of students.
    Each line i of the n subsequent lines contains a single integer,grades[i] .    
 */
std::vector<int> gradingStudents(std::vector<int>&& grades);

/*
 
 */
void countApplesAndOranges(int s, int t, int a, int b, std::vector<int>&& apples, std::vector<int>&& oranges);

/*
 You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).
 The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
 The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.
 You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.
 Example
x1 = 2
v1 = 1
x2 = 1
v2=2

After one jump, they are both at , (, ), so the answer is YES.
Function Description
Complete the function kangaroo in the editor below.
kangaroo has the following parameter(s):
int x1, int v1: starting position and jump distance for kangaroo 1
int x2, int v2: starting position and jump distance for kangaroo 2
Returns
string: either YES or NO
Input Format
A single line of four space-separated integers denoting the respective values of , , , and .
Constraints
0<=x1<x2<=10000
1<=v1<=10000
1<=v2<=10000
 */
std::string kangaroo(int x1, int v1, int x2, int v2);

/*
 There will be two arrays of integers. Determine all integers that satisfy the following two conditions:
 The elements of the first array are all factors of the integer being considered
 The integer being considered is a factor of all elements of the second array
 These numbers are referred to as being between the two arrays. Determine how many such numbers exist.
 Example
a = [2,6]
b = [24,36]

 There are two numbers between the arrays: 6 and 12.
 6 % 2, 6 % 6, 24 % 6  and 36 % 6 for the first value.
 12 % 2 , 12 % 6 and 24 % 12, 36 % 12  for the second value. Return 2.
 Function Description
 Complete the getTotalX function in the editor below. It should return the number of integers that are betwen the sets.
 getTotalX has the following parameter(s):
 int a[n]: an array of integers
 int b[m]: an array of integers
 Returns
int: the number of integers that are between the sets
 */
int getTotalX(std::vector<int>&& a, std::vector<int>&& b);

/*
 Breaking the rescord:
 Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.
 Example
 Scores = [12,24,10,24]
 Scores are in the same order as the games played. She tabulates her results as follows:
                                  Count
 Game  Score  Minimum  Maximum   Min Max
  0      12     12       12       0   0
  1      24     12       24       0   1
  2      10     10       24       1   1
  3      24     10       24       1   1

Given the scores for a season, determine the number of times Maria breaks her records for most and least points scored during the season.
 */
std::vector<int> breakingRecords(std::vector<int>&& scores);

/*
 Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
 Lily decides to share a contiguous segment of the bar selected such that:
 The length of the segment matches Ron's birth month, and,
 The sum of the integers on the squares is equal to his birth day.
 Determine how many ways she can divide the chocolate.
 Example:
 s=[2,2,1,3,2]
 d= 4
 m= 2
 Lily wants to find segments summing to Ron's birth day,d = 4  with a length equalling his birth month, m = 2. In this case, there are two segments meeting her criteria:[2,2] and [1,3].
 Function Description
 Complete the birthday function in the editor below.
 birthday has the following parameter(s):
 int s[n]: the numbers on each of the squares of chocolate
 int d: Ron's birth day
 int m: Ron's birth month
 Returns
int: the number of ways the bar can be divided
 */
int birthday(std::vector<int>&& s, int d, int m);

/*
 Given an array of integers and a positive integer k, determine the number of (i,j) pairs where i<j  and ar[i]  + ar[j] is divisible by k.
 Example
ar = [1,2,3,4,5,6]
k = 5

 Three pairs meet the criteria:[1,4],[2,3]and [4,6].
 Function Description
 Complete the divisibleSumPairs function in the editor below.
 divisibleSumPairs has the following parameter(s):
 int n: the length of array ar
 int ar[n]: an array of integers
 int k: the integer divisor
 Returns
 - int: the number of pairs
 */
int divisibleSumPairs(int k, std::vector<int>&& ar);

/*
Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.
Example
arr = [1,1,2,2,3]
There are two each of types 1 and 2, and one sighting of type 3. Pick the lower of the two types seen twice: type 1.
Function Description
Complete the migratoryBirds function in the editor below.
migratoryBirds has the following parameter(s):
int arr[n]: the types of birds sighted
Returns
int: the lowest type id of the most frequently sighted birds
 */
int migratoryBirds(std::vector<int>&& arr);

/*
 Sequence Equation
 */
std::vector<int> permutationEquation(std::vector<int>&& p);

/*
 Jumping on the clouds
 */
int jumpingOnClouds(std::vector<int>&& c, int k);

/*
 An integer n is a divisor of an integer d if the remainder of n/d = 0.
 Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.
 Example
 n = 124
 Check whether 1, 2, and 4 are divisors of 124. All 3 numbers divide evenly into 124 so return 3.
 n = 111
 Check whether 1, 1, and 1 are divisors of 111. All 3 numbers divide evenly into 111 so return 3.
 n = 10
 Check whether 1 and 0 are divisors of 10. 1  is, but 0 is not. Return 1.
 Function Description
 Complete the findDigits function in the editor below.
 findDigits has the following parameter(s):
 int n: the value to analyze
 Returns
 int: the number of digits in n that are divisors of n.
 */
int findDigits(int&& n);

/*
 Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.
 From 1700 to 1917, Russia's official calendar was the Julian calendar; since 1919 they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918, when the next day after January 31st was February 14th. This means that in 1918, February 14th was the 32nd day of the year in Russia.
 In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years. In the Julian calendar, leap years are divisible by 4; in the Gregorian calendar, leap years are either of the following:
 Divisible by 400.
 Divisible by 4 and not divisible by 100.
 Given a year, y, find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.
 For example, the given  = 1984. 1984 is divisible by 4, so it is a leap year. The 256th day of a leap year after 1918 is September 12, so the answer is 12.09.1984.
 */
std::string dayOfProgrammer(int year);

/*
 bill division
bill: vector of items.
k: declined items (not requested)
b: requested amount of money
 */
void bonAppetit(std::vector<int>&& bill, int k, int b);

/*
 A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book, page 1 is always on the right side:
 When they flip page 1, they see pages 2 and 3. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. If the book is n pages long, and a student wants to turn to page p, what is the minimum number of pages to turn? They can start at the beginning or the end of the book.
 Given n and p, find and print the minimum number of pages that must be turned in order to arrive at page p.
 */
int pageCount(int n, int p);

/*
 An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly 'steps' steps, for every step it was noted if it was an uphill, U , or a downhill, D step. Hikes always start and end at sea level, and each step up or down represents a 1 unit change in altitude. We define the following terms:
 A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
 A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
 Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.
 Example
  Steps = 8 path=[DDUUUUDD]
 The hiker first enters a valley 2 units deep. Then they climb out and up onto a mountain 2 units high. Finally, the hiker returns to sea level and ends the hike.
 Function Description
 Complete the countingValleys function in the editor below.
 countingValleys has the following parameter(s):
 int steps: the number of steps on the hike
 string path: a string describing the path
 Returns
int: the number of valleys traversed
 */
int countingValleys(int steps, std::string&& path);

/*
 A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return -1.
Example
b = 60
keyBoards =[40,50,60]
Drivers = [5,8,12]

The person can buy a 40 Keyboard and 12 Driver = 52, or a 50 KeyBoard and 8 dirver = 58. Choose the latter as the more expensive option and return 58.
Function Description
Complete the getMoneySpent function in the editor below.
getMoneySpent has the following parameter(s):
int keyboards[n]: the keyboard prices
int drives[m]: the drive prices
int b: the budget
Returns
int: the maximum that can be spent, or -1 if it is not possible to buy both items
 */
int getMoneySpent(std::vector<int>&& keyboards, std::vector<int>&& drives, int b);

/*
 Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.
 You are given 'q' queries in the form of x, y, and z representing the respective positions for cats A and B, and for mouse C. Complete the function to return the appropriate answer to each query, which will be printed on a new line.
 If cat A catches the mouse first, print Cat A.
 If cat B catches the mouse first, print Cat B.
 If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
 Example
X = 2
Y = 5
C = 4
 The cats are at positions 2 (Cat A) and 5 (Cat B), and the mouse is at position 4. Cat B, at position 5 will arrive first since it is only 1 unit away while the other is 2 units away. Return 'Cat B'.
 Function Description
 Complete the catAndMouse function in the editor below.
 catAndMouse has the following parameter(s):
 int x: Cat 's position
 int y: Cat 's position
 int z: Mouse 's position
 Returns
string: Either 'Cat A', 'Cat B', or 'Mouse C'
 */
std::string catAndMouse(int x, int y, int z);

/*
 We define a magic square to be an n*n  matrix of distinct positive integers from 1 to n2 where the sum of any row, column, or diagonal of length n is always equal to the same number: the magic constant.
 You will be given a 3 * 3 matrix s of integers in the inclusive range [1,9]. We can convert any digit a to any other digit b in the range [1,9] at cost of |a-b|. Given s, convert it into a magic square at minimal cost. Print this cost on a new line.
Note: The resulting magic square must contain distinct integers in the inclusive range [1,9].
Example
$s = [[5, 3, 4], [1, 5, 8], [6, 4, 2]]
The matrix looks like this:
5 3 4
1 5 8
6 4 2
We can convert it to the following magic square:
8 3 4
1 5 9
6 7 2
This took three replacements at a cost of |5-8|+|8-9|+|4-7|.
Function Description
Complete the formingMagicSquare function in the editor below.
formingMagicSquare has the following parameter(s):
int s[3][3]: a  array of integers
Returns
int: the minimal total cost of converting the input square to a magic square
 */
int formingMagicSquare(std::vector<std::vector<int>>&& s);


/*
 Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.
 Example
a = [1,1,2,2,4,4,5,5,5]
 There are two subarrays meeting the criterion: [1,1,2,2] and [4,4,5,5,5]. The maximum length subarray has elements 5.
 Function Description
 Complete the pickingNumbers function in the editor below.
 pickingNumbers has the following parameter(s):
 int a[n]: an array of integers
 Returns
int: the length of the longest subarray that meets the criterion
Input Format
The first line contains a single integer n, the size of the array a.
The second line contains n space-separated integers, each an a[i].
Constraints:
2 <= n <= 100
0 < a[i] < 100
The answer will be >= 2.
 */
int pickingNumbers(std::vector<int>&& a);

/*
An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:
The player with the highest score is ranked number 1 on the leaderboard.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
Example
Ranked = [100,90,90,80]
Player = [70,80,105]

The ranked players will have ranks 1, 2, 2 and 3, respectively. If the player's scores are 70, 80 and 105, their rankings after each game are 4, 3 and 1. Return {4,3,1}.
Function Description
Complete the climbingLeaderboard function in the editor below.
climbingLeaderboard has the following parameter(s):
int ranked[n]: the leaderboard scores
int player[m]: the player's scores
Returns
int[m]: the player's rank after each new score
*/
std::vector<int> climbingLeaderboard(std::vector<int>&& ranked, std::vector<int>&& player);

/*
A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by 1 unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return 0.
Example
height = [1,2,3,3,2]
k = 1

The character can jump 1 unit high initially and must take 3 - 1 = 2 doses of potion to be able to jump all of the hurdles.
Function Description
Complete the hurdleRace function in the editor below.
hurdleRace has the following parameter(s):
int k: the height the character can jump naturally
int height[n]: the heights of each hurdle
Returns
int: the minimum number of doses required, always 0 or more
*/
int hurdleRace(int k, std::vector<int>&& height);

/*
When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently.
There is a list of 26 character heights aligned by index to their letters. For example, 'a' is at index 0 and 'z' is at index 25. There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in mm^2 assuming all letters are 1mm wide.
Example
 h = [1,3,1,3,1,4,1,3,2,5,5,5,5,1,1,5,5,1,5,2,5,5,5,5,5,5] Word = "Torn"
The heights are t=2, 0=1, r=1 and n=1. The tallest letter is 2 high and there are 4 letters. The hightlighted area will be 2 * 4 = 8mm^2 so the answer is 8.
Function Description
Complete the designerPdfViewer function in the editor below.
designerPdfViewer has the following parameter(s):
int h[26]: the heights of each letter
string word: a string
Returns
int: the size of the highlighted area
*/
int designerPdfViewer(std::vector<int>&& h, std::string&& word);

