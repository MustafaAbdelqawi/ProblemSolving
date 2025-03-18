//
//  main.cpp
//  Playing
//
//  Created by PirloSasa on 27.12.23.
//

#include <iostream>
#include "hackerRank.hpp"
#include <thread>
#include <future>
#include <map>

int main(int argc, const char * argv[]) {
	std::cout << "Simple array Sum: ";
	std::vector<int> data{1,2,3,4,5};
	std::future<int> f = std::async(&simpleArraySum,std::move(data));
	std::cout<< f.get() << std::endl;
	std::cout << std::endl;

	std::cout << "Compare Triplets result: ";
	std::vector<int> data1{17,28,30};
	std::vector<int> data2{99,16,8};
	std::future<std::vector<int>> result = std::async(compareTriplets,std::move(data1), std::move(data2));
	auto values = result.get();
	std::cout << values[0] << "," << values[1] << std::endl;
	std::cout << std::endl;

	std::cout << "Absolute difference between diagonals: ";
	int absResult = diagonalDifference({{11,2,4},{4,5,6},{10,8,-12}});
	std::cout << absResult << std::endl;
	std::cout << std::endl;

	std::cout <<  "PlusMinus percentage: \n";
	plusMinus({1,2,3,-1,-2,-3,0,0});
	std::cout << std::endl;

	std::cout << "Stair case: \n";
	staircase(6);
	std::cout << std::endl;

	std::cout << "miniMaxSum: \n";
	miniMaxSum({1,2,3,4,5});
	std::cout << std::endl;

	std::cout << "Birthday cake: \n";
	std::cout <<"Talest candle appears: " << birthdayCakeCandles({4,4,3,1}) << " times.\n";
	std::cout << std::endl;	

	std::cout << "Time Conversion Format: \n";
	std::cout << timeConversion("11:01:00AM") << std::endl;
	std::cout << std::endl;

	std::cout<<"Round Grades Univeristy: \n";
	std::vector<int> roundedGrades = gradingStudents({73, 67, 38, 33});
	for(const auto& grade : roundedGrades){
		std:: cout << grade << std::endl; 
	}

	std::cout << "\nApples and Oranges: \n";
	countApplesAndOranges(7,10, 4,12, {2,3,-4}, {3,-2,-4});
	std::cout << std::endl;

	std::cout << "Kangaroos problem: \n";
	std::cout << kangaroo(2,1,1,2);
	std::cout << std::endl;

	std::cout << "\nBetween two sets: \n";
	std::cout << getTotalX({2,6},{24,36}) << std::endl;
	std::cout << std::endl;

	std::cout << "Breaking Score: \n";
	auto count = breakingRecords({10,5,20,20,4,5,2,25,1});
	for(const auto& cnt : count){
		std::cout << cnt << "\t";
	}
	std::cout << std::endl;

	std::cout << "\nSubarray Division: \n";
	int sets = birthday({2,2,1,3,2}, 4,2);
	std::cout << sets << std::endl;
	std::cout << std::endl;

	std::cout << "Divisible Sum Pairs: " << std::endl;
	std::cout << divisibleSumPairs(5,{1,2,3,4,5,6}) << std::endl;
	std::cout << std::endl;

	std::cout << "Migration Birds: \n";
	std::cout << migratoryBirds({1,4,4,4,5,3}) << std::endl;
	std::cout << std::endl;
	
	std::cout <<"\nSequence Equation (PermutationEquation): \n";
	auto res = permutationEquation({4,3,5,1,2});
	for(const auto& i : res){
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "\nJumping on the clouds: \n";
	std::cout << jumpingOnClouds({1,1,1,0,1,1,0,0,0,0}, 3) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Find Digits: \n";
	std::cout << findDigits(124) << std::endl;
	std::cout << std::endl;

	std::cout << "Days of Programmer:\n";
	std::cout << dayOfProgrammer(1984)<<std::endl;
	std::cout << std::endl;

	std::cout << "Bill Division: \n";
	bonAppetit({3,10,2,9},1,7);
	std::cout << std::endl;
	
	std::cout << "Drawing Book: \n";
	std::cout << pageCount(6,5) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Counting Valleys: \n";
	std::cout << countingValleys(8, "DDUUUUDD") << std::endl;
	std::cout << std::endl;
	
	std::cout << "Electronics Shop: \n";
	std::cout << getMoneySpent({40,50,60},{25,30,40},60) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Cats and A Mouse: \n";
	std::cout << catAndMouse(3,5,4) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Forming a Magic Square: \n";
	std::cout << formingMagicSquare({{5,3,4},{1,5,8},{6,4,2}}) << std::endl;
	std::cout << std::endl;

	std::cout << "pickingNumbers: \n";
	std::cout << pickingNumbers({1,1,2,2,4,4,5,5,5}) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Climbing the Leaderboard: \n";
	auto ranked = climbingLeaderboard({100,100,50,40,40,20,10},{5, 25, 50, 120});
	for(const auto& score : ranked)
		std::cout << score << "\t";
	std::cout << std::endl;

	std::cout << "\nThe Hurdle Race: \n";
	std::cout << hurdleRace(4, {1,6,3,5,2}) << std::endl;
	std::cout << std::endl;

	std::cout << "\nDesigner PDF Viewer: " << std::endl;
	std::cout << designerPdfViewer({1,3,1,3,1,4,1,3,2,5,5,5,5,1,1,5,5,1,5,2,5,5,5,5,5,5},"torn")<< std::endl;
	std::cout << std::endl;
	return 0;
}
