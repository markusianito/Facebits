/*
	Facebits.h

	Lightweight bitmask manipulation library

    Copyright (C) 2026 Marcos Rubiano
	email:	markusianito@proton.me

	This program is licensed under MIT license. See LICENSE file.
*/

#pragma once

#include <inttypes.h>


template<typename T> T maskShift(T mask)
{
	for (uint8_t i = 0; i < sizeof(T)*8; i++)
		if (mask & (T(1) << i))
			return i;
	return 0;
}

template<typename T> T maskWidth(T mask)
{
	uint8_t w = 0;
	while (mask)
	{
		w += mask & T(1);
		mask >>= 1;
	}
	return w;
}

template<typename T> T readData(T info, T mask)
{
	uint8_t shift = maskShift(mask);
	return (info & mask) >> shift;
}

template<typename T, typename U> void writeData(T& info, T mask, U data)
{
	uint8_t shift = maskShift(mask);
	uint8_t width = maskWidth(mask);
	T maxVal = (T(1) << width) - T(1);

	T result = static_cast<T>(data) & maxVal;

	info = (info & ~mask) | (result << shift);
}
template<typename T, typename U> T writeDataPreview(T info, T mask, U data)
{
	writeData(info, mask, data);
    return info;
}