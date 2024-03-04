#include "pch.h"
#include "RepositorioSQLServerPilotos.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


void RepositorioSQLServerPilotos::Add(Piloto^ PilotoAPoner)
{
    String^ queryString = "Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Carreras;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
    SqlConnection^ connection = gcnew SqlConnection(queryString);
    String^ SentenciaSQL = "INSERT INTO[dbo].[Pilotos] " +
        "    ([Nombre] " +
        "    ,[Edad] " +
        "    ,[Telefono]) " +
        "    VALUES ('" +
        PilotoAPoner->Nombre + "','" +
        PilotoAPoner->Edad + "','" +
        PilotoAPoner->Telefono + "')";
    SqlCommand^ command = gcnew SqlCommand(SentenciaSQL, connection);
    connection->Open();
    command->ExecuteNonQuery();
    connection->Close();
}

DataTable^ RepositorioSQLServerPilotos::DameTodos()
{
    String^ CadenaConexion = "Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Carreras;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
    String^ queryString = "SELECT * FROM Pilotos;";
    SqlConnection^ connection = gcnew SqlConnection(CadenaConexion);
    SqlCommand^ command = gcnew SqlCommand(queryString, connection);
    connection->Open();
    SqlDataReader^ reader = command->ExecuteReader();
    DataTable^ tabla = gcnew DataTable();
    tabla->Load(reader);
    connection->Close();
    return tabla;
}
