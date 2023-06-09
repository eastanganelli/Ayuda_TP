#include "cTiempo.h"

cTiempo::cTiempo() {
	this->tiempo_ = time(nullptr);
}

cTiempo::cTiempo(time_t Tiempo) {
	this->tiempo_ = Tiempo;
}

cTiempo::cTiempo(std::string tiempo) {
	this->tiempo_ = cTiempo::StringATiempo(tiempo);
}

cTiempo::cTiempo(const cTiempo& Me) {
	this->tiempo_ = Me.tiempo_;
}

cTiempo::~cTiempo() {
}

int cTiempo::diferenciaFechas(std::string tiempoA, std::string tiempoB) {
	return difftime(cTiempo::StringATiempo(tiempoA), cTiempo::StringATiempo(tiempoB));
}

int cTiempo::diferenciaFechas(time_t tiempoA, time_t tiempoB) {
	return difftime(tiempoA, tiempoB);
}

time_t cTiempo::StringATiempo(std::string& tiempo) {
	time_t Tiempo = 0;
	int y = 0, m = 0, d = 0, hh = 0, mm = 0;

	(void)sscanf(tiempo.c_str(), "%2d/%2d/%4d %2d:%2d", &d, &m, &y, &hh, &mm);

	struct tm when = { 0 };

	when.tm_year = y - 1900;
	when.tm_mon = m - 1;
	when.tm_mday = d;
	when.tm_hour = hh;
	when.tm_min = mm;

	return mktime(&when);
}

std::string cTiempo::tostring() const {
	std::stringstream ss;
	ss << ctime(&(this->tiempo_));
	return ss.str();
}