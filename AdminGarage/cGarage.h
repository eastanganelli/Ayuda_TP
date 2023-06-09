#pragma once
#include "header.hpp"
#include "cTiempo.h"

class cGarage {
	const std::string Nombre, Direccion, Telefono;
	cTiempo* Apertura,* Cierre;
public:
	cGarage(const std::string Nombre, const std::string Direccion, const std::string Telefono, const std::string HorarioApetura, const std::string HorarioCierre);
	~cGarage();

	// Getters
	std::string get_Nombre() const;
	std::string get_Direccion() const;
	std::string get_Telefono() const;
	
};