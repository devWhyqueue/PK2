#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <stdexcept>

class empty_stack_exception : public std::runtime_error
{
	public:
	empty_stack_exception() : std::runtime_error("Fehler! Der Stack ist leer.") { }
};

#endif