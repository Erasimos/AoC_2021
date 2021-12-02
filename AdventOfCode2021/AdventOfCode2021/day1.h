#include <glm.hpp>
#include <fstream>
#include <limits>
#include <string>
#include <array>

using namespace glm;

class Day1 {

public:

	vec3 dayPosition = vec3(5.0f, 0.0f, 0.0f);

	Day1() {
		// Setup

		// Solve problem
	}
	~Day1() {

	}

	std::string partOne()
	{
		int increases = 0;
		std::ifstream infile("day1.txt");
		int previousDepth = std::numeric_limits<int>::max();
		int depth;
		while (infile >> depth)
		{
			if (depth > previousDepth)
				increases += 1;

			previousDepth = depth;
		}

		std::string answer = "DAY 1 ANSWER PART ONE: ";
		answer.append(std::to_string(increases));

		return answer;
	}

	std::string partTwo()
	{
		int increases = 0;
		std::ifstream infile("day1.txt");

		int depth;
		int depths[2000];
		int index = 0;

		while (infile >> depth)
		{
			depths[index] = depth;
			index += 1;
		}

		for (int i = 0; i < 2000 - 3; i++) {
			int threesum1 = depths[i] + depths[i + 1] + depths[i + 2];
			int threesum2 = depths[i + 1] + depths[i + 2] + depths[i + 3];

			if (threesum2 > threesum1)
				increases += 1;
		}

		std::string answer = "DAY 1 ANSWER PART TWO: ";
		answer.append(std::to_string(increases));

		return answer;
	}

};
