#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab3HansSempe1083920::MyForm form;
	Application::Run(% form);
	return 0;

}
