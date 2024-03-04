#include "pch.h"
#include "ValidadorPilotoV01.h"

bool ValidadorPilotoV01::isValid(Piloto^ PilotoAValidar)
{
    
        bool condicion = PilotoAValidar->Nombre->Length < 50;
        condicion = condicion && PilotoAValidar->Nombre->Length > 0;
        condicion = condicion && PilotoAValidar->Edad >= 18;
        condicion = condicion && PilotoAValidar->Edad < 100;
        String^ TelefonoExpresionRegular = "/^(\\+?\\d{2,3}\\s\\d{3}\\-\\d{3}\\-\\d{3})$/g";
        return condicion;
}
