#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "=== MutanStack ===" << std::endl;
	MutantStack<int> mstack;
	std::cout << "empty : " << mstack.empty() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "empty : " << mstack.empty() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " | ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "=== std::list ===" << std::endl;
	std::list<int> mlist;
	std::cout << "empty : " << mlist.empty() << std::endl;
	mlist.push_back(5);
	mlist.push_back(17);
	//std::cout << "top : " << mlist.top() << std::endl;
	mlist.pop_back();
	std::cout << "size : " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::cout << "empty : " << mlist.empty() << std::endl;
	std::list<int>::iterator itl = mlist.begin();
	std::list<int>::iterator itel = mlist.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << " | ";
		++itl;
	}
	std::cout << std::endl;
	std::list<int> l(mlist);
	return 0;
}
