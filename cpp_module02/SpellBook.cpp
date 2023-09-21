#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* ptr)
{
	arr.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}

void SpellBook::forgetSpell(std::string const &name)
{
	arr.erase(name);
}

ASpell *SpellBook::createSpell(std::string const &name)
{
	std::map<std::string, ASpell *>::iterator it = arr.find(name);
	if (it != arr.end())
		return (arr[name]);
	return NULL;
}