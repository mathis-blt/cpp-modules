#ifndef ITER_PP
#define ITER_PP

template<typename T>
void iter(T* array, const int length, void (func)(T&))
{
	for(int i = 0; i < length; ++i)
		func(array[i]);
}

template<typename T>
void iter(T* array, const int length, void (func)(const T&))
{
	for(int i = 0; i < length; ++i)
		func(array[i]);
}

#endif