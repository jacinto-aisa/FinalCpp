#pragma once

#include "FormularioIntroduccion.h"
#include "Visionado.h"
namespace Fase01Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioInicio
	/// </summary>
	public ref class FormularioInicio : public System::Windows::Forms::Form
	{
	public:
		FormularioInicio(void)
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
		~FormularioInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStripPrincipal;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemMeterPilotos;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemVerPilotos;

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
			this->menuStripPrincipal = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItemMeterPilotos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemVerPilotos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStripPrincipal->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStripPrincipal
			// 
			this->menuStripPrincipal->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStripPrincipal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItemMeterPilotos,
					this->toolStripMenuItemVerPilotos
			});
			this->menuStripPrincipal->Location = System::Drawing::Point(0, 0);
			this->menuStripPrincipal->Name = L"menuStripPrincipal";
			this->menuStripPrincipal->Size = System::Drawing::Size(943, 28);
			this->menuStripPrincipal->TabIndex = 0;
			this->menuStripPrincipal->Text = L"menuStrip1";
			// 
			// toolStripMenuItemMeterPilotos
			// 
			this->toolStripMenuItemMeterPilotos->Name = L"toolStripMenuItemMeterPilotos";
			this->toolStripMenuItemMeterPilotos->Size = System::Drawing::Size(136, 24);
			this->toolStripMenuItemMeterPilotos->Text = L"Introducir Pilotos";
			this->toolStripMenuItemMeterPilotos->Click += gcnew System::EventHandler(this, &FormularioInicio::toolStripMenuItemMeterPilotos_Click);
			// 
			// toolStripMenuItemVerPilotos
			// 
			this->toolStripMenuItemVerPilotos->Name = L"toolStripMenuItemVerPilotos";
			this->toolStripMenuItemVerPilotos->Size = System::Drawing::Size(93, 24);
			this->toolStripMenuItemVerPilotos->Text = L"Ver Pilotos";
			this->toolStripMenuItemVerPilotos->Click += gcnew System::EventHandler(this, &FormularioInicio::toolStripMenuItemVerPilotos_Click);
			// 
			// FormularioInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 283);
			this->Controls->Add(this->menuStripPrincipal);
			this->MainMenuStrip = this->menuStripPrincipal;
			this->Name = L"FormularioInicio";
			this->Text = L"FormularioInicio";
			this->Load += gcnew System::EventHandler(this, &FormularioInicio::FormularioInicio_Load);
			this->menuStripPrincipal->ResumeLayout(false);
			this->menuStripPrincipal->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormularioInicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripMenuItemMeterPilotos_Click(System::Object^ sender, System::EventArgs^ e) {
		FormularioIntroduccion^ Formulario = gcnew FormularioIntroduccion();
		Formulario->Show();
	}
	private: System::Void toolStripMenuItemVerPilotos_Click(System::Object^ sender, System::EventArgs^ e) {
		IRepositorioPilotos^ Repositorio = gcnew RepositorioSQLServerPilotos();
		Visionado^ FormularioVisionado = gcnew Visionado();
		FormularioVisionado->dataGridViewDatos->DataSource = Repositorio->DameTodos();
		FormularioVisionado->Show();
	}
	};
}
