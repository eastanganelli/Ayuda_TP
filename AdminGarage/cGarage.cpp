#include "cGarage.h"

cGarage::cGarage(const std::string Nombre, const std::string Direccion, const std::string Telefono, const std::string HorarioApetura, const std::string HorarioCierre) : Nombre(Nombre), Direccion(Direccion), Telefono(Telefono) {
}

cGarage::~cGarage() {
	if (this->Apertura != nullptr) {
		delete this->Apertura;
		this->Apertura = nullptr;
	}

	if (this->Cierre != nullptr) {
		delete this->Cierre;
		this->Cierre = nullptr;
	}
}

std::string cGarage::get_Nombre() const {
	return this->Nombre;
}

std::string cGarage::get_Direccion() const {
	return this->Direccion;
}

std::string cGarage::get_Telefono() const {
	return this->Telefono;
}
