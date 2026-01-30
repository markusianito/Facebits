/*
	Facebits.h

	A lightweight library to manipulate bitmasks

    Copyright (c) 2026 Marcos Rubiano
    
	SPDX-License-Identifier: MIT
*/

#ifndef FACEBITS
#define FACEBITS

#include <stdint.h>

template<typename T> T maskShift(T mask);
template<typename T> T maskWidth(T mask);
template<typename T> T readData(T info, T mask);
template<typename T, typename U> T writeDataPreview(T info, T mask, U data);
template<typename T, typename U> void writeData(T& info, T mask, U data);


#endif // FACEBITS