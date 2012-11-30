#pragma once
//using namespace xlsgen;
//using namespace GemBox::Spreadsheet;
using namespace Bytescout::Spreadsheet;


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
	/// Summary for deleteschedule
	/// </summary>
	public ref class deleteschedule : public System::Windows::Forms::Form
	{
	public:
		deleteschedule(void)
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
		~deleteschedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(deleteschedule::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-2, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1010, 502);
			this->dataGridView1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(248, 518);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter Id Number:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(369, 520);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(549, 518);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"View";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &deleteschedule::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(647, 517);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &deleteschedule::button1_Click);
			// 
			// deleteschedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1011, 547);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"deleteschedule";
			this->Text = L"Home and Away Institute";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				
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
				 }
				 catch(...)
				 {
					 MessageBox::Show( "Information does not exist.Ensure that you are entering the correct Id number.","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information );
				 }

						
					

					
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			  if ( ( MessageBox::Show( "Are you sure you want to delete schedule.","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information ) )== 
					::System::Windows::Forms::DialogResult::OK )
				{					

						 dataGridView1->DataSource = nullptr;	

						Spreadsheet ^document = gcnew Spreadsheet();
						document->LoadFromFile("Schedule.xls");
						document->Worksheets->Delete(Convert::ToString(textBox1->Text));

						  if (File::Exists("Schedule.xls"))
							  {
											File::Delete("Schedule.xls");
							 }

						// Save document
						document->SaveAs("Schedule.xls");

						// Close Spreadsheet
						document->Close();
						
						 MessageBox::Show( "Course Schedule has been deleted.","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information );
					
				}
						

		 }
};
}
