#include "gui.h"

#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_dx10.h"
#include "../imgui/imgui_impl_win32.h"

//импортирует imgui для реализацыии (обработчик оконного процесора)
extern	IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(
	HWND window,
	UINT message,
	WPARAM wideParameter,
	LPARAM longParmeter
);

// оконый процесор 
long __stdcall WindowProcess(
	HWND window,
	UINT message,
	WPARAM wideParameter,
	LPARAM longParameter
)
{
	if (ImGui_ImplWin32_WndProcHandler(window, message, wideParameter, longParameter))         // обращение к обработчику для обработки оконых даных  
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

//функцыии для создания и уничтожения окна 
void gui:: CreateHWindow(                                  // принимат имя окна и класса
	const char* windowName,
	const char* className) noexcept
{

}
void gui::DestroyHWindow() noexcept       // уничтожкние окнва 
{

}

// обработка создание и уничтожение окна 
bool  gui::CreateDevace() noexcept
{

}

void  gui::ResetDevace() noexcept
{

}

void gui::DestroyDevace() noexcept
{

}

//создание и уничтожение imgui 
void gui::CreatImgui() noexcept
{

}

void gui::DestroyImgui() noexcept
{


}

//отрисовка 
void gui::BiginRender() noexcept
{

}

void gui::EndRender() noexcept
{

}

void gui::Render() noexcept
{

}