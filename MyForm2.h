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
	/// Description résumée de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button6;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(454, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 57;
			this->label2->Text = L"ID_Personnel";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(457, 25);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(141, 20);
			this->textBox7->TabIndex = 56;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(186, 56);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(414, 241);
			this->dataGridView2->TabIndex = 55;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 192);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 20);
			this->textBox4->TabIndex = 52;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 51;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 20);
			this->textBox2->TabIndex = 50;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 49;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(291, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 30);
			this->button4->TabIndex = 48;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(396, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 30);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(501, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 30);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(186, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(414, 241);
			this->dataGridView1->TabIndex = 45;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label8->Location = System::Drawing::Point(24, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 14);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Prenom du Personnel";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(20, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 14);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Date D\'embauchement ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(23, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 14);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Adresse du Personnel";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Location = System::Drawing::Point(32, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 14);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Nom du Personnel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(211, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 24);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Gestion de Personnel";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(186, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Ajouter ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 23);
			this->button5->TabIndex = 58;
			this->button5->Text = L"afficher les personnels ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(74, 225);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 17);
			this->radioButton1->TabIndex = 60;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"OUI";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(124, 225);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(49, 17);
			this->radioButton2->TabIndex = 61;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NON";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton2_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 64;
			this->label7->Text = L"Encadreur";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Info;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label9->Location = System::Drawing::Point(20, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 14);
			this->label9->TabIndex = 65;
			this->label9->Text = L"Nom d\'encadreur";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(0, 32);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(153, 20);
			this->textBox5->TabIndex = 66;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Info;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label10->Location = System::Drawing::Point(10, 55);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(131, 14);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Prenom du Personnel";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(0, 72);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(152, 20);
			this->textBox8->TabIndex = 68;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Location = System::Drawing::Point(15, 248);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(153, 96);
			this->groupBox2->TabIndex = 70;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm2::groupBox2_Enter);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 27);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 71;
			this->button6->Text = L"clear all";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 371);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		groupBox2->Hide();

	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);
		
		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "" && textBox4->Text == "" && textBox5->Text == "" && textBox8->Text == "") {
			MessageBox::Show("vous devez remplir tous les champs");
		}else{
		String^ nom_p = textBox1->Text;
		String^ prenom_p = textBox2->Text;
		String^ adresse_p = textBox3->Text;
		String^ dateEM = Convert::ToDateTime(textBox4->Text).ToString("yyyy-MM-dd");
		String^ nom_E = textBox5->Text;
		String^ prenom_E = textBox8->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Personnel (Nom_p, Prenom_p , Date_Eembauche , Adresse ,ID_Personnel ) values('" + nom_p + "','" + prenom_p + "','" + dateEM + "','" + adresse_p + "',(SELECT ID FROM Personnel WHERE Nom_p='" + nom_E + "' AND Prenom_p='" + prenom_E + "'));", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("client  enregistré :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		}
		

	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox2->Show();
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox2->Hide();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView1->Show();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		String^ nom_p = textBox1->Text;
		String^ prenom_p = textBox2->Text;
		String^ adresse_p = textBox3->Text;
		String^ dateEM = Convert::ToDateTime(textBox4->Text).ToString("yyyy-MM-dd");
		String^ nom_E = textBox5->Text;
		String^ prenom_E = textBox8->Text;
		String^ id = textBox7->Text;



		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Personnel SET  Nom_p = '" + nom_p + "', Prenom_p ='" + prenom_p + "' , Date_Eembauche = '" + dateEM + "' , Adresse = '" + adresse_p + "' WHERE ID = " + id + " ;", conDataBase);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Personnel SET ID_Personnel=(SELECT ID FROM Personnel WHERE Nom_p='" + nom_E + "' AND Prenom_p='" + prenom_E + "') WHERE Nom_p='" + nom_p + "' AND Prenom_p='" + prenom_p + "' ;",conDataBase);

		SqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			myReader = cmdDataBase1->ExecuteReader();

			MessageBox::Show("client modifié :'D");
			conDataBase->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = textBox7->Text;
	String^ constring = "Data Source=(local);Initial Catalog=BDD;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Personnel WHERE ID = '" + id + "' ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	dataGridView1->Hide();
	dataGridView2->Show();

	while (myReader->Read()) {
		textBox1->Text = myReader->GetString(1);
		textBox2->Text = myReader->GetString(2);
		textBox3->Text = myReader->GetString(4);
		textBox4->Text = Convert::ToString(myReader->GetDateTime(3).ToString("yyyy - MM - dd"));
		
	}
	myReader->Close();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel WHERE ID = '" + id + "' ", conDataBase);
	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource2->DataSource = data;
	dataGridView2->DataSource = bindingSource2;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=BDD;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	String^ ID = textBox7->Text;
	SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Personnel WHERE ID = '" + ID + "' ", conDataBase);

	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	MessageBox::Show("Client  supprimé :'D");
	conDataBase->Close();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	radioButton1->Checked = false;
	radioButton2->Checked = true;
	radioButton2->Checked = false;
}
};
}
