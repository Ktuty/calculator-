#include "MyForm.h"
//#include "iostream"

using namespace System;
using namespace System::Windows::Forms;
//using namespace std;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MishaCalik::MyForm form;
	Application::Run(% form);
}