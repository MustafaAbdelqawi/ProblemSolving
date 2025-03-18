//
//hackerRank.cpp
//
//Created by PirloSasa on 13.08.2024
//

#include <hackerRank.hpp>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <limits>

int simpleArraySum(std::vector<int>&& f_arr){
	//instead of using an approach of looping through each element in the array
	//i just used the build in function accumulate inside numeric header file
	int sum = std::accumulate(f_arr.begin(), f_arr.end(), 0);
	return sum;
}

std::vector<int>compareTriplets(std::vector<int>&& a, std::vector<int>&& b){
	int alice = 0;
	int bob = 0;

	for(int i = 0; i < a.size(); ++i){
		if(a[i] > b[i])
			alice ++;
		else if(a[i] < b[i])
			bob ++;
	}

	std::vector<int> result;
	result.push_back(alice);
	result.push_back(bob);

	return result;
}

int diagonalDifference(std::vector<std::vector<int>>&& arr){
	int leftDiagonal=0;
	int rightDiagonal=0;
	for(int i = 0, j=arr.size()-1; i < arr.size(); ++i, --j){
		leftDiagonal += arr[i][i];
		rightDiagonal += arr[j][i];
	}
	return std::abs(leftDiagonal - rightDiagonal);
}

void plusMinus(std::vector<int>&& arr){
	//this solution was just to try lambda expression however this is not the best solution as functionstd::count_if will loop through the whole vector once to get the Positive numbers and another one to get the negative numbers.
	//So the best solution will be basically to use a single for loop once to get both positive and negative numbers.
	//int Positive = std::count_if(arr.begin(), arr.end(), [](int n){ return (n > 0);});
	//int Negative = std::count_if(arr.begin(), arr.end(), [](int n){ return (n < 0);});

	int Positive = 0;
	int Negative = 0;
	for(const auto& i : arr){
		if(i < 0)
			Negative ++;
		else if(i > 0)
			Positive ++;
	}
	int Zero = arr.size() - (Positive + Negative);

	std::cout << std::setprecision(5);
	std::cout << (double) Positive/arr.size() << std::endl;
	std::cout << (double) Negative/arr.size() << std::endl;
	std::cout << (double) Zero/arr.size() << std::endl;
}

void staircase(int n) {
	for(int i = n; i > 0; --i){
		for(int j = 1; j <= n; ++j)
		{
			if(j < i){
				std::cout << ' ';
				continue;
			}
			std::cout << '#';
		}
		std::cout << std::endl;
	}
}

void miniMaxSum(std::vector<int>&& arr) {
	long sum = std::accumulate(arr.begin(), arr.end(),long(0));
	long minimum=arr[0];
	long maximum=arr[0];

	for(const auto& i : arr){
		if(i < minimum)
			minimum = i;
		if (i>maximum)
			maximum = i;
	}
	std::cout << sum - maximum << " " << sum - minimum << std::endl;
	//this is just another way to fix the issue without writing the for loop yourself is basically use std functions min_element and max_element inside algorithm header
	//auto result = std::max_element(arr.begin(), arr.end());
	//std::cout<<"minimum number in the array is: " << *result << " and it has index: " << std::distance(arr.begin(), result) << std::endl;
}

int birthdayCakeCandles(std::vector<int>&& candles) {
	auto maximumNumber = std::max_element(candles.begin(), candles.end());
	int result = std::count(candles.begin(), candles.end(), *maximumNumber);

	return result;
}

std::string timeConversion(std::string&& s) {
	std::string format = s.substr(s.size()-2);
	std::string result = s.substr(0, s.size()-2);
	std::string hours = result.substr(0,2);
	if(format == "PM"){
		if(hours == "12")
			return result;
		auto hrToInt = std::stoi(hours);
		hrToInt += 12;
		result.replace(0,2,std::to_string(hrToInt));
	}
	else if(format == "AM"){
		if(hours == "12")
			result.replace(0,2,"00");
	}
	return result;
}
std::vector<int> gradingStudents(std::vector<int>&& grades) {
	// Instead of using new std::vector to hold the result, this for loop will modify the original grades since they are passed by reference.
	for(auto& grade : grades){
		if(grade < 38)
			continue;
		//this formula is round a number up to the next multiple of 5 ((Original Number / 5) + 1) * 5;
		int nextMuliply = ((grade / 5) + 1) * 5;
		if(nextMuliply - grade < 3)
			grade = nextMuliply;
	}
	return grades;
}


void countApplesAndOranges(int s, int t, int a, int b, std::vector<int>&& apples, std::vector<int>&& oranges) {
	int Appl = std::count_if(apples.begin(), apples.end(),[s,t,a](int apple){
			int pos = a + apple;
			return(s <= pos && pos <= t);
			});
	int Orng = std::count_if(oranges.begin(), oranges.end(),[s,t,b](int orange){
			int pos = b + orange;
			return(s <= pos && pos <= t);
			});

	std::cout << "Number of Apples within house is: " << Appl << std::endl;
	std::cout << "Number of Oranges within house is: " << Orng << std::endl;

}

std::string kangaroo(int x1, int v1, int x2, int v2) {
	for(int i = 0; i<10000; ++i){
		x1 += v1;
		x2 += v2;
		if(x1 == x2)
			return "YES";
	}
	return "NO";	
}

int getTotalX(std::vector<int>&& a, std::vector<int>&& b) {
	auto maxA = std::max_element(a.begin(), a.end());
	auto minB = std::min_element(b.begin(), b.end());
	bool flag{true};
	int result{0};
	std::vector<int> vecOfNumbers;
	for(int i = *maxA ; i <= *minB; ++i){
		flag = true;
		for(const auto& ele : a){
			if(i % ele != 0){
				flag = false;
				break;
			}
		}

		for(const auto& ele : b){
			if(ele % i != 0){
				flag = false;
				break;
			}
		}
		if(flag){
			result ++;
			vecOfNumbers.push_back(i);
		}
	}
	std::cout << "Numbers that satisfy the conditions are: ";
	for(const auto& ele : vecOfNumbers){
		std::cout << ele << "\t";
	}
	std::cout << std::endl;
	return result;
}

std::vector<int> breakingRecords(std::vector<int>&& scores) {
	int min = 0;
	int max = 0;

	int minScore = scores.front();
	int maxScore = scores.front();
	for(const auto& score : scores){
		if(score < minScore){
			min ++;
			minScore = score;
		}
		else if(score > maxScore){
			max ++;
			maxScore = score;
		}
	}

	return std::vector<int>{max,min};

}

int birthday(std::vector<int>&& s, int d, int m){
	int result = 0;
	int sum = 0;
	for(int i = 0; i < s.size(); ++i){
		sum = 0;
		for(int j = i; j < i + m; ++j){
			sum += s[j];
		}
		if(sum == d)
			result ++;
	}
	return result;
}

int divisibleSumPairs(int k, std::vector<int>&& ar) {
	int result = 0;
	for(int i = 0; i < ar.size(); ++i){
		for(int j = i + 1; j < ar.size(); ++j){
			if(((ar[i] + ar[j]) % k) == 0)
				result ++;
		}
	}

	return result;
}

int migratoryBirds(std::vector<int>&& arr) {
	std::map<int,int> birds;
	for(const auto& type : arr){
		birds[type] ++;
	}
	int Result = birds.cbegin()->first;
	int maxAmount = birds.cbegin()->second;
	for(auto it = birds.cbegin(); it != birds.cend(); ++it){
		if(it->second > maxAmount){
			Result = it->first;
			maxAmount = it->second;
		}
	}
	return Result;
}

std::vector<int> permutationEquation(std::vector<int>&& p){
	std::vector<int> result;
	std::vector<int> indexes(p.size());
	for(int i = 1; i <= p.size(); ++i) indexes[p[i - 1]] = i;
	for(int i = 1; i <= p.size(); ++i) result.push_back(indexes[indexes[i]]);
	return result;
}

int jumpingOnClouds(std::vector<int>&& c, int k){
	int energy = 100;
	int position = 0;
	do{
		position = (position + k) % c.size();
		energy -= 1 + (2*c[position]);
	}while(position != 0);

	return energy;
}

int findDigits(int&& n){
	// get all the digits in n.
	int original = n;
	int result = 0;
	while(n != 0){
		int d = n%10;
		if(d != 0 && (original % d) == 0)result ++;
		n /= 10; 
	}
	return result;
}

std::string dayOfProgrammer(int year) {
	if(year == 1918) return "26.09.1918";

	bool leapYear{false};
	//check if the time is Julian format
	if(year < 1919){
		// check if the year was a leap year
		if(year % 4 == 0)
			leapYear = true;
	}
	// Gregorian year.
	else{
		if((year % 400 == 0) ||((year % 4 == 0)&&(year % 100 != 0)))
			leapYear = true;
	}

	if(leapYear) return "12.09." + std::to_string(year);

	return "13.09." + std::to_string(year);
}

void bonAppetit(std::vector<int>&& bill, int k, int b){
	int correctamount = std::accumulate(bill.begin(), bill.end(),0);
	correctamount -= bill[k];
	if(b == (correctamount/2))
		std::cout << "Bon Appetit\n";
	else
		std::cout << bill[k] / 2 << std::endl;
}

int pageCount(int n, int p) {
	int fromBegin {0};
	int fromEnd {0};
	if(n%2 == 0) n += 1;
	fromBegin = p/2;
	fromEnd = (n-p) / 2;

	return (fromBegin < fromEnd)?fromBegin : fromEnd;
}

int countingValleys(int steps, std::string&& path){
	int result = 0; int seaLevel = 0;
	for(const char& ch : path){
		if(ch == 'U'){
			seaLevel ++;
			if(seaLevel == 0) result ++;
		}
		else
			seaLevel --;
	}
	return result;
}

int getMoneySpent(std::vector<int>&& keyboards, std::vector<int>&& drivers, int b){
	int result = -1;
	for(const auto& keyboard : keyboards){
		for(const auto& driver : drivers){
			if((keyboard + driver) <= b && (keyboard + driver) > result)
				result = keyboard + driver;
		}
	}
	return result;
}

std::string catAndMouse(int x, int y, int z){
	int CatA = std::abs(x - z);
	int CatB = std::abs(y - z);

	if(CatA == CatB) return "Mouse C";

	if(CatA < CatB)
		return "Cat A";
	else
		return "Cat B";
}

// for this problem, it can be solved using two mechanisms,
// 1. Create a 3 * 3 square matrix and then rotate it more than once, then mirror it and you shoud have all the 8 square matrices of 3 * 3
// 2. Store the alrealy "only 8" square matrices inside a local array
// Once you have the square matrices, it can just be compared to the given on and get the problem solved
// Hint, the Second approch is the one used
int formingMagicSquare(std::vector<std::vector<int>>&& s){

	int squares[8][3][3] = {
		{{8,1,6},{3,5,7},{4,9,2}},
		{{4,3,8},{9,5,1},{2,7,6}},
		{{2,9,4},{7,5,3},{6,1,8}},
		{{6,7,2},{1,5,9},{8,3,4}},
		{{6,1,8},{7,5,3},{2,9,4}},
		{{8,3,4},{1,5,9},{6,7,2}},
		{{4,9,2},{3,5,7},{8,1,6}},
		{{2,7,6},{9,5,1},{4,3,8}}};

	int result = std::numeric_limits<int>::max();
	for(int i =0; i<8; i++)
	{
		int curr = 0;
		for(int j = 0; j<3; j++)
		{
			for(int k = 0; k<3; k++)
			{
				curr+=abs(squares[i][j][k]-s[j][k]);
			}
		}
		result = std::min(result, curr);
	}
	return result;
}

int pickingNumbers(std::vector<int>&& a){
	std::map<int, int> mp;
	for(const auto& e : a) mp[e]++;
	int res = 0;
	for(int i = 0; i < 99; ++i){
		int curr = std::max(mp[i] + mp[i - 1], mp[i] + mp[i + 1]);
		res = std::max(res, curr);
	}
	return res; 
}

std::vector<int> climbingLeaderboard(std::vector<int>&& ranked, std::vector<int>&& player){
	std::vector<int> result;
	ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end()); 
	std::sort(ranked.begin(), ranked.end());
	int i = 0;
	int length = ranked.size();

	for(const auto& score : player){
		while(i < length && ranked[i] <= score)
			i++;
		result.push_back(length - i + 1);
	}
	return result;
}

int hurdleRace(int k, std::vector<int>&& height) {
	auto result = std::max_element(height.begin(), height.end());
	if(k > *result) return 0;
	return *result - k;
}

int designerPdfViewer(std::vector<int>&& h, std::string&& word) {
	std::map<char,int> _map;
	int index = 0;
	for(char c = 'a'; c <= 'z'; ++c){
		_map[c] = index++;
	}
	std::vector<int> _weights;
	for(char c : word){
		_weights.push_back(h[_map[c]]);
	}
	auto max = std::max_element(_weights.begin(), _weights.end());
	return (*max) * (word.size());
}
