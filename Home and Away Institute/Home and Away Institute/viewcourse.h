#pragma once

namespace HomeandAwayInstitute {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	 
	/// <summary>
	/// Summary for viewcourse
	/// </summary>
	public ref class viewcourse : public System::Windows::Forms::Form
	{
	public:
		viewcourse(void)
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
		~viewcourse()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent^  dataGridViewExtensionComponent1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;



	private: System::ComponentModel::IContainer^  components;





	protected: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(viewcourse::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewExtensionComponent1 = (gcnew CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column2, 
				this->Column1, this->Column3, this->Column4});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridViewExtensionComponent1->SetManagedByExtension(this->dataGridView1, true);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1011, 506);
			this->dataGridView1->TabIndex = 14;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Course Code";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Course Name";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Course Level";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Course Credit";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(430, 515);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(607, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &viewcourse::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(281, 516);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Search  CourseCode:";
			// 
			// viewcourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1011, 547);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::Color::Maroon;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"viewcourse";
			this->Text = L"Home and Away Institute";
			this->Load += gcnew System::EventHandler(this, &viewcourse::viewcourse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion 

private: System::Void viewcourse_Load(System::Object^  sender, System::EventArgs^  e) {
				String ^sLine = "";

				try
				{
					//Pass the file you selected with the OpenFileDialog control to
					//the StreamReader Constructor.
					System::IO::StreamReader ^FileStream = gcnew System::IO::StreamReader("Courses.txt");
					//You must set the value to false when you are programatically adding rows to
					//a DataGridView.  If you need to allow the user to add rows, you
					//can set the value back to true after you have populated the DataGridView
					dataGridView1->AllowUserToAddRows = false;

					//Read the first line of the text file					
					//The Split Command splits a string into an array, based on the delimiter you pass.
					//I chose to use a semi-colon for the text delimiter.
					//Any character can be used as a delimeter in the split command.
					

					//In this example, I placed the field names in the first row.
					//The for loop below is used to create the columns and use the text values in
					//the first row for the column headings.
									
					array<String^> ^s = sLine->Split(' ');
					sLine = FileStream->ReadLine();
					//The while loop reads each line of text.
					while (sLine != nullptr)
					{
						//Adds a new row to the DataGridView for each line of text.
						dataGridView1->Rows->Add();

						//This for loop loops through the array in order to retrieve each
						//line of text.
						for (int i = 0; i <= s->Length - 1; i++)
						{
							//Splits each line in the text file into a string array
							s = sLine->Split(' ');
							//Sets the value of the cell to the value of the text retreived from the text file.
							dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[i]->Value = s[i]->ToString();
						}
						sLine = FileStream->ReadLine();
					}
					//Close the selected text file.
					FileStream->Close();
				}
				catch (Exception ^err)
				{
					//Display any errors in a Message Box.
					System::Windows::Forms::MessageBox::Show("Error:  " + err->Message, "Program Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^keyword = this->textBox1->Text;

			try
			{
				for each (DataGridViewRow ^dr in this->dataGridView1->Rows)
				{
					if (dr->Index != this->dataGridView1->NewRowIndex)
					{
						if (dr->Cells[0]->Value->ToString()->IndexOf(keyword) > -1)
						{
							this->dataGridView1->CurrentCell = dr->Cells[0]; 						
							break;
						}
					}
				}
			}
			catch(...)
			{
				 MessageBox::Show("Course Record does not exist.Please try again","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information );
			}
		 }
};
}
