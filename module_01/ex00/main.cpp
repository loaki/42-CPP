#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony onTheStack("stackpony", 42);

	onTheStack.call_name();
	onTheStack.call_age();
	std::cout << "destructed" << std::endl;
}

void ponyOnTheHeap(void)
{
	Pony *onTheHeap;

	onTheHeap = new Pony("heapony", 3);
	onTheHeap->call_name();
	onTheHeap->call_age();
	delete onTheHeap;
	std::cout << "destructed" << std::endl;
}

int main(void)
{
	std::cout << "---ponyOnTheStack---" << std::endl;
	ponyOnTheStack();
	std::cout << "---ponyOnTheHeap---" << std::endl;
	ponyOnTheHeap();
	return (0);
}
