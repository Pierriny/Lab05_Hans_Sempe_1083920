#include "List.h";
#pragma once

namespace Lab05HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Solitario
	/// </summary>
	public ref class Solitario : public System::Windows::Forms::Form
	{
	public:
		List* milist;

		Solitario(void)
		{
			InitializeComponent();
			milist = new List();
			milist->count = 0;
			milist->start = nullptr;
			milist->end = nullptr;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Solitario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Mesa_de_Juego;
	protected:
	private: System::Windows::Forms::ListBox^ Group_C_7;
	private: System::Windows::Forms::ListBox^ Group_C_6;
	private: System::Windows::Forms::ListBox^ Group_C_5;
	private: System::Windows::Forms::ListBox^ Group_C_4;
	private: System::Windows::Forms::ListBox^ Group_C_3;
	private: System::Windows::Forms::ListBox^ Group_C_2;
	private: System::Windows::Forms::ListBox^ Group_C_1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MaskedTextBox^ Mover_Carta;

	private: System::Windows::Forms::MaskedTextBox^ Grupo_Carta;

	private: System::Windows::Forms::MaskedTextBox^ Pos_Carta;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Realizar_Movimiento;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Repartir_C;
	private: System::Windows::Forms::ListBox^ Carta_Mazo;


	private: System::Windows::Forms::Button^ Tomar_Mazo;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Solitario::typeid));
			this->Mesa_de_Juego = (gcnew System::Windows::Forms::GroupBox());
			this->Group_C_7 = (gcnew System::Windows::Forms::ListBox());
			this->Group_C_6 = (gcnew System::Windows::Forms::ListBox());
			this->Group_C_5 = (gcnew System::Windows::Forms::ListBox());
			this->Group_C_4 = (gcnew System::Windows::Forms::ListBox());
			this->Group_C_3 = (gcnew System::Windows::Forms::ListBox());
			this->Group_C_2 = (gcnew System::Windows::Forms::ListBox());
			this->Group_C_1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Mover_Carta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Grupo_Carta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Pos_Carta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Realizar_Movimiento = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Repartir_C = (gcnew System::Windows::Forms::Button());
			this->Carta_Mazo = (gcnew System::Windows::Forms::ListBox());
			this->Tomar_Mazo = (gcnew System::Windows::Forms::Button());
			this->Mesa_de_Juego->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Mesa_de_Juego
			// 
			this->Mesa_de_Juego->BackColor = System::Drawing::Color::ForestGreen;
			this->Mesa_de_Juego->Controls->Add(this->Group_C_7);
			this->Mesa_de_Juego->Controls->Add(this->Group_C_6);
			this->Mesa_de_Juego->Controls->Add(this->Group_C_5);
			this->Mesa_de_Juego->Controls->Add(this->Group_C_4);
			this->Mesa_de_Juego->Controls->Add(this->Group_C_3);
			this->Mesa_de_Juego->Controls->Add(this->Group_C_2);
			this->Mesa_de_Juego->Controls->Add(this->Group_C_1);
			this->Mesa_de_Juego->Location = System::Drawing::Point(18, 94);
			this->Mesa_de_Juego->Name = L"Mesa_de_Juego";
			this->Mesa_de_Juego->Size = System::Drawing::Size(679, 263);
			this->Mesa_de_Juego->TabIndex = 13;
			this->Mesa_de_Juego->TabStop = false;
			// 
			// Group_C_7
			// 
			this->Group_C_7->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_7->FormattingEnabled = true;
			this->Group_C_7->Location = System::Drawing::Point(584, 18);
			this->Group_C_7->Name = L"Group_C_7";
			this->Group_C_7->Size = System::Drawing::Size(70, 234);
			this->Group_C_7->TabIndex = 13;
			// 
			// Group_C_6
			// 
			this->Group_C_6->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_6->FormattingEnabled = true;
			this->Group_C_6->Location = System::Drawing::Point(483, 18);
			this->Group_C_6->Name = L"Group_C_6";
			this->Group_C_6->Size = System::Drawing::Size(70, 234);
			this->Group_C_6->TabIndex = 12;
			// 
			// Group_C_5
			// 
			this->Group_C_5->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_5->FormattingEnabled = true;
			this->Group_C_5->Location = System::Drawing::Point(390, 18);
			this->Group_C_5->Name = L"Group_C_5";
			this->Group_C_5->Size = System::Drawing::Size(70, 234);
			this->Group_C_5->TabIndex = 11;
			// 
			// Group_C_4
			// 
			this->Group_C_4->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_4->FormattingEnabled = true;
			this->Group_C_4->Location = System::Drawing::Point(297, 18);
			this->Group_C_4->Name = L"Group_C_4";
			this->Group_C_4->Size = System::Drawing::Size(70, 234);
			this->Group_C_4->TabIndex = 10;
			// 
			// Group_C_3
			// 
			this->Group_C_3->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_3->FormattingEnabled = true;
			this->Group_C_3->Location = System::Drawing::Point(205, 18);
			this->Group_C_3->Name = L"Group_C_3";
			this->Group_C_3->Size = System::Drawing::Size(70, 234);
			this->Group_C_3->TabIndex = 9;
			// 
			// Group_C_2
			// 
			this->Group_C_2->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_2->FormattingEnabled = true;
			this->Group_C_2->Location = System::Drawing::Point(112, 18);
			this->Group_C_2->Name = L"Group_C_2";
			this->Group_C_2->Size = System::Drawing::Size(70, 234);
			this->Group_C_2->TabIndex = 8;
			// 
			// Group_C_1
			// 
			this->Group_C_1->BackColor = System::Drawing::Color::ForestGreen;
			this->Group_C_1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Group_C_1->FormattingEnabled = true;
			this->Group_C_1->Location = System::Drawing::Point(20, 18);
			this->Group_C_1->Name = L"Group_C_1";
			this->Group_C_1->Size = System::Drawing::Size(70, 234);
			this->Group_C_1->TabIndex = 7;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::ForestGreen;
			this->groupBox2->Controls->Add(this->Mover_Carta);
			this->groupBox2->Controls->Add(this->Grupo_Carta);
			this->groupBox2->Controls->Add(this->Pos_Carta);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->Realizar_Movimiento);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(714, 77);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(248, 278);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Movimiento";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Solitario::groupBox2_Enter);
			// 
			// Mover_Carta
			// 
			this->Mover_Carta->Location = System::Drawing::Point(20, 199);
			this->Mover_Carta->Mask = L"9";
			this->Mover_Carta->Name = L"Mover_Carta";
			this->Mover_Carta->Size = System::Drawing::Size(100, 20);
			this->Mover_Carta->TabIndex = 17;
			this->Mover_Carta->ValidatingType = System::Int32::typeid;
			// 
			// Grupo_Carta
			// 
			this->Grupo_Carta->Location = System::Drawing::Point(20, 124);
			this->Grupo_Carta->Mask = L"9";
			this->Grupo_Carta->Name = L"Grupo_Carta";
			this->Grupo_Carta->Size = System::Drawing::Size(100, 20);
			this->Grupo_Carta->TabIndex = 16;
			this->Grupo_Carta->ValidatingType = System::Int32::typeid;
			// 
			// Pos_Carta
			// 
			this->Pos_Carta->Location = System::Drawing::Point(20, 53);
			this->Pos_Carta->Mask = L"99";
			this->Pos_Carta->Name = L"Pos_Carta";
			this->Pos_Carta->Size = System::Drawing::Size(100, 20);
			this->Pos_Carta->TabIndex = 15;
			this->Pos_Carta->ValidatingType = System::Int32::typeid;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(17, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Grupo a donde se movera la carta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(17, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Grupo al que pertenece la carta a mover";
			// 
			// Realizar_Movimiento
			// 
			this->Realizar_Movimiento->BackColor = System::Drawing::Color::Transparent;
			this->Realizar_Movimiento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Realizar_Movimiento->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Realizar_Movimiento->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Realizar_Movimiento->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Realizar_Movimiento->Location = System::Drawing::Point(55, 249);
			this->Realizar_Movimiento->Name = L"Realizar_Movimiento";
			this->Realizar_Movimiento->Size = System::Drawing::Size(136, 23);
			this->Realizar_Movimiento->TabIndex = 5;
			this->Realizar_Movimiento->Text = L"Realizar movimiento";
			this->Realizar_Movimiento->UseVisualStyleBackColor = false;
			this->Realizar_Movimiento->Click += gcnew System::EventHandler(this, &Solitario::Realizar_Movimiento_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(17, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Posicion carta a mover";
			// 
			// Repartir_C
			// 
			this->Repartir_C->BackColor = System::Drawing::Color::Yellow;
			this->Repartir_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Repartir_C->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Repartir_C->ForeColor = System::Drawing::Color::Black;
			this->Repartir_C->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Repartir_C->Location = System::Drawing::Point(18, 24);
			this->Repartir_C->Name = L"Repartir_C";
			this->Repartir_C->Size = System::Drawing::Size(84, 50);
			this->Repartir_C->TabIndex = 15;
			this->Repartir_C->Text = L"Repartir";
			this->Repartir_C->UseVisualStyleBackColor = false;
			this->Repartir_C->Click += gcnew System::EventHandler(this, &Solitario::Repartir_C_Click);
			// 
			// Carta_Mazo
			// 
			this->Carta_Mazo->BackColor = System::Drawing::Color::ForestGreen;
			this->Carta_Mazo->FormattingEnabled = true;
			this->Carta_Mazo->Location = System::Drawing::Point(206, 44);
			this->Carta_Mazo->Name = L"Carta_Mazo";
			this->Carta_Mazo->Size = System::Drawing::Size(52, 30);
			this->Carta_Mazo->TabIndex = 16;
			// 
			// Tomar_Mazo
			// 
			this->Tomar_Mazo->BackColor = System::Drawing::Color::Yellow;
			this->Tomar_Mazo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Tomar_Mazo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tomar_Mazo->ForeColor = System::Drawing::Color::Black;
			this->Tomar_Mazo->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Tomar_Mazo->Location = System::Drawing::Point(127, 44);
			this->Tomar_Mazo->Name = L"Tomar_Mazo";
			this->Tomar_Mazo->Size = System::Drawing::Size(73, 30);
			this->Tomar_Mazo->TabIndex = 17;
			this->Tomar_Mazo->Text = L"Mazo";
			this->Tomar_Mazo->UseVisualStyleBackColor = false;
			this->Tomar_Mazo->Click += gcnew System::EventHandler(this, &Solitario::Tomar_Mazo_Click);
			// 
			// Solitario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(977, 367);
			this->Controls->Add(this->Tomar_Mazo);
			this->Controls->Add(this->Carta_Mazo);
			this->Controls->Add(this->Repartir_C);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Mesa_de_Juego);
			this->Name = L"Solitario";
			this->Text = L"Solitario";
			this->Mesa_de_Juego->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void Realizar_Movimiento_Click(System::Object^ sender, System::EventArgs^ e) {

			int Pos_inicial, Grupo_Final, Grupo_inicial;

			Pos_inicial = Convert::ToInt32(Pos_Carta->Text);
			Grupo_inicial = Convert::ToInt32(Grupo_Carta->Text);
			Grupo_Final = Convert::ToInt32(Mover_Carta->Text);

			if (Grupo_inicial <= 7 && Grupo_inicial >= 0 && Grupo_Final <= 7 && Grupo_Final >= 1)
			{
				milist->Extraer_De_Grupos(Pos_inicial, Grupo_inicial, Grupo_Final);

				Imprimir_NodoG1();
				Imprimir_NodoG2();
				Imprimir_NodoG3();
				Imprimir_NodoG4();
				Imprimir_NodoG5();
				Imprimir_NodoG6();
				Imprimir_NodoG7();
			}
			else
			{
				MessageBox::Show("Se debe ingresar un valor permitido", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}

		int Contador_Mazo_Activa = 0;

		private: System::Void Repartir_C_Click(System::Object^ sender, System::EventArgs^ e) {

			int Card_Value = 1;
			int Card_Color = 1;

			for (size_t i = 0; i < 2; i++)
			{
				for (size_t j = 0; j < 26; j++)
				{
					milist->Insert_Begining(Card_Value, Card_Color);
					Card_Value = Card_Value + 1;
				}
				Card_Color = Card_Color + 1;
				Card_Value = 1;
			}
			Llenar_Grupos();

		}

		void Llenar_Grupos() {

		   Random^ Num_Cards = gcnew Random();
		  

		   for (size_t i = 0; i < 1; i++)
		   {
			   
			   int Num, grupo=1;
			   Num = Num_Cards->Next(1, 53)%100;
			   milist->Extract_Mazo(Num, grupo);
			   
		   }

		   for (size_t i = 0; i < 2; i++)
		   {
			   
			   int Num, grupo = 2;
			   Num = Num_Cards->Next(1, 52)%100;
			   milist->Extract_Mazo(Num, grupo);

		   }

		   for (size_t i = 0; i < 3; i++)
		   {
			   
			   int Num, grupo = 3;
			   Num = Num_Cards->Next(1, 50)%100;
			   milist->Extract_Mazo(Num, grupo);

		   }

		   for (size_t i = 0; i < 4; i++)
		   {
			   
			   int Num, grupo = 4;
			   Num = Num_Cards->Next(1, 46)%100;
			   milist->Extract_Mazo(Num, grupo);

		   }

		   for (size_t i = 0; i < 5; i++)
		   {
			   
			   int Num, grupo = 5;
			   Num = Num_Cards->Next(1, 41)%100;
			   milist->Extract_Mazo(Num, grupo);

		   }

		   for (size_t i = 0; i < 6; i++)
		   {
			   
			   int Num, grupo = 6;
			   Num = Num_Cards->Next(1, 35)%100;
			   milist->Extract_Mazo(Num, grupo);

		   }

		   for (size_t i = 0; i < 7; i++)
		   {
			   
			   int Num, grupo = 7;
			   Num = Num_Cards->Next(1, 28)%100;
			   milist->Extract_Mazo(Num, grupo);

		   }

		  
		   Imprimir_NodoG1();
		   Imprimir_NodoG2();
		   Imprimir_NodoG3();
		   Imprimir_NodoG4();
		   Imprimir_NodoG5();
		   Imprimir_NodoG6();
		   Imprimir_NodoG7();
		   Tarjeta_Visible_Maso();
		   Repartir_C->Enabled = false;
		   
	   }
	  
		void Tarjeta_Visible_Maso() {

		   Nodo* temp = milist->start;
		   Random^ Num_Maso_Card=gcnew Random();
		   int Num, Count_;
		   Count_ = milist->count;
		   Num = Num_Maso_Card->Next(0,Count_)%100;
		   Carta_Mazo->Items->Clear();

		   Contador_Mazo_Activa = Num;

		   for (size_t i = 0; i < Num; i++)
		   {
			   temp=temp->next;
		   }

		   if (temp->Card_color==1)
		   {
			   Carta_Mazo->Items->Add(temp->Card_Val + " R");
		   }
		   else
		   {
			   Carta_Mazo->Items->Add(temp->Card_Val + " N");
		   }
		   
	   }
	  
		void Imprimir_NodoG1() {

		   Nodo_Group_1* temp = milist->start_Group_1;
		   Group_C_1->Items->Clear();

		   try
		   {
			   while (temp != nullptr)
			   {

				   if (temp->Card_color == 1)
				   {
					   Group_C_1->Items->Add(temp->Card_Val + " R");

				   }
				   else
				   {
					   Group_C_1->Items->Add(temp->Card_Val + " N");

				   }
				   temp = temp->next;
			   }
		   }
		   catch (Exception^e)
		   {
			   MessageBox::Show("Se a producido un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }

		void Imprimir_NodoG2() {

		   Nodo_Group_2* temp = milist->start_Group_2;
		   Group_C_2->Items->Clear();

		   while (temp != nullptr)
		   {

			   if (temp->Card_color == 1)
			   {
				   Group_C_2->Items->Add(temp->Card_Val + " R");

			   }
			   else
			   {
				   Group_C_2->Items->Add(temp->Card_Val + " N");

			   }
			   temp = temp->next;
		   }
	   }

		void Imprimir_NodoG3() {

		   Nodo_Group_3* temp = milist->start_Group_3;
		   Group_C_3->Items->Clear();

		   while (temp != nullptr)
		   {

			   if (temp->Card_color == 1)
			   {
				   Group_C_3->Items->Add(temp->Card_Val + " R");

			   }
			   else
			   {
				   Group_C_3->Items->Add(temp->Card_Val + " N");

			   }
			   temp = temp->next;
		   }
	   }

		void Imprimir_NodoG4() {

		   Nodo_Group_4* temp = milist->start_Group_4;
		   Group_C_4->Items->Clear();

		   while (temp != nullptr)
		   {

			   if (temp->Card_color == 1)
			   {
				   Group_C_4->Items->Add(temp->Card_Val + " R");

			   }
			   else
			   {
				   Group_C_4->Items->Add(temp->Card_Val + " N");

			   }
			   temp = temp->next;
		   }
	   }
	   
		void Imprimir_NodoG5() {

		   Nodo_Group_5* temp = milist->start_Group_5;
		   Group_C_5->Items->Clear();

		   while (temp != nullptr)
		   {

			   if (temp->Card_color == 1)
			   {
				   Group_C_5->Items->Add(temp->Card_Val + " R");

			   }
			   else
			   {
				   Group_C_5->Items->Add(temp->Card_Val + " N");

			   }
			   temp = temp->next;
		   }
	   }

		void Imprimir_NodoG6() {

		   Nodo_Group_6* temp = milist->start_Group_6;
		   Group_C_6->Items->Clear();

		   while (temp != nullptr)
		   {

			   if (temp->Card_color == 1)
			   {
				   Group_C_6->Items->Add(temp->Card_Val + " R");

			   }
			   else
			   {
				   Group_C_6->Items->Add(temp->Card_Val + " N");

			   }
			   temp = temp->next;
		   }
	   }

		void Imprimir_NodoG7() {

		   Nodo_Group_7* temp = milist->start_Group_7;
		   Group_C_7->Items->Clear();

		   while (temp != nullptr)
		   {

			   if (temp->Card_color == 1)
			   {
				   Group_C_7->Items->Add(temp->Card_Val + " R");

			   }
			   else
			   {
				   Group_C_7->Items->Add(temp->Card_Val + " N");

			   }
			   temp = temp->next;
		   }
	   }

		private: System::Void Tomar_Mazo_Click(System::Object^ sender, System::EventArgs^ e) {

			Nodo* temp = milist->start;
			Random^ Num_Random_NewMCard = gcnew Random();
			int Pos_Random, count_;
			count_ = milist->count;
			Pos_Random = Num_Random_NewMCard->Next(0, count_) % 100;
			Carta_Mazo->Items->Clear();


			for (size_t i = 0; i < Pos_Random; i++)
			{
				temp = temp->next;
			}

			if (temp->Card_color == 1)
			{
				Carta_Mazo->Items->Add(temp->Card_Val + " R");
			}
			else
			{
				Carta_Mazo->Items->Add(temp->Card_Val + " N");
			}
			Contador_Mazo_Activa = Pos_Random;

		}






	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
