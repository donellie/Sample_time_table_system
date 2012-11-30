#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;
//namespace Excel=Microsoft::Office::Interop::Excel;
//using namespace GemBox::Spreadsheet;
//using namespace xlsgen;



namespace HomeandAwayInstitute {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for addschedule
	/// </summary>
	public ref class addschedule : public System::Windows::Forms::Form
	{
	public:
		addschedule(void)
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
		~addschedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;




	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label3;
	private: CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent^  dataGridViewExtensionComponent1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label2;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addschedule::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewExtensionComponent1 = (gcnew CompletIT::Windows::DataGridViewExtension::DataGridViewExtensionComponent(this->components));
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(291, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Add Course Schedule ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6});
			this->dataGridView1->Location = System::Drawing::Point(0, 2);
			this->dataGridViewExtensionComponent1->SetManagedByExtension(this->dataGridView1, true);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(700, 546);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &addschedule::dataGridView1_DragDrop);
			this->dataGridView1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &addschedule::dataGridView1_DragEnter);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Time";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Monday";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tuesday";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Wednsday";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Thursday";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Firday";
			this->Column6->Name = L"Column6";
			// 
			// richTextBox1
			// 
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Location = System::Drawing::Point(706, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(293, 204);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(810, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addschedule::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(781, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L" Courses Available";
			// 
			// richTextBox2
			// 
			this->richTextBox2->EnableAutoDragDrop = true;
			this->richTextBox2->Location = System::Drawing::Point(706, 281);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(293, 186);
			this->richTextBox2->TabIndex = 10;
			this->richTextBox2->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(781, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L" Classes Avalaible";
			// 
			// addschedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1011, 547);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"addschedule";
			this->Text = L"Home and Away Institute";
			this->Load += gcnew System::EventHandler(this, &addschedule::addschedule_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void addschedule_Load(System::Object^  sender, System::EventArgs^  e) {

				
					 dataGridView1->ColumnCount = 6;
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

					if( dataGridView1->RowCount >5)
					{						
						 dataGridView1->AllowUserToAddRows = false;
					};

					StreamReader ^FileStream = gcnew StreamReader("Courses.txt");		
					String ^sLine = "";

					String^ coursecode;
					String^ coursename;
					String^ courselevel;
					String^ coursecredit;
									
					array<String^> ^s = sLine->Split(' ');
					sLine = FileStream->ReadLine();
					
					while (sLine != nullptr)
					{						
												
							s = sLine->Split(' ');

							coursecode = s[0]->ToString();
							coursename = s[1]->ToString();
							courselevel = s[2]->ToString();
							coursecredit = s[3]->ToString();


							srand((unsigned) time(NULL));
							int random = (1 + rand() % 6);

							
							if(Convert::ToInt32(coursecredit)==1 && ((random == 1) |(random == 2)|(random == 3) |(random == 4)|(random == 5)))
							{
								String ^course;

								if (random ==1)
								{
									course=coursecode + " " + coursename + " " + "Lecture" + " " + "Dr.Willaim Bart" ;
									
								}
								else if (random ==2)
								{
									course=coursecode + " " + coursename + " " + "Lecture" + " " + "Mr.James Martin" ;
									
								}
								else if (random ==3)
								{
									course=coursecode + " " + coursename + " " + "Lecture" + " " + "Mrs.Cameron Studart" ;
									
								}
								else if (random ==4)
								{
									course=coursecode + " " + coursename + " " + "Lecture" + " " + "Dr. Simpson Barclay" ;
									
								}
								else if (random ==4)
								{
									course=coursecode + " " + coursename + " " + "Lecture" + " " + "Mr. Jay Wills" ;
									
								}								
								
								richTextBox1->AppendText(course);
								richTextBox1->AppendText("\n");
							}
							else if (Convert::ToInt32(coursecredit)== 2 && ((random == 1) |(random == 2)|(random == 3) |(random == 4)|(random == 5)))
							{
								

								String ^course1;
								String ^course2;

								if (random ==1)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Dr.Willaim Bart";
									course2 =coursecode + " " + coursename + " " + "Tutorial"+ " " + "Mrs.Cameron Studart";
									
								}
								else if (random ==2)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mr.James Martin";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Dr.Willaim Bart";
									
								}
								else if (random ==3)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mrs.Cameron Studart";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Dr. Simpson Barclay";
									
								}
								else if (random ==4)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Dr. Simpson Barclay" ;
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Mr. Jay Wills";
									
								}
								else if (random ==5)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mr. Jay Wills";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Mr.James Martin";
									
								}	

									richTextBox1->AppendText(course1);
									richTextBox1->AppendText("\n");
									richTextBox1->AppendText(course2);
									richTextBox1->AppendText("\n");
								
							}
							else if(Convert::ToInt32(coursecredit)== 3 && ((random == 1) |(random == 2)|(random == 3) |(random == 4)|(random == 5)))
							{
								String ^course1;
								String ^course2;

								if (random ==1)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Dr.Willaim Bart";
									course2 =coursecode + " " + coursename + " " + "Tutorial"+ " " + "Mrs.Cameron Studart";
									
								}
								else if (random ==2)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mr.James Martin";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Dr.Willaim Bart";
									
								}
								else if (random ==3)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mrs.Cameron Studart";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Dr. Simpson Barclay";
									
								}
								else if (random ==4)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Dr. Simpson Barclay" ;
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Mr. Jay Wills";
									
								}
								else if (random ==5)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mr. Jay Wills";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Mr.James Martin";
									
								}	

									richTextBox1->AppendText(course1);
									richTextBox1->AppendText("\n");
									richTextBox1->AppendText(course2);
									richTextBox1->AppendText("\n");
								
							}
							else if(Convert::ToInt32(coursecredit)== 4 && ((random == 1) |(random == 2)|(random == 3) |(random == 4)|(random == 5)))
							{
								String ^course1;
								String ^course2;
								String ^course3;

								if (random ==1)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Dr.Willaim Bart";
									course2 =coursecode + " " + coursename + " " + "Tutorial"+ " " + "Mrs.Cameron Studart";
									course3 =coursecode + " " + coursename + " " + "Lab"+ " " + "Mr. James Studart";
									
								}
								else if (random ==2)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mr.James Martin";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Dr.Willaim Bart";
									course3 =coursecode + " " + coursename + " " + "Lab"+ " " + "Mrs. Munroe Whyte";
									
								}
								else if (random ==3)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mrs.Cameron Studart";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Dr. Simpson Barclay";
									course3 =coursecode + " " + coursename + " " + "Lab"+ " " + "Mr. James Studart";
									
								}
								else if (random ==4)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Dr. Simpson Barclay" ;
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Mr. Jay Wills";
									course3 =coursecode + " " + coursename + " " + "Lab"+ " " + "Mrs. Munroe Whyte";
									
								}
								else if (random ==4)
								{
									course1 =coursecode + " " + coursename + " " + "Lecture" + " " + "Mr. Jay Wills";
									course2 =coursecode + " " + coursename + " " + "Tutorial" + " " + "Mr.James Martin";
									course3 =coursecode + " " + coursename + " " + "Lab"+ " " + "Mr. James Studart";
									
								}	
															
								richTextBox1->AppendText(course1);
								richTextBox1->AppendText("\n");
								richTextBox1->AppendText(course2);
								richTextBox1->AppendText("\n");
								richTextBox1->AppendText(course3);
								richTextBox1->AppendText("\n");
								

							}							
						
						sLine = FileStream->ReadLine();
					}
					
					FileStream->Close();
			

					ToolTip^ toolTip1 = gcnew ToolTip;

				   // Set up the delays for the ToolTip.
				   toolTip1->AutoPopDelay = 5000;
				   toolTip1->InitialDelay = 1000;
				   toolTip1->ReshowDelay = 500;
				   // Force the ToolTip text to be displayed whether or not the form is active.
				   toolTip1->ShowAlways = true;

				   // Set up the ToolTip text for the Button and Checkbox.
				   toolTip1->SetToolTip( this->richTextBox1, "Drag and drop course into the correct location." );		


				   richTextBox2->AppendText("Monday Classes:: Lectures->Lt10A, Lt9A, Lt10B...Tutotials->5A3, 5D6, 5G12...Pratical->Lab A, Lab B, Lab C");
				   richTextBox2->AppendText("\n\n");
				   richTextBox2->AppendText("Tuesday Classes:: Lectures->Lt11A, Lt19A, Lt12C...Tutotials->6A3, 6D6, 6G12...Pratical->Lab A, Lab B, Lab C");
				   richTextBox2->AppendText("\n\n");
				   richTextBox2->AppendText("Wednesday Classes:: Lectures->Lt1A, Lt2A, Lt3B...Tutotials->7A3, 7D6, 7G12...Pratical->Lab A, Lab B, Lab C");
				   richTextBox2->AppendText("\n\n");
				   richTextBox2->AppendText("Thursday Classes:: Lectures->Lt13A, Lt14A, Lt13B...Tutotials->3A3, 3D6, 3G12...Pratical->Lab A, Lab B, Lab C");
				   richTextBox2->AppendText("\n\n");
				   richTextBox2->AppendText("Firday Classes:: Lectures->Lt15A, Lt6A, Lt6B...Tutotials->8A3, 8D6, 8G12...Pratical->Lab A, Lab B, Lab C");
				   richTextBox2->AppendText("\n\n");
										
			 }
	
private: System::Void dataGridView1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
		 {
			 e->Effect = DragDropEffects::Copy;
		 }

private: System::Void dataGridView1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
		 {
			dataGridView1[1, 3]->ReadOnly = true;
			dataGridView1[2, 3]->ReadOnly = true;
			dataGridView1[3, 3]->ReadOnly = true;
			dataGridView1[4, 3]->ReadOnly = true;
			dataGridView1[5, 3]->ReadOnly = true;

			

			 Point p = this->dataGridView1->PointToClient(Point(e->X, e->Y));
			 DataGridView::HitTestInfo ^info = this->dataGridView1->HitTest(p.X, p.Y);
			 if (info->RowIndex != -1 && info->ColumnIndex != -1)
			 {
			  Object ^value = safe_cast<Object^>(e->Data->GetData(String::typeid));
			  this->dataGridView1->Rows[info->RowIndex]->Cells[info->ColumnIndex]->Value = value;
			 }

			 
			 		
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

					

									
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

					
			
			}



};


}
