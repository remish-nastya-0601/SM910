#include "MyForm.h"
#include <Windows.h>


using namespace SM910; /* ������ Project2 �������� �������� ������ ������� */
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
