#pragma once
using namespace System::Data::SqlClient;
namespace gestion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::ComponentModel::IContainer^ components;

	protected:




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(291, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 30);
			this->button4->TabIndex = 44;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(396, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 30);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(501, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 30);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleName = L"datagridview2";
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(186, 77);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(414, 208);
			this->dataGridView1->TabIndex = 41;
			// 
			// textBox6
			// 
			this->textBox6->AccessibleName = L"textBox5";
			this->textBox6->Location = System::Drawing::Point(12, 191);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(143, 20);
			this->textBox6->TabIndex = 40;
			// 
			// textBox5
			// 
			this->textBox5->AccessibleName = L"textBox1";
			this->textBox5->Location = System::Drawing::Point(12, 39);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(143, 20);
			this->textBox5->TabIndex = 39;
			// 
			// textBox4
			// 
			this->textBox4->AccessibleName = L"textBox2";
			this->textBox4->Location = System::Drawing::Point(12, 77);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(143, 20);
			this->textBox4->TabIndex = 38;
			// 
			// textBox1
			// 
			this->textBox1->AccessibleName = L"textBox6";
			this->textBox1->Location = System::Drawing::Point(12, 229);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label8->Location = System::Drawing::Point(54, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 12);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Nom_Article";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label7->Location = System::Drawing::Point(48, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 12);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Montant_TVA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(54, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 12);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Montat_HT";
			// 
			// textBox3
			// 
			this->textBox3->AccessibleName = L"textBox3";
			this->textBox3->Location = System::Drawing::Point(12, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 20);
			this->textBox3->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(31, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 12);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Quantite_Article";
			// 
			// textBox2
			// 
			this->textBox2->AccessibleName = L"textBox4";
			this->textBox2->Location = System::Drawing::Point(12, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 20);
			this->textBox2->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(46, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 12);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Montant_TTC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Location = System::Drawing::Point(28, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 12);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Référance d\'article";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(219, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 24);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Gestion du Stock";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(186, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Ajouter ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// textBox7
			// 
			this->textBox7->AccessibleName = L"textBox7";
			this->textBox7->Location = System::Drawing::Point(12, 267);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(143, 20);
			this->textBox7->TabIndex = 46;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label2->Location = System::Drawing::Point(46, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 12);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Nature_Article";
			// 
			// textBox8
			// 
			this->textBox8->AccessibleName = L"textBox8";
			this->textBox8->Location = System::Drawing::Point(12, 305);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(143, 20);
			this->textBox8->TabIndex = 48;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Info;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label9->Location = System::Drawing::Point(46, 290);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 12);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Couleur_Article";
			// 
			// textBox9
			// 
			this->textBox9->AccessibleName = L"textBox9";
			this->textBox9->Location = System::Drawing::Point(10, 343);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(143, 20);
			this->textBox9->TabIndex = 50;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Info;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label10->Location = System::Drawing::Point(8, 328);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(157, 12);
			this->label10->TabIndex = 49;
			this->label10->Text = L"Seuil_reapprovisionnement";
			// 
			// button5
			// 
			this->button5->AccessibleName = L"tesxtBox10";
			this->button5->Location = System::Drawing::Point(326, 48);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 23);
			this->button5->TabIndex = 51;
			this->button5->Text = L"Afficher la liste des articles";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::button5_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AccessibleName = L"datagridview1";
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(186, 77);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(414, 208);
			this->dataGridView2->TabIndex = 52;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 365);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO-PROJET;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		String^ reference = textBox1->Text;
		String^ designation = textBox2->Text;
		int quantite = Int32::Parse(textBox3->Text);
		double montant_ht = double::Parse(textBox4->Text);
		double montant_tva = double::Parse(textBox5->Text);
		double montant_ttc = double::Parse(textBox6->Text);
		int seuil = Int32::Parse(textBox7->Text);
		String^ nature = textBox8->Text;
		String^ couleur = textBox9->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Article (ReferenceArticle,Nom_Article,Quantite_Article,Montant_HT,Montant_TVA,Montant_TTC, Nature_Article, Couleur_Article,seuil_reapprovisionnement) VALUES('" + reference + "', '" + designation + "', " + quantite + ", " + montant_ht + ", " + montant_tva + ", " + montant_ttc + ", " + seuil + ", '" + nature + "', '" + couleur + "'); ", conDataBase);
		SqlDataReader^ myReader;
		try {

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Article enregistré :'D");
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO-PROJET;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
	DataTable^ data = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ reference = textBox1->Text;
	String^ constring = "Data Source=(local);Initial Catalog=POO-PROJET;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Article WHERE reference_article = '" + reference + "' ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

	dataGridView1->Hide();
	dataGridView2->Show();

	while (myReader->Read()) {
		textBox2->Text = myReader->GetString(1);
		textBox3->Text = Convert::ToString(myReader->GetInt32(2));
		textBox4->Text = Convert::ToString(myReader->GetDouble(3));
		textBox5->Text = Convert::ToString(myReader->GetDouble(4));
		textBox6->Text = Convert::ToString(myReader->GetDouble(5));
		textBox7->Text = Convert::ToString(myReader->GetInt32(6));
		textBox8->Text = myReader->GetString(7);
		textBox9->Text = myReader->GetString(8);
	}
	myReader->Close();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article WHERE reference_article = '" + reference + "' ", conDataBase);
	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource2->DataSource = data;
	dataGridView2->DataSource = bindingSource2;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO-PROJET;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	String^ reference = textBox1->Text;
	String^ designation = textBox2->Text;
	int quantite = Int32::Parse(textBox3->Text);
	double montant_ht = double::Parse(textBox4->Text);
	double montant_tva = double::Parse(textBox5->Text);
	double montant_ttc = double::Parse(textBox6->Text);
	int seuil = Int32::Parse(textBox7->Text);
	String^ nature = textBox8->Text;
	String^ couleur = textBox9->Text;

	SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Article SET Nom_Article = '" + designation + "',  Quantite_Article = " + quantite + ", Montant_HT = " + montant_ht + ", Montant_TVA = " + montant_tva + ", Montant_TTC = " + montant_ttc + ", seuil_reapprovisionnement = " + seuil + ", Nature_Article = '" + nature + "', Couleur_Article = '" + couleur + "' WHERE ReferenceArticle = '" + reference + "' ", conDataBase);
	SqlDataReader^ myReader;
	try {

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Article modifié :'D");
		conDataBase->Close();
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);

	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO-PROJET;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	String^ reference = textBox1->Text;
	SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Article WHERE ReferenceArticle = '" + reference + "' ", conDataBase);

	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	MessageBox::Show("Article supprimé :'D");
	conDataBase->Close();
}
};
}
