#pragma once
#include "IRepositorioPilotos.h"
#include "Piloto.h"
using namespace System::Collections::Generic;
ref class RepositorioSQLServerPilotos : IRepositorioPilotos
{
	public: void Add(Piloto^ PilotoAPoner) override;
	public:	DataTable^ DameTodos() override;
};

