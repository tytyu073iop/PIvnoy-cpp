#pragma once

#include <random>
#include <iostream>

#define Konach �����

namespace Konach {
	short ����������() {
		if (rand() % 60)
		{
			return rand() % 10;
		}
		std::cout << "��������!" << '\n';
		return -10;
	}
}