/*
	Facebits.h

	Lightweight bitmask manipulation library

    Copyright (C) 2026 Marcos Rubiano
	email:	markusianito@proton.me

	This program is licensed under MIT license. See LICENSE file.
*/

#ifndef FACEBITS
#define FACEBITS

#include <inttypes.h>

template<typename T> T maskShift(T mask);
template<typename T> T maskWidth(T mask);
template<typename T> T readData(T info, T mask);
template<typename T, typename U> T writeDataPreview(T info, T mask, U data);
template<typename T, typename U> void writeData(T& info, T mask, U data);


#endif // FACEBITS