#pragma once
#include <iostream>

template <typename ...T>
class Variable {
public:
	void sum_all(T...args) {
		auto sum = (args + ...);
		
		std::cout << "Ñóììà = " << sum << std::endl;
}



};
