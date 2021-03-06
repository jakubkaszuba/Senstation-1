#include "stdafx.h"
#include "Sensor.h"

Sensor::~Sensor()
{
}

uint16_t Sensor::Id() const
{
	return id;
}

std::string Sensor::Name() const
{
	return name;
}

void Sensor::ConnectPort(Port * port)
{
	this->port = port;
}

Sensor::Sensor(uint16_t id, std::string name)
{
	this->id = id;
	this->name = name;
}
