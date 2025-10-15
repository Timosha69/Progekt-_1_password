#include "gui.h"

#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_dx10.h"
#include "../imgui/imgui_impl_win32.h"

//����������� imgui ��� ����������� (���������� �������� ���������)
extern	IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(
	HWND window,
	UINT message,
	WPARAM wideParameter,
	LPARAM longParmeter
);

// ������ �������� 
long __stdcall WindowProcess(
	HWND window,
	UINT message,
	WPARAM wideParameter,
	LPARAM longParameter
)
{
	if (ImGui_ImplWin32_WndProcHandler(window, message, wideParameter, longParameter))         // ��������� � ����������� ��� ��������� ������ �����  
		return true;

	switch (message)
	{
	case WM_SIZE: 
	{
		if (gui::device && wideParameter != SIZE_MINIMIZED) 
		{
			gui::presentParametrs.BackBufferWidth = LOWORD(longParameter);
			gui::presentParametrs.BackBufferWidth = HIWORD(longParameter);
			gui::ResetDevace();
		}
	}return 0;
		
	}

	return DefWindowProcW(window, message, wideParameter, longParameter); 
}

//�������� ��� �������� � ����������� ���� 
void gui:: CreateHWindow(                                  // �������� ��� ���� � ������
	const char* windowName,
	const char* className) noexcept
{

}
void gui::DestroyHWindow() noexcept       // ����������� ����� 
{

}

// ��������� �������� � ����������� ���� 
bool  gui::CreateDevace() noexcept
{

}

void  gui::ResetDevace() noexcept
{

}

void gui::DestroyDevace() noexcept
{

}

//�������� � ����������� imgui 
void gui::CreatImgui() noexcept
{

}

void gui::DestroyImgui() noexcept
{


}

//��������� 
void gui::BiginRender() noexcept
{

}

void gui::EndRender() noexcept
{

}

void gui::Render() noexcept
{

}