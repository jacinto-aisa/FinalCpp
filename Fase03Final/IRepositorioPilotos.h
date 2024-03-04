#pragma once
#include "Piloto.h"
using namespace System::Collections::Generic;
using namespace System::Data;

public interface class IRepositorioPilotos
{
	void Add(Piloto^ PilotoAPoner);
	DataTable^ DameTodos();
};

