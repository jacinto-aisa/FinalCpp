#pragma once
#include "IValidadorPiloto.h"
#include "RepositorioSQLServerPilotos.h"
#include "ValidadorPilotoV01.h"
namespace Fase01Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioBase
	/// </summary>
	public ref class FormularioIntroduccion : public System::Windows::Forms::Form
	{
	public:
		FormularioIntroduccion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::Label^ labelNombrePiloto;
	private: System::Windows::Forms::Label^ labelEdad;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownEdad;
	private: System::Windows::Forms::Label^ labelTelefono;

	public: System::Windows::Forms::TextBox^ textBoxTelefono;
	private: System::Windows::Forms::Button^ buttonCrearPiloto;
	private: System::Windows::Forms::Label^ labelError;
	public:

	public:
	private:

	public:

	public: IValidadorPiloto^ Validador;
	public: IRepositorioPilotos^ Repositorio;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormularioIntroduccion()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBoxNombrePiloto;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxNombrePiloto = (gcnew System::Windows::Forms::TextBox());
			this->labelNombrePiloto = (gcnew System::Windows::Forms::Label());
			this->labelEdad = (gcnew System::Windows::Forms::Label());
			this->numericUpDownEdad = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelTelefono = (gcnew System::Windows::Forms::Label());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->buttonCrearPiloto = (gcnew System::Windows::Forms::Button());
			this->labelError = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEdad))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxNombrePiloto
			// 
			this->textBoxNombrePiloto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxNombrePiloto->Location = System::Drawing::Point(315, 35);
			this->textBoxNombrePiloto->MaxLength = 50;
			this->textBoxNombrePiloto->Name = L"textBoxNombrePiloto";
			this->textBoxNombrePiloto->Size = System::Drawing::Size(733, 45);
			this->textBoxNombrePiloto->TabIndex = 0;
			// 
			// labelNombrePiloto
			// 
			this->labelNombrePiloto->AutoSize = true;
			this->labelNombrePiloto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombrePiloto->Location = System::Drawing::Point(12, 38);
			this->labelNombrePiloto->Name = L"labelNombrePiloto";
			this->labelNombrePiloto->Size = System::Drawing::Size(297, 39);
			this->labelNombrePiloto->TabIndex = 1;
			this->labelNombrePiloto->Text = L"Nombre del Piloto:";
			// 
			// labelEdad
			// 
			this->labelEdad->AutoSize = true;
			this->labelEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEdad->Location = System::Drawing::Point(12, 136);
			this->labelEdad->Name = L"labelEdad";
			this->labelEdad->Size = System::Drawing::Size(106, 39);
			this->labelEdad->TabIndex = 2;
			this->labelEdad->Text = L"Edad:";
			// 
			// numericUpDownEdad
			// 
			this->numericUpDownEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDownEdad->Location = System::Drawing::Point(133, 130);
			this->numericUpDownEdad->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDownEdad->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->numericUpDownEdad->Name = L"numericUpDownEdad";
			this->numericUpDownEdad->Size = System::Drawing::Size(120, 45);
			this->numericUpDownEdad->TabIndex = 3;
			this->numericUpDownEdad->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			// 
			// labelTelefono
			// 
			this->labelTelefono->AutoSize = true;
			this->labelTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTelefono->Location = System::Drawing::Point(308, 130);
			this->labelTelefono->Name = L"labelTelefono";
			this->labelTelefono->Size = System::Drawing::Size(159, 39);
			this->labelTelefono->TabIndex = 4;
			this->labelTelefono->Text = L"Telefono:";
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTelefono->Location = System::Drawing::Point(473, 124);
			this->textBoxTelefono->MaxLength = 50;
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(575, 45);
			this->textBoxTelefono->TabIndex = 5;
			this->textBoxTelefono->TextChanged += gcnew System::EventHandler(this, &FormularioIntroduccion::textBoxTelefono_TextChanged);
			// 
			// buttonCrearPiloto
			// 
			this->buttonCrearPiloto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCrearPiloto->Location = System::Drawing::Point(801, 202);
			this->buttonCrearPiloto->Name = L"buttonCrearPiloto";
			this->buttonCrearPiloto->Size = System::Drawing::Size(247, 61);
			this->buttonCrearPiloto->TabIndex = 6;
			this->buttonCrearPiloto->Text = L"Crear Piloto";
			this->buttonCrearPiloto->UseVisualStyleBackColor = true;
			this->buttonCrearPiloto->Click += gcnew System::EventHandler(this, &FormularioIntroduccion::buttonCrearPiloto_Click);
			// 
			// labelError
			// 
			this->labelError->AutoSize = true;
			this->labelError->BackColor = System::Drawing::Color::Salmon;
			this->labelError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelError->ForeColor = System::Drawing::Color::Red;
			this->labelError->Location = System::Drawing::Point(12, 224);
			this->labelError->Name = L"labelError";
			this->labelError->Size = System::Drawing::Size(291, 39);
			this->labelError->TabIndex = 7;
			this->labelError->Text = L"Errores: Todo OK.";
			// 
			// FormularioIntroduccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(1060, 289);
			this->Controls->Add(this->labelError);
			this->Controls->Add(this->buttonCrearPiloto);
			this->Controls->Add(this->textBoxTelefono);
			this->Controls->Add(this->labelTelefono);
			this->Controls->Add(this->numericUpDownEdad);
			this->Controls->Add(this->labelEdad);
			this->Controls->Add(this->labelNombrePiloto);
			this->Controls->Add(this->textBoxNombrePiloto);
			this->Name = L"FormularioIntroduccion";
			this->Text = L"FormularioBase";
			this->Load += gcnew System::EventHandler(this, &FormularioIntroduccion::FormularioBase_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEdad))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormularioBase_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxTelefono_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonCrearPiloto_Click(System::Object^ sender, System::EventArgs^ e) {
	Piloto^ PilotoAMeter = gcnew Piloto();
	PilotoAMeter->Edad = Convert::ToInt16(this->numericUpDownEdad->Value);
	PilotoAMeter->Nombre = this->textBoxNombrePiloto->Text;
	PilotoAMeter->Telefono = this->textBoxTelefono->Text;
	this->Validador = gcnew ValidadorPilotoV01();
	this->Repositorio = gcnew RepositorioSQLServerPilotos();
	if (Validador->isValid(PilotoAMeter))
	{
		this->Repositorio->Add(PilotoAMeter);
		this->Close();
	}
	else
		this->labelError->Text = "Errores, no ok";
}
};
}
