#pragma once
#include <cstddef>
#include <exception>
template <typename T>

class Array{
	private:
		T				*allocation;
		unsigned int	len;
	
	public:
		Array(){
			allocation = NULL;
			len = 0;
		}

		Array(const unsigned int i){
			allocation = new T[i];
			len = i;
		}

		Array &operator=(const Array &other){
			if (this == &other)
				return (*this);

			delete[] this->allocation;

			this->len = other.len;
			if (other.allocation != NULL)
				this->allocation = new T[other.len];
			else 
				this->allocation = NULL;

			for (size_t i = 0; i < len; i++){
				this->allocation[i] = other.allocation[i];
			}
			return (*this);
		}

		Array(const Array &other){
			this->allocation = NULL;
			this->len = 0;
			*this = other;
		}

		T	&operator[](unsigned int index){
			if (index >= len)
				throw std::exception();
			return (this->allocation[index]);
		}

		const T	&operator[](unsigned int index) const{
			if (index >= len)
				throw std::exception();
			return (this->allocation[index]);
		}

		unsigned int	size(void) const{
			return (this->len);
		}

		~Array(void){
			delete [] this->allocation;
		}
};
