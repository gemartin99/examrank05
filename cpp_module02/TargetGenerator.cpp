#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *ptr)
{
	arr.insert(std::pair<std::string, ATarget *>(ptr->getType(), ptr->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &name)
{
	arr.erase(name);
}

ATarget *TargetGenerator::createTarget(const std::string &name)
{
	std::map<std::string, ATarget *>::iterator it = arr.find(name);
	if (it != arr.end())
		return (arr[name]);
	return NULL;
}