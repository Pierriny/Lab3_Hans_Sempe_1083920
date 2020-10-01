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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ R;
	private: System::Windows::Forms::ListBox^ lstLista;



		   String^ Min;

	public:

		List* miList;

		MyForm1(void)
		{
			InitializeComponent();
			miList = new List();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;


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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->R = (gcnew System::Windows::Forms::Button());
			this->lstLista = (gcnew System::Windows::Forms::ListBox());
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
			this->Prepare->Location = System::Drawing::Point(22, 17);
			this->Prepare->Name = L"Prepare";
			this->Prepare->Size = System::Drawing::Size(211, 46);
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
			this->textBox1->Location = System::Drawing::Point(585, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(585, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(585, 231);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(597, 273);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Move";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(325, 98);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(219, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 10;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(167, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"...";
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
			this->lstLista->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstLista->FormattingEnabled = true;
			this->lstLista->ItemHeight = 21;
			this->lstLista->Location = System::Drawing::Point(12, 132);
			this->lstLista->Name = L"lstLista";
			this->lstLista->Size = System::Drawing::Size(567, 256);
			this->lstLista->TabIndex = 14;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(844, 400);
			this->Controls->Add(this->lstLista);
			this->Controls->Add(this->R);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
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

		private: System::Void Prepare_Click(System::Object^ sender, System::EventArgs^ e) {	

			//int value = Convert::ToInt32(txtNumero->Text);

			int g = generarAtor(1, 13);
			miList->InsertAtStart(g);
			LlenarListBox();

		}



		
		


		private: System::Void R_Click(System::Object^ sender, System::EventArgs^ e) {
	

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
