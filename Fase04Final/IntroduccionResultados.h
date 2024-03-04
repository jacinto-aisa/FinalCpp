#pragma once

namespace Fase04Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IntroduccionResultados
	/// </summary>
	public ref class IntroduccionResultados : public System::Windows::Forms::Form
	{
	public:
		IntroduccionResultados(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~IntroduccionResultados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBoxPilotos;
	protected:

	private: System::Windows::Forms::Label^ labelPiloto;
	private: System::Windows::Forms::Label^ labelCircuito;
	private: System::Windows::Forms::ComboBox^ comboBoxCircuitos;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPosicion;
	private: System::Windows::Forms::Button^ buttonA�adir;

	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBoxPilotos = (gcnew System::Windows::Forms::ComboBox());
			this->labelPiloto = (gcnew System::Windows::Forms::Label());
			this->labelCircuito = (gcnew System::Windows::Forms::Label());
			this->comboBoxCircuitos = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDownPosicion = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonA�adir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPosicion))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBoxPilotos
			// 
			this->comboBoxPilotos->FormattingEnabled = true;
			this->comboBoxPilotos->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Carlos Sainz", L"Checo Perez", L"Fernando Alonso",
					L"Luis Hamilton", L""
			});
			this->comboBoxPilotos->Location = System::Drawing::Point(70, 29);
			this->comboBoxPilotos->Name = L"comboBoxPilotos";
			this->comboBoxPilotos->Size = System::Drawing::Size(180, 28);
			this->comboBoxPilotos->TabIndex = 0;
			// 
			// labelPiloto
			// 
			this->labelPiloto->AutoSize = true;
			this->labelPiloto->Location = System::Drawing::Point(12, 32);
			this->labelPiloto->Name = L"labelPiloto";
			this->labelPiloto->Size = System::Drawing::Size(52, 20);
			this->labelPiloto->TabIndex = 1;
			this->labelPiloto->Text = L"Piloto:";
			// 
			// labelCircuito
			// 
			this->labelCircuito->AutoSize = true;
			this->labelCircuito->Location = System::Drawing::Point(436, 37);
			this->labelCircuito->Name = L"labelCircuito";
			this->labelCircuito->Size = System::Drawing::Size(66, 20);
			this->labelCircuito->TabIndex = 2;
			this->labelCircuito->Text = L"Circuito:";
			// 
			// comboBoxCircuitos
			// 
			this->comboBoxCircuitos->FormattingEnabled = true;
			this->comboBoxCircuitos->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Monaco", L"Monza", L"Valencia" });
			this->comboBoxCircuitos->Location = System::Drawing::Point(518, 29);
			this->comboBoxCircuitos->Name = L"comboBoxCircuitos";
			this->comboBoxCircuitos->Size = System::Drawing::Size(213, 28);
			this->comboBoxCircuitos->TabIndex = 3;
			// 
			// numericUpDownPosicion
			// 
			this->numericUpDownPosicion->Location = System::Drawing::Point(328, 32);
			this->numericUpDownPosicion->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownPosicion->Name = L"numericUpDownPosicion";
			this->numericUpDownPosicion->Size = System::Drawing::Size(69, 26);
			this->numericUpDownPosicion->TabIndex = 4;
			// 
			// buttonA�adir
			// 
			this->buttonA�adir->Location = System::Drawing::Point(772, 29);
			this->buttonA�adir->Name = L"buttonA�adir";
			this->buttonA�adir->Size = System::Drawing::Size(78, 29);
			this->buttonA�adir->TabIndex = 5;
			this->buttonA�adir->Text = L"A�adir";
			this->buttonA�adir->UseVisualStyleBackColor = true;
			// 
			// IntroduccionResultados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 87);
			this->Controls->Add(this->buttonA�adir);
			this->Controls->Add(this->numericUpDownPosicion);
			this->Controls->Add(this->comboBoxCircuitos);
			this->Controls->Add(this->labelCircuito);
			this->Controls->Add(this->labelPiloto);
			this->Controls->Add(this->comboBoxPilotos);
			this->Name = L"IntroduccionResultados";
			this->Text = L"IntroduccionResultados";
			this->Load += gcnew System::EventHandler(this, &IntroduccionResultados::IntroduccionResultados_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPosicion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IntroduccionResultados_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
