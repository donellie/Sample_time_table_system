#pragma once


namespace HomeandAwayInstitute {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	
	

	/// <summary>
	/// Summary for viewschedule
	/// </summary>
	public ref class viewschedule : public System::Windows::Forms::Form
	{
	public:
		viewschedule(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~viewschedule()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 








	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent^  dataGridViewExtensionComponent1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(viewschedule::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewExtensionComponent1 = (gcnew CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(547, 519);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"View";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &viewschedule::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridViewExtensionComponent1->SetManagedByExtension(this->dataGridView1, true);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(711, 502);
			this->dataGridView1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(228, 523);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Enter Id Number:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(368, 521);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(800, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Classes Available";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(727, 29);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(272, 473);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// viewschedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1011, 547);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"viewschedule";
			this->Text = L"Home and Away Institute";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
			 {					

				/*  dataGridView1->ColumnCount = 6;
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows->Add();

				 String ^ data = "8:00 am - 8:50 am";
				 String ^ data1 = "9:00 am - 10:50 am";
				 String ^ data2 = "11:00 am - 11:50 am";
				 String ^ data3 = "12:00 pm - 2:00 pm";
				 String ^ data4 = "2:00 pm - 5:00 pm";
					

				dataGridView1[0, 0]->Value = data;
				dataGridView1[0, 1]->Value = data1;
				dataGridView1[0, 2]->Value = data2;
				dataGridView1[0, 3]->Value = data3;
				dataGridView1[0, 4]->Value = data4;*/
				
			
								
				try
			{
				System::Data::OleDb::OleDbConnection ^MyConnection;
				System::Data::DataSet ^DtSet;
				System::Data::OleDb::OleDbDataAdapter ^MyCommand;
				MyConnection = gcnew System::Data::OleDb::OleDbConnection("provider= Microsoft.ACE.OLEDB.12.0;Data Source='Schedule.xls';Extended Properties=Excel 12.0;");
				MyCommand = gcnew System::Data::OleDb::OleDbDataAdapter("select * from ["+ textBox1->Text +"$]", MyConnection);
				MyCommand->TableMappings->Add("Table", "TestTable");
				DtSet = gcnew System::Data::DataSet();
				MyCommand->Fill(DtSet);
				dataGridView1->DataSource = DtSet->Tables[0];
				MyConnection->Close();
				dataGridView1->Columns->Remove("F1");


				richTextBox1->AppendText("Monday Classes:: Lectures->Lt10A, Lt9A, Lt10B...Tutotials->5A3, 5D6, 5G12...Pratical->Lab A, Lab B, Lab C");
				richTextBox1->AppendText("\n\n");
				richTextBox1->AppendText("Tuesday Classes:: Lectures->Lt11A, Lt19A, Lt12C...Tutotials->6A3, 6D6, 6G12...Pratical->Lab A, Lab B, Lab C");
				richTextBox1->AppendText("\n\n");
				richTextBox1->AppendText("Wednesday Classes:: Lectures->Lt1A, Lt2A, Lt3B...Tutotials->7A3, 7D6, 7G12...Pratical->Lab A, Lab B, Lab C");
				richTextBox1->AppendText("\n\n");
				richTextBox1->AppendText("Thursday Classes:: Lectures->Lt13A, Lt14A, Lt13B...Tutotials->3A3, 3D6, 3G12...Pratical->Lab A, Lab B, Lab C");
				richTextBox1->AppendText("\n\n");
				richTextBox1->AppendText("Firday Classes:: Lectures->Lt15A, Lt6A, Lt6B...Tutotials->8A3, 8D6, 8G12...Pratical->Lab A, Lab B, Lab C");
				richTextBox1->AppendText("\n\n");
				
			}
			catch (...)
			{
				 MessageBox::Show( "Information File does not exist.Please try again","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information );
			}			
			    
     
			}
		
			 
			 
};
}
