#pragma once
#include <string>

class Result
{
public:
	Result(std::string unit);
	virtual ~Result();

	virtual std::string ToString() const = 0;

protected:
	std::string unit;
};

