#include "MutantStack.hpp"
#include <iostream>
#include <list>

// int main()
// {
// 	std::cout << "========== MUTANT STACK ==========" << std::endl;

// 	MutantStack<int> mstack;
// 	mstack.push(5); // 5
// 	mstack.push(17); // 17, 5
// 	std::cout << "Top: " << mstack.top() << std::endl;
// 	mstack.pop(); // 5
// 	std::cout << "Size: " << mstack.size() << std::endl;
// 	mstack.push(3); // 3, 5
// 	mstack.push(7); // 7, 3, 5
// 	mstack.push(737); // 737, 7, 3, 5
// 	mstack.push(0); // 0, 737, 7, 3, 5
// 	std::cout << "Size: " << mstack.size() << std::endl;
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	std::cout << "\nITERATE STACK:" << std::endl;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	std::cout << "\nREVERSE ITERATE STACK:" << std::endl;
// 	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
// 	MutantStack<int>::reverse_iterator rite = mstack.rend();
// 	++rit;
// 	--rit;
// 	while (rit != rite) {
// 		std::cout << *rit << std::endl;
// 		++rit;
// 	}

// 	std::cout << "========== LIST ==========" << std::endl;
	
// 	std::list<int> ls;
// 	ls.push_back(5);
// 	ls.push_back(17);
// 	std::cout << "Back: " << ls.back() << std::endl;
// 	ls.pop_back();
// 	std::cout << "Size: " << ls.size() << std::endl;
// 	ls.push_back(3);
// 	ls.push_back(7);
// 	ls.push_back(737);
// 	ls.push_back(0);
// 	std::cout << "Size: " << ls.size() << std::endl;
// 	std::list<int>::iterator lit = ls.begin();
// 	std::list<int>::iterator lite = ls.end();
// 	++lit;
// 	--lit;
// 	std::cout << "\nITERATE LIST:" << std::endl;
// 	while (lit != lite) {
// 		std::cout << *lit << std::endl;
// 		++lit;
// 	}
// 	std::list<int> ls2(ls);
// 	std::cout << "\nREVERSE ITERATE LIST" << std::endl;	
// 	std::list<int>::reverse_iterator rlit = ls.rbegin();
// 	std::list<int>::reverse_iterator rlite = ls.rend();
// 	++rlit;
// 	--rlit;
// 	while (rlit != rlite) {
// 		std::cout << *rlit << std::endl;
// 		++rlit;
// 	}

// 	return 0;
// }

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
