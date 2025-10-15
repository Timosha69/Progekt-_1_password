#pragma once

#include <d3d9.h>

namespace gui
{ 
	inline int(a);

	//размер окна
	constexpr int WIND = 500;
	constexpr int HIGHT = 300;

	inline bool exit = true;     //состо€ние окна 
	

	//информацы€ об окне и класс окна* дл€ создани€ win api	
	inline HWND window = nullprt;
	inline WNDCLASSEXA windowClass = {};

	//позицы€ окна 
	inline POINTS position = {};
	
	//direct x 
	inline PDIRECT3D9 d3d = nullprt;
	inline LPDIRECT3DDEVICE9 device = nullprt;
	inline D3DPRESENT_PARAMETERS presentParametrs = {};

	//функцыии дл€ создани€ и уничтожени€ окна 
	void CreateHWindow(                                  // принимат им€ окна и класса
		const char* windowName,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;                         // уничтожкние окнва 

	// обработка создание и уничтожение окна 
	bool CreateDevace() noexcept;
	void ResetDevace() noexcept;
	void DestroyDevace() noexcept;

	//создание и уничтожение imgui 
	void CreatImgui() noexcept;
	void DestroyImgui() noexcept;

	//отрисовка 
	void BiginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;

}
