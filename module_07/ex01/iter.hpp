#ifndef ITER_HPP_
# define ITER_HPP_

# include <cstddef>

template<typename T, typename U>
void iter(T* arr, U len, void (*f)(const T&)) {
	for (U i = 0; i < len; ++i) {
		f(arr[i]);
	}
}

#endif
