#pragma once

#include "./gifsave.hpp"
#include "./dcvmu.hpp"

namespace test3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary> 
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class Form1 : public System::Windows::Forms::Form
	{	
	public:
		Form1(void)
		{
			InitializeComponent();
		}
  
	protected:
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}
	private: System::Windows::Forms::OpenFileDialog *  openFileDialog1;



	private: System::Windows::Forms::GroupBox *  groupBox1;








	private: System::Windows::Forms::CheckBox *  checkBoxCopy;
	private: System::Windows::Forms::ListBox *  listBox1;
	private: System::Windows::Forms::Button *  buttonOpen;
	private: System::Windows::Forms::Button *  buttonSave;
	private: System::Windows::Forms::SaveFileDialog *  saveFileDialog1;
	private: System::Windows::Forms::Button *  buttonExtract;
	private: System::Windows::Forms::Label *  labelDate;
	private: System::Windows::Forms::Label *  labelType;
	private: System::Windows::Forms::Label *  labelSize;
	private: System::Windows::Forms::Label *  labelName;


	private: VirtualFile *srcFile;
	private: System::Windows::Forms::MainMenu *  mainMenu1;
	private: System::Windows::Forms::MenuItem *  menuItem1;
	private: System::Windows::Forms::MenuItem *  menuItem2;
	private: System::Windows::Forms::MenuItem *  menuItem3;
	private: System::Windows::Forms::MenuItem *  menuItem4;
	private: System::Windows::Forms::MenuItem *  menuItem5;
	private: System::Windows::Forms::MenuItem *  menuItem6;
	private: System::Windows::Forms::MenuItem *  menuItem7;
	private: System::Windows::Forms::MenuItem *  menuItem8;
	private: System::Windows::Forms::TextBox *  textBoxName;
	private: System::Windows::Forms::DateTimePicker *  dateTimePicker1;
	private: System::Windows::Forms::RadioButton *  radioButtonGame;
	private: System::Windows::Forms::RadioButton *  radioButtonData;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container * components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Resources::ResourceManager *  resources = new System::Resources::ResourceManager(__typeof(test3::Form1));
			this->openFileDialog1 = new System::Windows::Forms::OpenFileDialog();
			this->buttonOpen = new System::Windows::Forms::Button();
			this->groupBox1 = new System::Windows::Forms::GroupBox();
			this->radioButtonGame = new System::Windows::Forms::RadioButton();
			this->radioButtonData = new System::Windows::Forms::RadioButton();
			this->dateTimePicker1 = new System::Windows::Forms::DateTimePicker();
			this->textBoxName = new System::Windows::Forms::TextBox();
			this->labelDate = new System::Windows::Forms::Label();
			this->labelType = new System::Windows::Forms::Label();
			this->labelSize = new System::Windows::Forms::Label();
			this->labelName = new System::Windows::Forms::Label();
			this->checkBoxCopy = new System::Windows::Forms::CheckBox();
			this->listBox1 = new System::Windows::Forms::ListBox();
			this->buttonSave = new System::Windows::Forms::Button();
			this->saveFileDialog1 = new System::Windows::Forms::SaveFileDialog();
			this->buttonExtract = new System::Windows::Forms::Button();
			this->mainMenu1 = new System::Windows::Forms::MainMenu();
			this->menuItem1 = new System::Windows::Forms::MenuItem();
			this->menuItem2 = new System::Windows::Forms::MenuItem();
			this->menuItem3 = new System::Windows::Forms::MenuItem();
			this->menuItem4 = new System::Windows::Forms::MenuItem();
			this->menuItem5 = new System::Windows::Forms::MenuItem();
			this->menuItem6 = new System::Windows::Forms::MenuItem();
			this->menuItem7 = new System::Windows::Forms::MenuItem();
			this->menuItem8 = new System::Windows::Forms::MenuItem();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = S"VMI files (*.vmi)|*.vmi|DCI files (*.dci)|*.dci|All files (*.*)|*.*";
			// 
			// buttonOpen
			// 
			this->buttonOpen->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"buttonOpen.Image")));
			this->buttonOpen->Location = System::Drawing::Point(8, 8);
			this->buttonOpen->Name = S"buttonOpen";
			this->buttonOpen->Size = System::Drawing::Size(75, 64);
			this->buttonOpen->TabIndex = 0;
			this->buttonOpen->Text = S"Open";
			this->buttonOpen->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonOpen->Click += new System::EventHandler(this, button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonGame);
			this->groupBox1->Controls->Add(this->radioButtonData);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBoxName);
			this->groupBox1->Controls->Add(this->labelDate);
			this->groupBox1->Controls->Add(this->labelType);
			this->groupBox1->Controls->Add(this->labelSize);
			this->groupBox1->Controls->Add(this->labelName);
			this->groupBox1->Controls->Add(this->checkBoxCopy);
			this->groupBox1->Location = System::Drawing::Point(8, 80);
			this->groupBox1->Name = S"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(256, 144);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = S" File Details ";
			// 
			// radioButtonGame
			// 
			this->radioButtonGame->Location = System::Drawing::Point(160, 64);
			this->radioButtonGame->Name = S"radioButtonGame";
			this->radioButtonGame->Size = System::Drawing::Size(80, 24);
			this->radioButtonGame->TabIndex = 7;
			this->radioButtonGame->Text = S"Game File";
			this->radioButtonGame->CheckedChanged += new System::EventHandler(this, radioButtonGame_CheckedChanged);
			// 
			// radioButtonData
			// 
			this->radioButtonData->Location = System::Drawing::Point(72, 64);
			this->radioButtonData->Name = S"radioButtonData";
			this->radioButtonData->TabIndex = 8;
			this->radioButtonData->Text = S"Data File";
			this->radioButtonData->CheckedChanged += new System::EventHandler(this, radioButtonData_CheckedChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = S"dd MMM yyyy - HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(72, 88);
			this->dateTimePicker1->Name = S"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(152, 20);
			this->dateTimePicker1->TabIndex = 6;
			this->dateTimePicker1->ValueChanged += new System::EventHandler(this, dateTimePicker1_ValueChanged);
			// 
			// textBoxName
			// 
			this->textBoxName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxName->Location = System::Drawing::Point(72, 16);
			this->textBoxName->MaxLength = 12;
			this->textBoxName->Name = S"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(152, 20);
			this->textBoxName->TabIndex = 5;
			this->textBoxName->Text = S"";
			this->textBoxName->TextChanged += new System::EventHandler(this, textBoxName_TextChanged);
			// 
			// labelDate
			// 
			this->labelDate->Location = System::Drawing::Point(16, 88);
			this->labelDate->Name = S"labelDate";
			this->labelDate->Size = System::Drawing::Size(48, 23);
			this->labelDate->TabIndex = 3;
			this->labelDate->Text = S"Date:";
			// 
			// labelType
			// 
			this->labelType->Location = System::Drawing::Point(16, 64);
			this->labelType->Name = S"labelType";
			this->labelType->Size = System::Drawing::Size(40, 23);
			this->labelType->TabIndex = 2;
			this->labelType->Text = S"Type:";
			// 
			// labelSize
			// 
			this->labelSize->Location = System::Drawing::Point(16, 40);
			this->labelSize->Name = S"labelSize";
			this->labelSize->Size = System::Drawing::Size(208, 23);
			this->labelSize->TabIndex = 1;
			this->labelSize->Text = S"Size:";
			// 
			// labelName
			// 
			this->labelName->Location = System::Drawing::Point(16, 16);
			this->labelName->Name = S"labelName";
			this->labelName->Size = System::Drawing::Size(48, 23);
			this->labelName->TabIndex = 0;
			this->labelName->Text = S"Name:";
			// 
			// checkBoxCopy
			// 
			this->checkBoxCopy->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBoxCopy->Location = System::Drawing::Point(16, 112);
			this->checkBoxCopy->Name = S"checkBoxCopy";
			this->checkBoxCopy->TabIndex = 4;
			this->checkBoxCopy->Text = S"Copy Protected:";
			this->checkBoxCopy->CheckedChanged += new System::EventHandler(this, checkBoxCopy_CheckedChanged);
			// 
			// listBox1
			// 
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(8, 232);
			this->listBox1->Name = S"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox1->Size = System::Drawing::Size(256, 56);
			this->listBox1->TabIndex = 3;
			// 
			// buttonSave
			// 
			this->buttonSave->Enabled = false;
			this->buttonSave->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"buttonSave.Image")));
			this->buttonSave->Location = System::Drawing::Point(96, 8);
			this->buttonSave->Name = S"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 64);
			this->buttonSave->TabIndex = 4;
			this->buttonSave->Text = S"Save";
			this->buttonSave->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonSave->Click += new System::EventHandler(this, buttonSave_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = S"VMI files (*.vmi)|*.vmi|DCI files (*.dci)|*.dci";
			// 
			// buttonExtract
			// 
			this->buttonExtract->Enabled = false;
			this->buttonExtract->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"buttonExtract.Image")));
			this->buttonExtract->Location = System::Drawing::Point(184, 8);
			this->buttonExtract->Name = S"buttonExtract";
			this->buttonExtract->Size = System::Drawing::Size(75, 64);
			this->buttonExtract->TabIndex = 5;
			this->buttonExtract->Text = S"Extract Icon";
			this->buttonExtract->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonExtract->Click += new System::EventHandler(this, buttonExtract_Click);
			// 
			// mainMenu1
			// 
			System::Windows::Forms::MenuItem* __mcTemp__1[] = new System::Windows::Forms::MenuItem*[2];
			__mcTemp__1[0] = this->menuItem1;
			__mcTemp__1[1] = this->menuItem7;
			this->mainMenu1->MenuItems->AddRange(__mcTemp__1);
			// 
			// menuItem1
			// 
			this->menuItem1->Index = 0;
			System::Windows::Forms::MenuItem* __mcTemp__2[] = new System::Windows::Forms::MenuItem*[5];
			__mcTemp__2[0] = this->menuItem2;
			__mcTemp__2[1] = this->menuItem3;
			__mcTemp__2[2] = this->menuItem4;
			__mcTemp__2[3] = this->menuItem5;
			__mcTemp__2[4] = this->menuItem6;
			this->menuItem1->MenuItems->AddRange(__mcTemp__2);
			this->menuItem1->Text = S"&Menu";
			// 
			// menuItem2
			// 
			this->menuItem2->Index = 0;
			this->menuItem2->Text = S"&Open";
			this->menuItem2->Click += new System::EventHandler(this, menuItem2_Click);
			// 
			// menuItem3
			// 
			this->menuItem3->Enabled = false;
			this->menuItem3->Index = 1;
			this->menuItem3->Text = S"&Save";
			this->menuItem3->Click += new System::EventHandler(this, menuItem3_Click);
			// 
			// menuItem4
			// 
			this->menuItem4->Enabled = false;
			this->menuItem4->Index = 2;
			this->menuItem4->Text = S"&Extract Icon";
			this->menuItem4->Click += new System::EventHandler(this, menuItem4_Click);
			// 
			// menuItem5
			// 
			this->menuItem5->Index = 3;
			this->menuItem5->Text = S"-";
			// 
			// menuItem6
			// 
			this->menuItem6->Index = 4;
			this->menuItem6->Text = S"E&xit";
			this->menuItem6->Click += new System::EventHandler(this, menuItem6_Click);
			// 
			// menuItem7
			// 
			this->menuItem7->Index = 1;
			System::Windows::Forms::MenuItem* __mcTemp__3[] = new System::Windows::Forms::MenuItem*[1];
			__mcTemp__3[0] = this->menuItem8;
			this->menuItem7->MenuItems->AddRange(__mcTemp__3);
			this->menuItem7->Text = S"&Help";
			// 
			// menuItem8
			// 
			this->menuItem8->Index = 0;
			this->menuItem8->Text = S"&About";
			this->menuItem8->Click += new System::EventHandler(this, menuItem8_Click);
			// 
			// Form1
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(274, 291);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonExtract);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->buttonOpen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (__try_cast<System::Drawing::Icon *  >(resources->GetObject(S"$this.Icon")));
			this->MaximizeBox = false;
			this->Menu = this->mainMenu1;
			this->Name = S"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"DC Save Converter";
			this->Load += new System::EventHandler(this, Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}	


private: System::Void button1_Click(System::Object *  sender, System::EventArgs *  e) {
	char aux[256];
	int k;

	if (openFileDialog1->ShowDialog() == DialogResult::OK) {
		k=string2char(aux, openFileDialog1->get_FileName());
		if (srcFile != NULL) {
			delete srcFile;
		}
		if (openFileDialog1->get_FileName()->ToUpper()->EndsWith(".DCI")) {
			srcFile=new DCIFile(aux);
		} else if (openFileDialog1->get_FileName()->ToUpper()->EndsWith(".VMI")) {
			srcFile=new VMIFile(aux, "", "", "");
		} else {
			srcFile=new RAWFile(aux);
		}
		aux[k]=0;
		srcFile->setPath(aux);
		listBox1->get_Items()->Clear();
		if (srcFile->readData() != 0) {
			sprintf(aux, "Source file %s could not be readed.\n", srcFile->getFileName());
			MessageBox::Show(NULL, aux, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;//(-1);
		}
		sprintf(aux, "Reading %s ... OK!", srcFile->getFileName());
		listBox1->get_Items()->Add(new String(aux));
		this->printFileInfo(srcFile->getDCFile());
		this->buttonSave->set_Enabled(true);
		this->buttonExtract->set_Enabled(true);
		this->menuItem3->set_Enabled(true);
		this->menuItem4->set_Enabled(true);
	}
}

private: int writeIconGif(char *fn, VirtualFile *src) {
	uint8 hdr[13]={0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0x20, 0x00, 0x20, 0x00, 0xB3, 0x00, 0x00};
	uint8 ani[19]={0x21, 0xF9, 0x04, 0x00, 0x33, 0x00, 0x07, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x04};
	uint8 web[19]={0x21, 0xFF, 0x0B, 0x4E, 0x45, 0x54, 0x53, 0x43, 0x41, 0x50, 0x45, 0x32, 0x2E, 0x30, 0x03, 0x01, 0x00, 0x00, 0x00};
	uint8 x, y, z;
	uint8 tmp[1024];
	uint8 *icon;
	uint16 *pal;
	file_t f;
	GifSave *gif;
	DreamcastFile *df;

	char aux[256];

	df=src->getDCFile();
	if (!(f=fs_open(fn, "wb"))) {
		sprintf(aux, "Destination file %s could not be written.\n", fn);
		MessageBox::Show(NULL, aux, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return(-2);
	}
	fs_write(f, hdr, 13);
	pal=df->getIconPalette();
	for (x=0; x<16; x++) {
		tmp[x*3]=((pal[x] & 0x0f00) >> 8) *17;
		tmp[x*3 + 1]=((pal[x] & 0x00f0) >> 4) *17;
		tmp[x*3 + 2]=(pal[x] & 0x000f) *17;
	}
	fs_write(f, tmp, 48);
	fs_write(f, web, 19);
	ani[4]=df->getAnimationSpeed()*4;
	gif=new GifSave();
	for (z=0; z<df->getIcons(); z++) {	
		icon=df->getIconBitmap(z);
		fs_write(f, ani, 19);
		for (y=0; y<32; y++) {
			for (x=0; x<32; x+=2) {
				tmp[y*32 + x]=(icon[y*16 + x/2] & 0xf0) >> 4;
				tmp[y*32 + x+1]=(icon[y*16 + x/2] & 0x0f);
			}
		}
		gif->LZW_Compress(4, tmp, 1024, f);
		fs_write(f, "\0\0", 2);
	}
	delete gif;
	fs_write(f, ";", 1);
	fs_close(f);
	sprintf(aux, "Writing %s ... OK!", fn);
	listBox1->get_Items()->Add(new String(aux));
	return(0);
}

private: int string2char(char *c, String *s) {
	int rv=0;

	for (int i=0; i<s->get_Length(); i++) {		
		c[i]=s->get_Chars(i);
		if (c[i] == '\\') rv=i+1;
	}
	c[i]=0;
	return(rv);
}

private: char* removeExt(char *fn) {
	int i=-1;

	do {
		i++;
		if (fn[i] == '.') fn[i]=0;
	} while (fn[i] != 0);
	return(fn);
}

private: void printFileInfo(DreamcastFile *df) {
	vmu_timestamp_t ts;
	char aux[128];

	ts=df->getTime();
	textBoxName->set_Text(df->getName());
	sprintf(aux, "Size:          %d bytes\n", df->getSize());
	labelSize->set_Text(aux);
	radioButtonGame->set_Checked(df->isGameFile());
	radioButtonData->set_Checked(!df->isGameFile());
	sprintf(aux, "%02x%02x-%02x-%02x %02x:%02x:%02x\n", ts.cent, ts.year, ts.month, ts.day, ts.hour, ts.min, ts.sec);
	try {
		dateTimePicker1->set_Value(DateTime::Parse(aux));
	} catch (Exception *e) {		
		dateTimePicker1->set_Value(DateTime::Now);
		dateTimePicker1_ValueChanged(NULL, NULL);
		listBox1->get_Items()->Add(e->get_Message());
		listBox1->get_Items()->Add(S"Warning: Original Date/Time data was not correct. Using todays date/time.");
	}
	checkBoxCopy->set_Checked(df->isCopyProtected());
}

private: System::Void buttonSave_Click(System::Object *  sender, System::EventArgs *  e) {
	VirtualFile *dstFile;
	char aux[256];
	char resname[256];
	int k;

	saveFileDialog1->set_Filter(S"VMI files (*.vmi)|*.vmi|DCI files (*.dci)|*.dci");
	strcpy(aux, removeExt(srcFile->getFileName())+strlen(srcFile->getPath()));
	saveFileDialog1->set_FileName(aux);
	if ((saveFileDialog1->ShowDialog() == DialogResult::OK) && (srcFile != NULL)) {
		k=string2char(aux, saveFileDialog1->get_FileName());
		if (saveFileDialog1->get_FileName()->ToUpper()->EndsWith(".DCI")) {
			dstFile=new DCIFile(aux);
		} else {
			removeExt(strcpy(resname, aux+k));
			dstFile=new VMIFile(aux, "Saved with DC Save Converter", "El Bucanero www.bucanero.com.ar", resname);
		}
		aux[k]=0;
		dstFile->setPath(aux);
		dstFile->setDCFile(srcFile->getDCFile());
		if (dstFile->writeData() != 0) {
			sprintf(aux, "Destination file %s could not be written.\n", dstFile->getFileName());
			MessageBox::Show(NULL, aux, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;//(-1);
		}
		sprintf(aux, "Writing %s ... OK!", dstFile->getFileName());
		listBox1->get_Items()->Add(new String(aux));
		dstFile->setDCFile(NULL);
		delete dstFile;
	}
}

private: System::Void buttonExtract_Click(System::Object *  sender, System::EventArgs *  e) {
	char aux[256];
	
	saveFileDialog1->set_Filter(S"GIF files (*.gif)|*.gif");
	saveFileDialog1->set_FileName(srcFile->getDCFile()->getName());
	saveFileDialog1->set_DefaultExt(".gif");
	if ((saveFileDialog1->ShowDialog() == DialogResult::OK) && (srcFile != NULL)) {
		string2char(aux, saveFileDialog1->get_FileName());
		this->writeIconGif(aux, srcFile);
	}
}

private: System::Void Form1_Load(System::Object *  sender, System::EventArgs *  e)
		 {
			 srcFile=NULL;
		 }

private: System::Void menuItem2_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->button1_Click(sender, e);
		 }

private: System::Void menuItem3_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->buttonSave_Click(sender, e);
		 }

private: System::Void menuItem4_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->buttonExtract_Click(sender, e);
		 }

private: System::Void menuItem6_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->Close();
		 }

private: System::Void menuItem8_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 MessageBox::Show(NULL, "DC Save Converter v1.0\n\nCoded by El Bucanero\nCopyright 2006 Damián Parrino\n\nhttp://www.bucanero.com.ar/", "About...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		 }

private: System::Void textBoxName_TextChanged(System::Object *  sender, System::EventArgs *  e)
		 {
			 string2char(srcFile->getDCFile()->getName(), textBoxName->get_Text());
		 }

private: System::Void dateTimePicker1_ValueChanged(System::Object *  sender, System::EventArgs *  e)
		 {			
			 vmu_timestamp_t ts;

			 ts.cent=dateTimePicker1->get_Value().get_Year() / 100;
			 ts.year=dateTimePicker1->get_Value().get_Year() % 100;
			 ts.month=dateTimePicker1->get_Value().get_Month();
			 ts.day=dateTimePicker1->get_Value().get_Day();
			 ts.hour=dateTimePicker1->get_Value().get_Hour();
			 ts.min=dateTimePicker1->get_Value().get_Minute();
			 ts.sec=dateTimePicker1->get_Value().get_Second();
			 ts.dow=dateTimePicker1->get_Value().get_DayOfWeek();
			 srcFile->getDCFile()->timeToBCD(&ts);
			 srcFile->getDCFile()->setTime(ts);
		 }

private: System::Void checkBoxCopy_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
		 {
			 srcFile->getDCFile()->setCopyProtected(checkBoxCopy->get_Checked());
		 }

private: System::Void radioButtonData_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
		 {
			 srcFile->getDCFile()->setGameFile(radioButtonGame->get_Checked());
		 }

private: System::Void radioButtonGame_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
		 {
			 srcFile->getDCFile()->setGameFile(radioButtonGame->get_Checked());
		 }

};
}
