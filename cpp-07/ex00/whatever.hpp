#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#define STD			"\033[0m"
#define GREEN		"\033[38;5;34m\033[48;5;193m"
#define PINK		"\033[38;5;199m\033[48;5;225m"
#define BLUE		"\033[38;5;44m\033[48;5;159m"
#define YELLOW		"\033[38;5;226m\033[48;5;236m"
#define VIOLET		"\033[48;5;222m\033[48;5;177m"
#define ORANGE      "\033[38;5;208m\033[48;5;222m"
#define GREYBG		"\033[48;5;237m"

template<typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

// return a < b ? a : b; shorter but less clear.
template<typename T>
const T& min(const T &a, const T &b)
{
	const T *t_min;

	t_min = (a < b) ? &a : &b;
	return (*t_min);
}

// return a > b ? a : b; shorter but less clear.
template<typename T>
const T& max(const T &a, const T &b)
{
	const T *t_max;

	t_max = (a > b) ? &a : &b;
	return (*t_max);
}

#endif