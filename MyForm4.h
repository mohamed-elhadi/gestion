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
	/// Description résumée de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm4(Form^ r)
		{
			retour = r;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::ComponentModel::IContainer^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Afficher";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(53, 285);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ajouter Un Article";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(569, 285);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(118, 258);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(118, 232);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(118, 153);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(118, 179);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"date livraison";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"date emission";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"total article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"nom article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"date de payement ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"moyen de payement ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(118, 46);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"nom client";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(37, 36);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(118, 72);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 19;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox9_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 75);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"prenom client ";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(37, 36);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(37, 36);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(37, 36);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 23;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(11, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Location = System::Drawing::Point(588, 319);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(10, 29);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm4::groupBox1_Enter);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(201, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(242, 24);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Gestion du Commande";
			// 
			// button6
			// 
			this->button6->AccessibleName = L"tesxtBox10";
			this->button6->Location = System::Drawing::Point(351, 39);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(169, 23);
			this->button6->TabIndex = 52;
			this->button6->Text = L"Afficher la liste des commandes\r\n";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(604, 39);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 63;
			this->button7->Text = L"clear all";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(333, 285);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(110, 40);
			this->button8->TabIndex = 64;
			this->button8->Text = L"Modifier";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::button8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(225, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(454, 207);
			this->dataGridView1->TabIndex = 65;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(225, 72);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(454, 207);
			this->dataGridView2->TabIndex = 66;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(579, 12);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 67;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(458, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 13);
			this->label10->TabIndex = 68;
			this->label10->Text = L"Refference commande";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm4::label10_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(245, 41);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 69;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 350);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);


		String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
		String^ date3 = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ moyenPayement = textBox6->Text;
		String^ nomclient = textBox7->Text;
		String^ prenomclient = textBox9->Text;

		//////////////////// recuperer la ville du client //////////////////////

		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Adresse_Livraison FROM client WHERE Nom_c = '" + nomclient + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader1 = cmdDataBase3->ExecuteReader();


		while (myReader1->Read()) {

			textBox10->Text = myReader1->GetString(0);

		}

		myReader1->Close();
		condatabase->Close();


		String^ adresse = textBox10->Text;

		///////////////////////////////////////////////////////////////////////////


		SqlConnection^ condatabase2 = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase5 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(Referance,12,LEN(Referance) - 11) AS int)),0) FROM Commande", condatabase2);
		condatabase2->Open();
		SqlDataReader^ myReader6 = cmdDataBase5->ExecuteReader();

		while (myReader6->Read()) {
			textBox12->Text = Convert::ToString(myReader6->GetInt32(0));
		}
		myReader6->Close();


		///////////////////     chiffer incrementiel    ///////////////////////////

		int chiffre = 1;
		chiffre = Int32::Parse(textBox12->Text);

		chiffre++;

		String^ chf = Convert::ToString(chiffre);

		/////////////////////////////////////////////////////////////////////

		String^ reference = nomclient->Substring(0, 2) + prenomclient->Substring(0, 2) + date->Substring(2, 4) + adresse->Substring(0, 3) + chf;


		textBox11->Text = reference;







		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Commande (Date_Livraison, Date_Emision , Total_Articles ,Date_Payment,Montant_TotalTTC,Remise,Moyen_Payment ,Num_c,Referance ) values('" + date + "','" + date2 + "','0','" + date3 + "','0','0','" + moyenPayement + "',(SELECT Num_c FROM client where Nom_c = '" + nomclient + "' ),'" + reference + "');", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("client  enregistré :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		condatabase->Close();
	}











	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reference = textBox13->Text;
		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + reference + "' ", conDataBase);
		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

		dataGridView1->Hide();
		dataGridView2->Show();

		while (myReader->Read()) {
			textBox1->Text = Convert::ToString(myReader->GetDateTime(1).ToString("yyyy - MM - dd"));
			textBox2->Text = Convert::ToString(myReader->GetDateTime(2).ToString("yyyy - MM - dd"));
			textBox5->Text = Convert::ToString(myReader->GetDateTime(4).ToString("yyyy - MM - dd"));
			textBox6->Text = myReader->GetString(7);
			textBox3->Text = Convert::ToString(myReader->GetInt32(3));
			////////////////////
			textBox14->Text= Convert::ToString(myReader->GetInt32(8));
			int id = Int32::Parse(textBox14->Text);
			String^ nom=("Select Nom_c FROM client WHERE Num_c='"+id+"'");
			String^ prenom = ("Select Prenom_c FROM client WHERE Num_c='" + id + "'");
			///////////////////
			textBox7->Text = nom;
			textBox9->Text = prenom;
		}

		myReader->Close();
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article WHERE ReferenceArticle = '" + reference + "' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView2->DataSource = bindingSource2;
	
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);

		String^ nomclient = textBox7->Text;
		String^ nomArticle = textBox4->Text;
		String^ var = textBox3->Text;
		String^ ref = textBox11->Text;


		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + ref + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader3 = cmdDataBase2->ExecuteReader();


		while (myReader3->Read()) {

			textBox8->Text = Convert::ToString(myReader3->GetInt32(3));

		}

		myReader3->Close();

		int iInt = Int32::Parse(var);
		int fint = Int32::Parse(textBox8->Text);
		iInt = iInt + fint;

		condatabase->Close();

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  contient (Referance,ReferenceArticle ) values('" + ref + "',(SELECT ReferenceArticle FROM Article where Nom_Article = '" + nomArticle + "' ));", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show(" article ajouter :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		condatabase->Close();

		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Commande SET Total_Articles = " + iInt + " where Referance = '" + ref + "' ", condatabase);
		SqlDataReader^ myReader1;
		try {
			condatabase->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			MessageBox::Show("  total article modifier  :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	String^ reference = textBox13->Text;
	String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
	String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
	String^ date3 = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
	String^ moyenPayement = textBox6->Text;

	SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commande SET Date_Livraison = '" + date + "',  Date_Emission= " + date2 + ", Date_Payment = " + date3 + ", Moyen_Payment = " + moyenPayement + " WHERE Referance = '" + reference + "' ", conDataBase);
	SqlDataReader^ myReader;
	try {

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Commande modifiée :'D");
		conDataBase->Close();
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);

	}
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Commande", conDataBase);
	DataTable^ data = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Êtes vous sûr de vouloir continuer ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);


		String^ reference = textBox13->Text;
		SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM contient WHERE Referance = '" + reference + "' ", conDataBase);
		SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Commande WHERE Referance = '" + reference + "' ", conDataBase);

		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Article supprimé :'D");
		conDataBase->Close();
	}
	else {};

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox7->Text = "";
	textBox9->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox13->Text = "";
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
