#pragma once


#include "CriarFilme.h"
#include "AlterarFilme.h"
#include "Diretor.h"
namespace Locadoras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Sumário para Filmes
	/// </summary>
	public ref class Filmes : public System::Windows::Forms::Form
	{
	public:
		Filmes(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Filmes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;







	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;















	private:







	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Criar Filme";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Filmes::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(173, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Bem Vindo a Locadora";
			this->label3->Click += gcnew System::EventHandler(this, &Filmes::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Alterar Filme";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Filmes::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(335, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 52);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Excluir Filme";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(335, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 52);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Buscar Filme";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(230, 298);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 52);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Criar Diretor";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Filmes::button5_Click_1);
			// 
			// Filmes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 404);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Name = L"Filmes";
			this->Text = L"Filmes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CriarFilme^ CF = gcnew CriarFilme;
		CF->ShowDialog();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Nome_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void ano_criacao_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void categoria_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sinopse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void versao_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AlterarFilme^ AF = gcnew AlterarFilme;
	AF->ShowDialog();
}

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Diretor^ D = gcnew Diretor;
	D->ShowDialog();
}
};
}
