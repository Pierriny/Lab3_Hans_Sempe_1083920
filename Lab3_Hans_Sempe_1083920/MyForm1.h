#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "List.h";
#pragma once

namespace Lab3HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	struct nodo {
		int dato;
		struct nodo* siguiente;
	};

	typedef nodo* ptrPila;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		static int Second = 0;
		static int Minute = 0;
		String^ Sec;
	private: System::Windows::Forms::Button^ Prepare;


	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ TomarMazo;

	private: System::Windows::Forms::TextBox^ ElMazo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Mazo;

	private: System::Windows::Forms::Button^ R;
	private: System::Windows::Forms::ListBox^ lstLista;



		   String^ Min;

	public:

		List* miList;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	public:

	public:


	public:









		   List* miList2;
		   List* miList3;
		   List* miList4;
		   List* miList5;
		   List* miList6;
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
		   List* miList7;

		MyForm1(void)
		{
			InitializeComponent();
			
			miList = new List();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;

			miList2 = new List();
			miList2->count = 0;
			miList2->start = nullptr;
			miList2->end = nullptr;

			miList3 = new List();
			miList3->count = 0;
			miList3->start = nullptr;
			miList3->end = nullptr;

			miList4 = new List();
			miList4->count = 0;
			miList4->start = nullptr;
			miList4->end = nullptr;

			miList5 = new List();
			miList5->count = 0;
			miList5->start = nullptr;
			miList5->end = nullptr;

			miList6 = new List();
			miList6->count = 0;
			miList6->start = nullptr;
			miList6->end = nullptr;

			miList7 = new List();
			miList7->count = 0;
			miList7->start = nullptr;
			miList7->end = nullptr;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ tiempo;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tiempo = (gcnew System::Windows::Forms::Label());
			this->Prepare = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->TomarMazo = (gcnew System::Windows::Forms::Button());
			this->ElMazo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mazo = (gcnew System::Windows::Forms::Label());
			this->R = (gcnew System::Windows::Forms::Button());
			this->lstLista = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// tiempo
			// 
			this->tiempo->AutoSize = true;
			this->tiempo->BackColor = System::Drawing::Color::Transparent;
			this->tiempo->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiempo->ForeColor = System::Drawing::Color::White;
			this->tiempo->Location = System::Drawing::Point(649, 33);
			this->tiempo->Name = L"tiempo";
			this->tiempo->Size = System::Drawing::Size(49, 23);
			this->tiempo->TabIndex = 0;
			this->tiempo->Text = L"0:0";
			// 
			// Prepare
			// 
			this->Prepare->BackColor = System::Drawing::Color::White;
			this->Prepare->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prepare->Location = System::Drawing::Point(22, 19);
			this->Prepare->Name = L"Prepare";
			this->Prepare->Size = System::Drawing::Size(208, 46);
			this->Prepare->TabIndex = 2;
			this->Prepare->Text = L"Prepare the table";
			this->Prepare->UseVisualStyleBackColor = false;
			this->Prepare->Click += gcnew System::EventHandler(this, &MyForm1::Prepare_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(553, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(610, 174);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(610, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(610, 273);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(622, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Move";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// TomarMazo
			// 
			this->TomarMazo->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TomarMazo->Location = System::Drawing::Point(325, 98);
			this->TomarMazo->Name = L"TomarMazo";
			this->TomarMazo->Size = System::Drawing::Size(75, 23);
			this->TomarMazo->TabIndex = 9;
			this->TomarMazo->Text = L"ADD";
			this->TomarMazo->UseVisualStyleBackColor = true;
			// 
			// ElMazo
			// 
			this->ElMazo->Location = System::Drawing::Point(219, 102);
			this->ElMazo->Name = L"ElMazo";
			this->ElMazo->Size = System::Drawing::Size(100, 20);
			this->ElMazo->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(221, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 15);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Choose Group";
			// 
			// Mazo
			// 
			this->Mazo->AutoSize = true;
			this->Mazo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mazo->Location = System::Drawing::Point(167, 98);
			this->Mazo->Name = L"Mazo";
			this->Mazo->Size = System::Drawing::Size(28, 22);
			this->Mazo->TabIndex = 12;
			this->Mazo->Text = L"...";
			// 
			// R
			// 
			this->R->BackColor = System::Drawing::Color::White;
			this->R->Font = (gcnew System::Drawing::Font(L"Algerian", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R->Location = System::Drawing::Point(22, 74);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(46, 46);
			this->R->TabIndex = 13;
			this->R->Text = L"R";
			this->R->UseVisualStyleBackColor = false;
			this->R->Click += gcnew System::EventHandler(this, &MyForm1::R_Click);
			// 
			// lstLista
			// 
			this->lstLista->BackColor = System::Drawing::Color::Green;
			this->lstLista->ColumnWidth = 50;
			this->lstLista->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstLista->FormattingEnabled = true;
			this->lstLista->ItemHeight = 21;
			this->lstLista->Location = System::Drawing::Point(12, 174);
			this->lstLista->MultiColumn = true;
			this->lstLista->Name = L"lstLista";
			this->lstLista->Size = System::Drawing::Size(68, 214);
			this->lstLista->TabIndex = 14;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Green;
			this->listBox1->ColumnWidth = 50;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 21;
			this->listBox1->Location = System::Drawing::Point(96, 174);
			this->listBox1->MultiColumn = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(68, 214);
			this->listBox1->TabIndex = 15;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::Green;
			this->listBox2->ColumnWidth = 50;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 21;
			this->listBox2->Location = System::Drawing::Point(181, 174);
			this->listBox2->MultiColumn = true;
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(68, 214);
			this->listBox2->TabIndex = 16;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::Color::Green;
			this->listBox3->ColumnWidth = 50;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 21;
			this->listBox3->Location = System::Drawing::Point(264, 174);
			this->listBox3->MultiColumn = true;
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(68, 214);
			this->listBox3->TabIndex = 17;
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::Color::Green;
			this->listBox4->ColumnWidth = 50;
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 21;
			this->listBox4->Location = System::Drawing::Point(349, 174);
			this->listBox4->MultiColumn = true;
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(68, 214);
			this->listBox4->TabIndex = 18;
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::Color::Green;
			this->listBox5->ColumnWidth = 50;
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 21;
			this->listBox5->Location = System::Drawing::Point(435, 174);
			this->listBox5->MultiColumn = true;
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(68, 214);
			this->listBox5->TabIndex = 19;
			// 
			// listBox6
			// 
			this->listBox6->BackColor = System::Drawing::Color::Green;
			this->listBox6->ColumnWidth = 50;
			this->listBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 21;
			this->listBox6->Location = System::Drawing::Point(519, 174);
			this->listBox6->MultiColumn = true;
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(68, 214);
			this->listBox6->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"G1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(115, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 22);
			this->label3->TabIndex = 22;
			this->label3->Text = L"G2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(201, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 22);
			this->label4->TabIndex = 23;
			this->label4->Text = L"G3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(282, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 22);
			this->label5->TabIndex = 24;
			this->label5->Text = L"G4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(372, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 22);
			this->label6->TabIndex = 25;
			this->label6->Text = L"G5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(453, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 22);
			this->label7->TabIndex = 26;
			this->label7->Text = L"G6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(534, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 22);
			this->label8->TabIndex = 27;
			this->label8->Text = L"G7";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(732, 400);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lstLista);
			this->Controls->Add(this->R);
			this->Controls->Add(this->Mazo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ElMazo);
			this->Controls->Add(this->TomarMazo);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Prepare);
			this->Controls->Add(this->tiempo);
			this->Name = L"MyForm1";
			this->Text = L"SOLITAIRE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int generarAtor(int limI, int limS) {
			int xx;
			xx = limI + rand() % (limS + 1 - limI);	
			return xx;
		}
		int generarAlib(int limIi, int limSs) {
			int  yy;
			yy = limIi + rand() % (limSs + 1 - limIi);
			return yy;
		}

		void LlenarListBox() {
			Node* temp = miList->start;
			lstLista->Items->Clear();
			while (temp != nullptr) {
				lstLista->Items->Add(temp->value);
				temp = temp->next;
			}
		}	 

		void LlenarListBox2() {
			Node* temp = miList2->start;
			listBox1->Items->Clear();
			while (temp != nullptr) {
				listBox1->Items->Add(temp->value);
				temp = temp->next;
			}
		}

		void LlenarListBox3() {
			Node* temp = miList3->start;
			listBox2->Items->Clear();
			while (temp != nullptr) {
				listBox2->Items->Add(temp->value);
				temp = temp->next;
			}
		}

		void LlenarListBox4() {
			Node* temp = miList4->start;
			listBox3->Items->Clear();
			while (temp != nullptr) {
				listBox3->Items->Add(temp->value);
				temp = temp->next;
			}
		}

		void LlenarListBox5() {
			Node* temp = miList5->start;
			listBox4->Items->Clear();
			while (temp != nullptr) {
				listBox4->Items->Add(temp->value);
				temp = temp->next;
			}
		}

		void LlenarListBox6() {
			Node* temp = miList6->start;
			listBox5->Items->Clear();
			while (temp != nullptr) {
				listBox5->Items->Add(temp->value);
				temp = temp->next;
			}
		}
		
		void LlenarListBox7() {
			Node* temp = miList7->start;
			listBox6->Items->Clear();
			while (temp != nullptr) {
				listBox6->Items->Add(temp->value);
				temp = temp->next;
			}
		}


		private: System::Void Prepare_Click(System::Object^ sender, System::EventArgs^ e) {	

			//int value = Convert::ToInt32(txtNumero->Text);

		}


		private: System::Void R_Click(System::Object^ sender, System::EventArgs^ e) {
			
			int mazo = generarAtor(1, 13);
			String^ M = System::Convert::ToString(mazo);
			Mazo->Text = M;

			int g = generarAtor(1, 13);
			miList->InsertAtStart(g);
			LlenarListBox();

			int h = generarAtor(1, 13);
			int hh = generarAtor(1, 13);
			miList2->InsertAtStart(h);
			miList2->InsertAtPosition(hh, 1);
			LlenarListBox2();

			int j = generarAtor(1, 13);
			int jj = generarAtor(1, 13);
			int jjj = generarAtor(1, 13);
			miList3->InsertAtStart(j);
			miList3->InsertAtPosition(jj, 1);
			miList3->InsertAtPosition(jjj, 2);
			LlenarListBox3();

			int l = generarAtor(1, 13);
			int ll = generarAtor(1, 13);
			int lll = generarAtor(1, 13);
			int llll = generarAtor(1, 13);
			miList4->InsertAtStart(l);
			miList4->InsertAtPosition(ll, 1);
			miList4->InsertAtPosition(lll, 2);
			miList4->InsertAtPosition(llll, 3);
			LlenarListBox4();

			int ñ = generarAtor(1, 13);
			int ññ = generarAtor(1, 13);
			int ñññ = generarAtor(1, 13);
			int ññññ = generarAtor(1, 13);
			int ñññññ = generarAtor(1, 13);
			miList5->InsertAtStart(ñ);
			miList5->InsertAtPosition(ññ, 1);
			miList5->InsertAtPosition(ñññ, 2);
			miList5->InsertAtPosition(ññññ, 3);
			miList5->InsertAtPosition(ñññññ, 4);
			LlenarListBox5();

			int c = generarAtor(1, 13);
			int cc = generarAtor(1, 13);
			int ccc = generarAtor(1, 13);
			int cccc = generarAtor(1, 13);
			int ccccc = generarAtor(1, 13);
			int cccccc = generarAtor(1, 13);
			miList6->InsertAtStart(c);
			miList6->InsertAtPosition(cc, 1);
			miList6->InsertAtPosition(ccc, 2);
			miList6->InsertAtPosition(cccc, 3);
			miList6->InsertAtPosition(ccccc, 4);
			miList6->InsertAtPosition(cccccc, 5);
			LlenarListBox6();

			int r = generarAtor(1, 13);
			int rr = generarAtor(1, 13);
			int rrr = generarAtor(1, 13);
			int rrrr = generarAtor(1, 13);
			int rrrrr = generarAtor(1, 13);
			int rrrrrr = generarAtor(1, 13);
			int rrrrrrr = generarAtor(1, 13);
			miList7->InsertAtStart(r);
			miList7->InsertAtPosition(rr, 1);
			miList7->InsertAtPosition(rrr, 2);
			miList7->InsertAtPosition(rrrr, 3);
			miList7->InsertAtPosition(rrrrr, 4);
			miList7->InsertAtPosition(rrrrrr, 5);
			miList7->InsertAtPosition(rrrrrrr, 5);
			LlenarListBox7();

			timer1->Enabled = true;
		}







	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		Second++;
		if (Second == 60)
		{
			Second = 0;
			Minute++;
		}
		Sec = Convert::ToString(Second);
		Min = Convert::ToString(Minute);

		tiempo->Text = Min + ":" + Sec;
	}	
};
}
