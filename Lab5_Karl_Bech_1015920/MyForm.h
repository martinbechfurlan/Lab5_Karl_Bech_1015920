#include <stdio.h>     
#include <stdlib.h>     
#include <time.h> 
#pragma once

namespace Lab5KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Threading;

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
	private: System::Windows::Forms::Label^ lbl_Titulo;
	protected:
	private: System::Windows::Forms::Label^ lbl_Instrucciones;


	private: System::Windows::Forms::RichTextBox^ rtxt_Arreglo;
	private: System::Windows::Forms::Label^ vector_lbl;
	private: System::Windows::Forms::Label^ buscarmetodo_lbl;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lbl_Numero_Buscar;


	private: System::Windows::Forms::Label^ lbl_Posicion;
	private: System::Windows::Forms::Label^ res_lbl;

	private: System::Windows::Forms::Button^ boton1_btn;
	private: System::Windows::Forms::Button^ boton2_btn;
	private: System::Windows::Forms::Label^ modo_lbl;



	private: System::Windows::Forms::RichTextBox^ rtxt_Arreglo_Binario;
	private: System::Windows::Forms::Label^ lbl_Secuencial;
	private: System::Windows::Forms::Label^ lbl_Binario;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Titulo;
	private: System::Windows::Forms::Label^ timer_lbl;

	private: System::Windows::Forms::Button^ boton3_btn;

	private: System::Windows::Forms::NumericUpDown^ totalnums_txt;
	private: System::Windows::Forms::NumericUpDown^ searchnum_txt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->lbl_Titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_Instrucciones = (gcnew System::Windows::Forms::Label());
			this->rtxt_Arreglo = (gcnew System::Windows::Forms::RichTextBox());
			this->vector_lbl = (gcnew System::Windows::Forms::Label());
			this->buscarmetodo_lbl = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Numero_Buscar = (gcnew System::Windows::Forms::Label());
			this->lbl_Posicion = (gcnew System::Windows::Forms::Label());
			this->res_lbl = (gcnew System::Windows::Forms::Label());
			this->boton1_btn = (gcnew System::Windows::Forms::Button());
			this->boton2_btn = (gcnew System::Windows::Forms::Button());
			this->modo_lbl = (gcnew System::Windows::Forms::Label());
			this->rtxt_Arreglo_Binario = (gcnew System::Windows::Forms::RichTextBox());
			this->lbl_Secuencial = (gcnew System::Windows::Forms::Label());
			this->lbl_Binario = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo_Titulo = (gcnew System::Windows::Forms::Label());
			this->timer_lbl = (gcnew System::Windows::Forms::Label());
			this->boton3_btn = (gcnew System::Windows::Forms::Button());
			this->totalnums_txt = (gcnew System::Windows::Forms::NumericUpDown());
			this->searchnum_txt = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->totalnums_txt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchnum_txt))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_Titulo
			// 
			this->lbl_Titulo->AutoSize = true;
			this->lbl_Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Titulo->Location = System::Drawing::Point(7, 9);
			this->lbl_Titulo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Titulo->Name = L"lbl_Titulo";
			this->lbl_Titulo->Size = System::Drawing::Size(0, 20);
			this->lbl_Titulo->TabIndex = 0;
			// 
			// lbl_Instrucciones
			// 
			this->lbl_Instrucciones->AutoSize = true;
			this->lbl_Instrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Instrucciones->Location = System::Drawing::Point(8, 79);
			this->lbl_Instrucciones->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Instrucciones->Name = L"lbl_Instrucciones";
			this->lbl_Instrucciones->Size = System::Drawing::Size(173, 13);
			this->lbl_Instrucciones->TabIndex = 1;
			this->lbl_Instrucciones->Text = L"Ingrese el tamaño del vector:";
			// 
			// rtxt_Arreglo
			// 
			this->rtxt_Arreglo->Location = System::Drawing::Point(928, 23);
			this->rtxt_Arreglo->Margin = System::Windows::Forms::Padding(2);
			this->rtxt_Arreglo->Name = L"rtxt_Arreglo";
			this->rtxt_Arreglo->ReadOnly = true;
			this->rtxt_Arreglo->Size = System::Drawing::Size(133, 64);
			this->rtxt_Arreglo->TabIndex = 3;
			this->rtxt_Arreglo->Text = L"";
			// 
			// vector_lbl
			// 
			this->vector_lbl->AutoSize = true;
			this->vector_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vector_lbl->Location = System::Drawing::Point(611, 76);
			this->vector_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->vector_lbl->Name = L"vector_lbl";
			this->vector_lbl->Size = System::Drawing::Size(116, 13);
			this->vector_lbl->TabIndex = 4;
			this->vector_lbl->Text = L"Vector de 1 a 1000";
			// 
			// buscarmetodo_lbl
			// 
			this->buscarmetodo_lbl->AutoSize = true;
			this->buscarmetodo_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarmetodo_lbl->Location = System::Drawing::Point(615, 190);
			this->buscarmetodo_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->buscarmetodo_lbl->Name = L"buscarmetodo_lbl";
			this->buscarmetodo_lbl->Size = System::Drawing::Size(130, 13);
			this->buscarmetodo_lbl->TabIndex = 5;
			this->buscarmetodo_lbl->Text = L"Método de busqueda:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Búsqueda Secuencial", L"Búsqueda Binaria", L"Búsqueda Hash" });
			this->comboBox1->Location = System::Drawing::Point(790, 187);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// lbl_Numero_Buscar
			// 
			this->lbl_Numero_Buscar->AutoSize = true;
			this->lbl_Numero_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Numero_Buscar->Location = System::Drawing::Point(8, 161);
			this->lbl_Numero_Buscar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Numero_Buscar->Name = L"lbl_Numero_Buscar";
			this->lbl_Numero_Buscar->Size = System::Drawing::Size(116, 13);
			this->lbl_Numero_Buscar->TabIndex = 7;
			this->lbl_Numero_Buscar->Text = L"Elemento a buscar:";
			// 
			// lbl_Posicion
			// 
			this->lbl_Posicion->AutoSize = true;
			this->lbl_Posicion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Posicion->Location = System::Drawing::Point(317, 302);
			this->lbl_Posicion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Posicion->Name = L"lbl_Posicion";
			this->lbl_Posicion->Size = System::Drawing::Size(129, 13);
			this->lbl_Posicion->TabIndex = 9;
			this->lbl_Posicion->Text = L"Posición del número: ";
			// 
			// res_lbl
			// 
			this->res_lbl->AutoSize = true;
			this->res_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold));
			this->res_lbl->Location = System::Drawing::Point(600, 302);
			this->res_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->res_lbl->Name = L"res_lbl";
			this->res_lbl->Size = System::Drawing::Size(23, 13);
			this->res_lbl->TabIndex = 10;
			this->res_lbl->Text = L"----";
			// 
			// boton1_btn
			// 
			this->boton1_btn->Location = System::Drawing::Point(450, 80);
			this->boton1_btn->Margin = System::Windows::Forms::Padding(2);
			this->boton1_btn->Name = L"boton1_btn";
			this->boton1_btn->Size = System::Drawing::Size(91, 23);
			this->boton1_btn->TabIndex = 11;
			this->boton1_btn->Text = L"Continuar";
			this->boton1_btn->UseVisualStyleBackColor = true;
			this->boton1_btn->Click += gcnew System::EventHandler(this, &MyForm::boton1_btn_Click);
			// 
			// boton2_btn
			// 
			this->boton2_btn->Location = System::Drawing::Point(450, 157);
			this->boton2_btn->Margin = System::Windows::Forms::Padding(2);
			this->boton2_btn->Name = L"boton2_btn";
			this->boton2_btn->Size = System::Drawing::Size(91, 25);
			this->boton2_btn->TabIndex = 12;
			this->boton2_btn->Text = L"Elegir";
			this->boton2_btn->UseVisualStyleBackColor = true;
			this->boton2_btn->Click += gcnew System::EventHandler(this, &MyForm::boton2_btn_Click);
			// 
			// modo_lbl
			// 
			this->modo_lbl->AutoSize = true;
			this->modo_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modo_lbl->Location = System::Drawing::Point(536, 331);
			this->modo_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->modo_lbl->Name = L"modo_lbl";
			this->modo_lbl->Size = System::Drawing::Size(19, 13);
			this->modo_lbl->TabIndex = 13;
			this->modo_lbl->Text = L"---";
			// 
			// rtxt_Arreglo_Binario
			// 
			this->rtxt_Arreglo_Binario->Location = System::Drawing::Point(928, 91);
			this->rtxt_Arreglo_Binario->Margin = System::Windows::Forms::Padding(2);
			this->rtxt_Arreglo_Binario->Name = L"rtxt_Arreglo_Binario";
			this->rtxt_Arreglo_Binario->ReadOnly = true;
			this->rtxt_Arreglo_Binario->Size = System::Drawing::Size(133, 64);
			this->rtxt_Arreglo_Binario->TabIndex = 14;
			this->rtxt_Arreglo_Binario->Text = L"";
			// 
			// lbl_Secuencial
			// 
			this->lbl_Secuencial->AutoSize = true;
			this->lbl_Secuencial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Secuencial->Location = System::Drawing::Point(850, 23);
			this->lbl_Secuencial->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Secuencial->Name = L"lbl_Secuencial";
			this->lbl_Secuencial->Size = System::Drawing::Size(74, 13);
			this->lbl_Secuencial->TabIndex = 15;
			this->lbl_Secuencial->Text = L"Secuencial:";
			// 
			// lbl_Binario
			// 
			this->lbl_Binario->AutoSize = true;
			this->lbl_Binario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Binario->Location = System::Drawing::Point(870, 91);
			this->lbl_Binario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Binario->Name = L"lbl_Binario";
			this->lbl_Binario->Size = System::Drawing::Size(50, 13);
			this->lbl_Binario->TabIndex = 16;
			this->lbl_Binario->Text = L"Binario:";
			// 
			// lbl_Tiempo_Titulo
			// 
			this->lbl_Tiempo_Titulo->AutoSize = true;
			this->lbl_Tiempo_Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Tiempo_Titulo->Location = System::Drawing::Point(728, 300);
			this->lbl_Tiempo_Titulo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Tiempo_Titulo->Name = L"lbl_Tiempo_Titulo";
			this->lbl_Tiempo_Titulo->Size = System::Drawing::Size(119, 13);
			this->lbl_Tiempo_Titulo->TabIndex = 17;
			this->lbl_Tiempo_Titulo->Text = L"Tiempo transcurrido";
			// 
			// timer_lbl
			// 
			this->timer_lbl->AutoSize = true;
			this->timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timer_lbl->Location = System::Drawing::Point(782, 331);
			this->timer_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->timer_lbl->Name = L"timer_lbl";
			this->timer_lbl->Size = System::Drawing::Size(19, 13);
			this->timer_lbl->TabIndex = 18;
			this->timer_lbl->Text = L"---";
			// 
			// boton3_btn
			// 
			this->boton3_btn->Location = System::Drawing::Point(986, 190);
			this->boton3_btn->Name = L"boton3_btn";
			this->boton3_btn->Size = System::Drawing::Size(75, 23);
			this->boton3_btn->TabIndex = 19;
			this->boton3_btn->Text = L"Elegir";
			this->boton3_btn->UseVisualStyleBackColor = true;
			this->boton3_btn->Click += gcnew System::EventHandler(this, &MyForm::boton3_btn_Click);
			// 
			// totalnums_txt
			// 
			this->totalnums_txt->Location = System::Drawing::Point(295, 77);
			this->totalnums_txt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->totalnums_txt->Name = L"totalnums_txt";
			this->totalnums_txt->Size = System::Drawing::Size(120, 20);
			this->totalnums_txt->TabIndex = 20;
			this->totalnums_txt->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// searchnum_txt
			// 
			this->searchnum_txt->Location = System::Drawing::Point(295, 159);
			this->searchnum_txt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->searchnum_txt->Name = L"searchnum_txt";
			this->searchnum_txt->Size = System::Drawing::Size(120, 20);
			this->searchnum_txt->TabIndex = 21;
			this->searchnum_txt->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(475, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(475, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(949, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1048, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1143, 414);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchnum_txt);
			this->Controls->Add(this->totalnums_txt);
			this->Controls->Add(this->boton3_btn);
			this->Controls->Add(this->timer_lbl);
			this->Controls->Add(this->lbl_Tiempo_Titulo);
			this->Controls->Add(this->lbl_Binario);
			this->Controls->Add(this->lbl_Secuencial);
			this->Controls->Add(this->rtxt_Arreglo_Binario);
			this->Controls->Add(this->modo_lbl);
			this->Controls->Add(this->boton2_btn);
			this->Controls->Add(this->boton1_btn);
			this->Controls->Add(this->res_lbl);
			this->Controls->Add(this->lbl_Posicion);
			this->Controls->Add(this->lbl_Numero_Buscar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->buscarmetodo_lbl);
			this->Controls->Add(this->vector_lbl);
			this->Controls->Add(this->rtxt_Arreglo);
			this->Controls->Add(this->lbl_Instrucciones);
			this->Controls->Add(this->lbl_Titulo);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->totalnums_txt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchnum_txt))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
		Stopwatch^ stopWatch = gcnew Stopwatch();
		

		array<Int32^>^ totnum;
		array<Int32^>^ vector1;
		array<Int32^>^ totnum2;
		array<Int32^>^ hastot;
		Random^ randomnum = gcnew Random();
		
		Hashtable^ hashfunc = gcnew Hashtable();
		
		int random;
		int total;
		int eleccion; 
		int searchnum; 
		int same = 0;
		int n; 
		int r;
	private: System::Void boton1_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			total = Convert::ToInt32(totalnums_txt->Text);
			totnum = gcnew array<Int32^>(total);
			totnum2 = gcnew array<Int32^>(total);
			hastot = gcnew array<Int32^>(total);
			for (int i = 0; i < total; i++) {
				random = randomnum->Next(1001);				
				totnum[i] = random;
				totnum2[i] = totnum[i];
				hastot[i] = totnum[i];
				rtxt_Arreglo->Text += totnum[i] + "\r\n";
			}
			ordenar(totnum2, total);
			for (int i = 0; i < total; i++) {
				rtxt_Arreglo_Binario->Text += totnum2[i] + "\r\n";
			}
			for (int i = 0; i < total; i++) {
				if (hashfunc->ContainsKey(Hash(Convert::ToInt32(hastot[i]), 1000))) {
					n = 1;
					r = 0;
					while (hashfunc->ContainsKey(Hash(Convert::ToInt32(hastot[i]) + r, 1000 * n))) {
						n++;
						r = r + 1000;
					}
					hashfunc->Add(Hash(Convert::ToInt32(hastot[i]) + r, 1000 * n), Convert::ToString(hastot[i]));

				}
				else {
					hashfunc->Add(Hash(Convert::ToInt32(hastot[i]), 1000), Convert::ToString(hastot[i]));
				}
			}

			
		}
		catch (Exception^ i) {
			MessageBox::Show("Número incorrecto");
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {	
	
}	   
private: System::Void boton2_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		searchnum = Convert::ToInt32(searchnum_txt->Text);
		if (searchnum > 0 && searchnum <= 1000) {
		}
		else {
			MessageBox::Show("Rango de número incorrecto");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Número incorrecto");
	}
}
	   void Busqueda_Secuencial(array<Int32^>^ arreglo, int numero) {		   
		   for (int i = 0; i < total; i++) {
			   if (Convert::ToInt32(numero) == Convert::ToInt32(arreglo[i])) {
				   res_lbl->Text = Convert::ToString(i);
				   break;
			   }
			   else {
				   res_lbl->Text = "Número no dentro del vector";
			   }
		   }
		   res_lbl->Visible = true;
		   
	   }
	   void Busqueda_Binaria(array<Int32^>^ arreglo, int numero, int mayor, int menor) {	
		   int  contadortemp=0;		   
		   try {
			   if (mayor >= 1) {
				   int temp = (menor + mayor) / 2;
				   if (same == temp) {
					   res_lbl->Text = "No se encontró el número";
				   }
				   else {
					   same = temp;
					   if (Convert::ToInt32(arreglo[temp]) == numero) {
						   res_lbl->Text = Convert::ToString(temp);
					   }
					   else if (Convert::ToInt32(arreglo[temp]) > numero) {
						   Busqueda_Binaria(arreglo, numero, temp - 1, menor);
					   }
					   else if (Convert::ToInt32(arreglo[temp]) < numero) {
						   Busqueda_Binaria(arreglo, numero, mayor, temp + 1);
					   }
				   }
			   }
		   }
		   catch (Exception^ e) {			   
		   }
	   }
	   int Hash(int numero, int modulo) {
		   int resultado;
		   resultado = numero % modulo;
		   return resultado;
	   }
	   void ordenar(array<Int32^>^ vector, int quantity) {
		   int aux, i, j;
		   for (i = 0; i < quantity - 1; i++) {
			   for (j = i + 1; j < quantity; j++) {
				   if (Convert::ToInt32(vector[i]) > Convert::ToInt32(vector[j])) {
					   aux = Convert::ToInt32(vector[i]);
					   vector[i] = vector[j];
					   vector[j] = aux;					   
				   }
			   }
		   }
	   }

private: System::Void boton3_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	stopWatch->Restart();
	eleccion = comboBox1->SelectedIndex;
	if (eleccion == 0) {
		stopWatch->Start();
		Thread::Sleep(1000);
		Busqueda_Secuencial(totnum, searchnum+1-1);
		modo_lbl->Text = "Arreglo original";
	
		stopWatch->Stop();
		TimeSpan^ ts = stopWatch->Elapsed;
		String^ elapsedTime = String::Format("{0:00}:{1:00}:{2:00}.{3:00}", ts->Hours, ts->Minutes, ts->Seconds, ts->Milliseconds / 10);
		timer_lbl->Text = Convert::ToString(elapsedTime);

	}
	else if (eleccion == 1) {
		stopWatch->Start();
		Thread::Sleep(1000);
		Busqueda_Binaria(totnum2, searchnum+1-1, totnum->Length - 1, 0);
		modo_lbl->Text = "Arreglo ordenado de menor a mayor";
		stopWatch->Stop();
		TimeSpan^ ts = stopWatch->Elapsed;
		String^ elapsedTime = String::Format("{0:00}:{1:00}:{2:00}.{3:00}", ts->Hours, ts->Minutes, ts->Seconds, ts->Milliseconds / 10);
		timer_lbl->Text = Convert::ToString(elapsedTime);


	}
	else if (eleccion == 2) {
		stopWatch->Start();
		Thread::Sleep(1000);
		int aux = Hash(Convert::ToInt32(searchnum)+1-1, 1000);
		if (hashfunc->ContainsKey(searchnum)) {
			res_lbl->Text = Convert::ToString(aux);
			modo_lbl->Text = "Arreglo modificado especialmente con función hash";
		}
		else {
			res_lbl->Text = "No se encontró el número";
		}

	
		
		stopWatch->Stop();
		TimeSpan^ ts = stopWatch->Elapsed;
		String^ elapsedTime = String::Format("{0:00}:{1:00}:{2:00}.{3:00}", ts->Hours, ts->Minutes, ts->Seconds, ts->Milliseconds / 10);
		timer_lbl->Text = Convert::ToString(elapsedTime);
		
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	

}
};
}
