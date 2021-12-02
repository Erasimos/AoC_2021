#include <glm.hpp>
#include <fstream>
#include <limits>
#include <string>
#include <array>

using namespace glm;

class Day {

public:

	vec3 dayPosition = vec3(0.0f, 0.0f, 0.0f);

	Day() {
		// Setup

		// Solve problem
	}
	~Day() {

	}

	std::string partOne()
	{
		int ans;
		std::string word;
		std::ifstream infile("day1.txt");
		while (infile >> word)
		{
		}

		std::string answer = "DAY 1 ANSWER PART ONE: ";
		answer.append(std::to_string(ans));

		return answer;
	}

	std::string partTwo()
	{
		int ans;
		std::string word;
		std::ifstream infile("day1.txt");
		while (infile >> word)
		{
		}

		std::string answer = "DAY 1 ANSWER PART ONE: ";
		answer.append(std::to_string(ans));

		return answer;
	}

	

};
