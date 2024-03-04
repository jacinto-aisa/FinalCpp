#pragma once

namespace Fase01Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Visionado
	/// </summary>
	public ref class Visionado : public System::Windows::Forms::Form
	{
	public:
		Visionado(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Visionado()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridViewDatos;
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
			this->dataGridViewDatos = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDatos))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewDatos
			// 
			this->dataGridViewDatos->AllowUserToOrderColumns = true;
			this->dataGridViewDatos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDatos->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewDatos->Location = System::Drawing::Point(0, 0);
			this->dataGridViewDatos->Name = L"dataGridViewDatos";
			this->dataGridViewDatos->RowHeadersWidth = 51;
			this->dataGridViewDatos->RowTemplate->Height = 24;
			this->dataGridViewDatos->Size = System::Drawing::Size(1074, 493);
			this->dataGridViewDatos->TabIndex = 0;
			this->dataGridViewDatos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Visionado::dataGridViewDatos_CellContentClick);
			// 
			// Visionado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 493);
			this->Controls->Add(this->dataGridViewDatos);
			this->Name = L"Visionado";
			this->Text = L"Visionado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDatos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridViewDatos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
