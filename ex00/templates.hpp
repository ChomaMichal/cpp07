#pragma once

template <typename T>
void	swap(T &a, T &b){
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T& a, T &b){
	if (b > a)
		return (a);
	return (b);
}

template <typename T>
T	max(T& a, T &b){
	if (a <= b)
		return (b);
	return (a);
}

template <typename T>
T	min(const T& a, const T &b){
	if (b > a)
		return (a);
	return (b);
}

template <typename T>
T	max(const T& a, const T &b){
	if (a <= b)
		return (b);
	return (a);
}
