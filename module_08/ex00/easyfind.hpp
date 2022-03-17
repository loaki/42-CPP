#ifndef EASYFIND_HPP_
# define EASYFIND_HPP_

# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int nbr) {
	typename T::iterator found = std::find(container.begin(), container.end(), nbr);
	return found;
}

#endif
