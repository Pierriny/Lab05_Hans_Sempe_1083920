#pragma once
#include "Solitario.h"

namespace Lab05HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Nparty;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Nparty = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Nparty
			// 
			this->Nparty->BackColor = System::Drawing::Color::White;
			this->Nparty->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nparty->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Nparty->Location = System::Drawing::Point(98, 274);
			this->Nparty->Name = L"Nparty";
			this->Nparty->Size = System::Drawing::Size(125, 48);
			this->Nparty->TabIndex = 0;
			this->Nparty->Text = L"Nueva partida";
			this->Nparty->UseVisualStyleBackColor = false;
			this->Nparty->Click += gcnew System::EventHandler(this, &MyForm::Nparty_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(314, 344);
			this->Controls->Add(this->Nparty);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Nparty_Click(System::Object^ sender, System::EventArgs^ e) {
		Solitario^ Ventana_Solitario = gcnew Solitario();
		Ventana_Solitario->ShowDialog();
	}
	};
}
