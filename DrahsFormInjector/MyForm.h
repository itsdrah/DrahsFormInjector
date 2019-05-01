#pragma once

#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>

namespace DrahsFormInjector {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnInject;
	private: System::Windows::Forms::TextBox^  txtbFile;
	protected:


	private: System::Windows::Forms::Button^  btnDll;
	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ColumnHeader^  columnProcess;
	private: System::Windows::Forms::Button^  btnRfList;

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
			this->SuspendLayout();
			System::Windows::Forms::ListViewGroup^  listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"Processes", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->btnInject = (gcnew System::Windows::Forms::Button());
			this->txtbFile = (gcnew System::Windows::Forms::TextBox());
			this->btnDll = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnProcess = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnRfList = (gcnew System::Windows::Forms::Button());
			// 
			// btnInject
			// 
			this->btnInject->Enabled = false;
			this->btnInject->Location = System::Drawing::Point(12, 243);
			this->btnInject->Name = L"btnInject";
			this->btnInject->Size = System::Drawing::Size(260, 25);
			this->btnInject->TabIndex = 0;
			this->btnInject->Text = L"Inject";
			this->btnInject->UseVisualStyleBackColor = true;
			this->btnInject->Click += gcnew System::EventHandler(this, &MyForm::btnInject_Click);
			// 
			// txtbFile
			// 
			this->txtbFile->Location = System::Drawing::Point(12, 217);
			this->txtbFile->Name = L"txtbFile";
			this->txtbFile->ReadOnly = true;
			this->txtbFile->Size = System::Drawing::Size(217, 20);
			this->txtbFile->TabIndex = 1;
			// 
			// btnDll
			// 
			this->btnDll->Location = System::Drawing::Point(235, 216);
			this->btnDll->Name = L"btnDll";
			this->btnDll->Size = System::Drawing::Size(37, 20);
			this->btnDll->TabIndex = 2;
			this->btnDll->Text = L"...";
			this->btnDll->UseVisualStyleBackColor = true;
			this->btnDll->Click += gcnew System::EventHandler(this, &MyForm::btnDll_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnProcess });
			listViewGroup1->Header = L"Processes";
			listViewGroup1->Name = L"Processes";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) { listViewGroup1 });
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(12, 38);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->ShowGroups = false;
			this->listView1->Size = System::Drawing::Size(260, 160);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// columnProcess
			// 
			this->columnProcess->Text = L"Process";
			this->columnProcess->Width = 235;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"DLL";
			// 
			// btnRfList
			// 
			this->btnRfList->Location = System::Drawing::Point(12, 9);
			this->btnRfList->Name = L"btnRfList";
			this->btnRfList->Size = System::Drawing::Size(260, 23);
			this->btnRfList->TabIndex = 6;
			this->btnRfList->Text = L"Refresh list...";
			this->btnRfList->UseVisualStyleBackColor = true;
			this->btnRfList->Click += gcnew System::EventHandler(this, &MyForm::btnRfList_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 281);
			this->Controls->Add(this->btnRfList);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btnDll);
			this->Controls->Add(this->txtbFile);
			this->Controls->Add(this->btnInject);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Drah\'s injector";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	public: bool bProcess = false, bFile = false;

	public: System::Void RefreshProcessList()
	{
		listView1->Items->Clear();

		array<Process^>^ processList = Process::GetProcesses();

		for each(Process^ process in processList) 
		{
			ListViewItem^ item = gcnew ListViewItem(process->ProcessName + ".exe");
			item->Tag = process;
			listView1->Items->Add(item);
		}
		listView1->Sorting = SortOrder::Ascending;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		RefreshProcessList();

	}
	private: System::Void btnRfList_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		RefreshProcessList();
	}
	private: System::Void btnDll_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "dll files (*.dll)|*.dll";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			auto file = openFileDialog1->FileName;
			txtbFile->Text = file;
			bFile = true;

			if (bProcess && bFile)
				btnInject->Enabled = true;
		}
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		bProcess = true;

		if (bProcess && bFile)
			btnInject->Enabled = true;
	}

	DWORD dwordProcess(char* processName)
	{
		HANDLE hProcessID = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

		PROCESSENTRY32 processEntry;
		processEntry.dwSize = sizeof(processEntry);

		if (Process32First(hProcessID, &processEntry))
		{
			do
			{
				if (!strcmp(processEntry.szExeFile, processName))
				{
					DWORD dwProcessID = processEntry.th32ProcessID;
					CloseHandle(hProcessID);
					return dwProcessID;
				}
			} while (Process32Next(hProcessID, &processEntry));
		}
	}

	private: System::Void btnInject_Click(System::Object^  sender, System::EventArgs^  e)
	{
		char cDLL[MAX_PATH];
		char processName[128];

		IntPtr ptrToNativeString0 = Marshal::StringToHGlobalAnsi(txtbFile->Text);
		char* convDLL = static_cast<char*>(ptrToNativeString0.ToPointer());
		strcpy_s(cDLL, MAX_PATH, convDLL);

		IntPtr ptrToNativeString1 = Marshal::StringToHGlobalAnsi(listView1->SelectedItems[0]->Text);
		char* convProcName = static_cast<char*>(ptrToNativeString1.ToPointer());
		strcpy_s(processName, 128, convProcName);

		DWORD dwProcess = dwordProcess(processName);

		if (dwProcess == NULL)
			return;

		HANDLE hProcess = OpenProcess(PROCESS_CREATE_THREAD
			| PROCESS_QUERY_INFORMATION
			| PROCESS_VM_READ
			| PROCESS_VM_WRITE
			| PROCESS_VM_OPERATION, FALSE, dwProcess);

		PVOID allocatedMem = VirtualAllocEx(hProcess, NULL, sizeof(cDLL), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

		WriteProcessMemory(hProcess, allocatedMem, cDLL, sizeof(cDLL), NULL);

		LPVOID LoadLib = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");

		CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)LoadLib, allocatedMem, 0, 0);

		CloseHandle(hProcess);
	}
	};
}
