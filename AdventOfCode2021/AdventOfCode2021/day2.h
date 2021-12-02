#include <glm.hpp>
#include <fstream>
#include <limits>
#include <string>
#include <array>

using namespace glm;

class Day2 {

public:

	vec3 dayPosition = vec3(-5.0f, 0.0f, 0.0f);

	Day2() {
		// Setup

		// Solve problem
	}
	~Day2() {

	}

	std::string partOne()
	{
		int depth = 0;
		int horizontalPos = 0;
		std::ifstream infile("day2.txt");
		
		std::string line;
		while (infile >> line)
		{
			if (line == "forward")
			{
				infile >> line;
				horizontalPos += std::stoi(line);
			}
			else if (line == "down")
			{
				infile >> line;
				depth += std::stoi(line);
			}
			else if (line == "up")
			{
				infile >> line;
				depth -= std::stoi(line);
			}
		}

		int sum = depth * horizontalPos;

		std::string answer = "DAY 2 ANSWER PART ONE: ";
		answer.append(std::to_string(sum));
		return answer;
	}

	std::string partTwo()
	{
		int depth = 0;
		int horizontalPos = 0;
		int aim = 0;
		std::ifstream infile("day2.txt");

		std::string line;
		while (infile >> line)
		{
			if (line == "forward")
			{
				infile >> line;
				horizontalPos += std::stoi(line);
				depth += aim * std::stoi(line);
			}
			else if (line == "down")
			{
				infile >> line;
				aim += std::stoi(line);
			}
			else if (line == "up")
			{
				infile >> line;
				aim -= std::stoi(line);
			}
		}

		int sum = depth * horizontalPos;

		std::string answer = "DAY 2 ANSWER PART TWO: ";
		answer.append(std::to_string(sum));
		return answer;
	}
};
