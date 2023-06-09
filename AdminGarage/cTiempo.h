#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "header.hpp"
#include <ctime>
#include <cstdio>

class cTiempo {
	time_t tiempo_;
public:
	cTiempo();
	cTiempo(time_t Tiempo);
	cTiempo(std::string tiempo);
	cTiempo(const cTiempo& Me);
	~cTiempo();

	std::string tostring() const;

	static int diferenciaFechas(std::string tiempoA, std::string tiempoB);
	static int diferenciaFechas(time_t tiempoA, time_t tiempoB);
	static time_t StringATiempo(std::string& tiempo);
};