#pragma once
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
	/// Summary for updateschedule
	/// </summary>
	public ref class updateschedule : public System::Windows::Forms::Form
	{
	public:
		updateschedule(void)
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
		~updateschedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;

	private: CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent^  dataGridViewExtensionComponent1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(updateschedule::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewExtensionComponent1 = (gcnew CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 6);
			this->dataGridViewExtensionComponent1->SetManagedByExtension(this->dataGridView1, true);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(686, 501);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &updateschedule::dataGridView1_DragDrop);
			this->dataGridView1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &updateschedule::dataGridView1_DragEnter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(278, 520);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(148, 521);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Enter Id Number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(789, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L" Courses Holder";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(468, 517);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 25);
			this->button1->TabIndex = 15;
			this->button1->Text = L"View";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &updateschedule::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AllowDrop = true;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Location = System::Drawing::Point(706, 66);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(293, 387);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(843, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 34);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Clear Schedule";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &updateschedule::button2_Click);
			// 
			// updateschedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1011, 547);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"updateschedule";
			this->Text = L"Home and Away Institute";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
//private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	
//			
//			 if ( ( MessageBox::Show( "Are you sure you want to update schedule.","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information ) )== 
//					::System::Windows::Forms::DialogResult::OK )
//				{						
//
//					Spreadsheet ^document = gcnew Spreadsheet();
//					document->LoadFromFile("Schedule.xls");
//					document->Worksheets->Delete(Convert::ToString(textBox1->Text));
//
//						if (File::Exists("Schedule.xls"))
//							{
//										File::Delete("Schedule.xls");
//							}
//
//					// Save document
//					document->SaveAs("Schedule.xls");
//
//					// Close Spreadsheet
//					document->Close();
//				 }
//
//			    
//     
//			
//		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

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
				
				 for (int i = 1; i < dataGridView1->Columns->Count ;i++ )
					  {
						  for (int j = 0; j < dataGridView1->Rows->Count; j++)
						  {
							   if (dataGridView1->Rows[j]->Cells[i]->Value == " ")
							   {
								   String ^ value = Convert::ToString(dataGridView1->Rows[j]->Cells[i]->Value);
							   }
							   else if(dataGridView1->Rows[j]->Cells[i]->Value->ToString() == "LUNCH")
							   {
								   String ^ value = Convert::ToString(dataGridView1->Rows[j]->Cells[i]->Value);								  									
							   }
							   else 
							   {
								   richTextBox1->AppendText(dataGridView1->Rows[j]->Cells[i]->Value->ToString() + "\n");
							   }

						  }
					  }

					
				
			}
			catch (...)
			{
				 MessageBox::Show( "Information File does not exist.Please try again","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information );
			}

		 }

//private: System::Void dataGridView1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
//		 {
//			 try
//			 {
//					 if (e->Button == System::Windows::Forms::MouseButtons::Left)
//					{
//						DataGridView::HitTestInfo ^info = dataGridView1->HitTest(e->X, e->Y);
//						if (info->RowIndex >= 0)
//						{
//							if (info->RowIndex >= 0 && info->ColumnIndex >= 0)
//							{
//								String ^text = dataGridView1->Rows[info->RowIndex]->Cells[info->ColumnIndex]->Value->ToString();
//								if (text != nullptr)
//									dataGridView1->DoDragDrop(text, DragDropEffects::Copy);
//							}
//						}
//				}
//			 }
//			 catch(...)
//			 {
//				MessageBox::Show( "Your are trying to access data out of range.Please stay within the confines of View.","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
//			 }
//		 }
//private: System::Void richTextBox1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
//		 {
//				 int i = richTextBox1->SelectionStart;
//				String ^s = richTextBox1->Text->Substring(i);
//				richTextBox1->Text = richTextBox1->Text->Substring(0, i);
//
//				if (e->Data->GetDataPresent(System::String::typeid))
//				{
//					richTextBox1->Text = richTextBox1->Text + safe_cast<System::String^>(e->Data->GetData(System::String::typeid));
//				}
//				richTextBox1->Text = richTextBox1->Text + s;
//		 }
//private: System::Void richTextBox1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
//		 {
//			if (e->Data->GetDataPresent(DataFormats::Text))
//			 e->Effect = DragDropEffects::Copy;
//			else
//			 e->Effect = DragDropEffects::None;
//		 }

private: System::Void dataGridView1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
		 {
			/*dataGridView1[1, 3]->ReadOnly = true;
			dataGridView1[2, 3]->ReadOnly = true;
			dataGridView1[3, 3]->ReadOnly = true;
			dataGridView1[4, 3]->ReadOnly = true;
			dataGridView1[5, 3]->ReadOnly = true;*/

			

			 Point p = this->dataGridView1->PointToClient(Point(e->X, e->Y));
			 DataGridView::HitTestInfo ^info = this->dataGridView1->HitTest(p.X, p.Y);
			 if (info->RowIndex != -1 && info->ColumnIndex != -1)
			 {
			  Object ^value = safe_cast<Object^>(e->Data->GetData(String::typeid));
			  this->dataGridView1->Rows[info->RowIndex]->Cells[info->ColumnIndex]->Value = value;
			 }
			Application::DoEvents();		 
			 		
		 }
private: System::Void dataGridView1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
		 {
			 e->Effect = DragDropEffects::Copy;
		 }


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 if ( ( MessageBox::Show( "Are you sure you want to clear the schedule.Information cannot be retrived afterwards.","Confirm",MessageBoxButtons::OKCancel, MessageBoxIcon::Information ) )== 
					::System::Windows::Forms::DialogResult::OK )
				{		
				 for (int i = 0; i < dataGridView1->Columns->Count ;i++ )
					  {
						  for (int j = 0; j < dataGridView1->Rows->Count; j++)
						  {
							   dataGridView1->Rows[j]->Cells[i]->Value = " ";
						  }
					  }
				
					

						 String ^ data = "8:00 am - 8:50 am";
						 String ^ data1 = "9:00 am - 10:50 am";
						 String ^ data2 = "11:00 am - 11:50 am";
						 String ^ data3 = "12:00 pm - 2:00 pm";
						 String ^ data4 = "2:00 pm - 5:00 pm";
						 String ^ data5 = "LUNCH";
				

						dataGridView1[0, 0]->Value = data;
						dataGridView1[0, 1]->Value = data1;
						dataGridView1[0, 2]->Value = data2;
						dataGridView1[0, 3]->Value = data3;
						dataGridView1[0, 4]->Value = data4;

					

						dataGridView1[1, 3]->Value = data5;
						dataGridView1[2, 3]->Value = data5;
						dataGridView1[3, 3]->Value = data5;
						dataGridView1[4, 3]->Value = data5;
						dataGridView1[5, 3]->Value = data5;

						dataGridView1[1, 3]->ReadOnly = true;
						dataGridView1[2, 3]->ReadOnly = true;
						dataGridView1[3, 3]->ReadOnly = true;
						dataGridView1[4, 3]->ReadOnly = true;
						dataGridView1[5, 3]->ReadOnly = true;

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
			 }
		 }

			
};
}
