#pragma once
#include "IValidadorPiloto.h"
ref class ValidadorPilotoV01 : IValidadorPiloto
{
public: bool isValid(Piloto^ PilotoAValidar) override;
};

