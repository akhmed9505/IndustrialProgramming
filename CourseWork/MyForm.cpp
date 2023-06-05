#include "MyForm.h"
#include <Windows.h>

#pragma comment(lib, "User32.lib")

using namespace CourseWorkWindow;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    MyForm^ form = gcnew MyForm;
    HWND hwnd = (HWND)form->Handle.ToPointer();

    LONG_PTR styles = GetWindowLongPtr(hwnd, GWL_STYLE);
    styles &= ~(WS_THICKFRAME | WS_MAXIMIZEBOX);
    SetWindowLongPtr(hwnd, GWL_STYLE, styles);
    SetWindowPos(hwnd, NULL, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER | SWP_FRAMECHANGED);

    Application::Run(form);
    return 0;
}
