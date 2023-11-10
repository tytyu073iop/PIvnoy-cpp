#pragma once

#include <random>
#include <iostream>

#define Konach Конах

namespace Konach {
	short ОценкаПоКР() {
		if (rand() % 60)
		{
			return rand() % 10;
		}
		std::cout << "Списанно!" << '\n';
		return -10;
	}
}