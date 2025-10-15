#pragma once

#include <d3d9.h>

namespace gui
{ 
	inline int(a);

	//������ ����
	constexpr int WIND = 500;
	constexpr int HIGHT = 300;

	inline bool exit = true;     //��������� ���� 
	

	//���������� �� ���� � ����� ����* ��� �������� win api	
	inline HWND window = nullprt;
	inline WNDCLASSEXA windowClass = {};

	//������� ���� 
	inline POINTS position = {};
	
	//direct x 
	inline PDIRECT3D9 d3d = nullprt;
	inline LPDIRECT3DDEVICE9 device = nullprt;
	inline D3DPRESENT_PARAMETERS presentParametrs = {};

	//�������� ��� �������� � ����������� ���� 
	void CreateHWindow(                                  // �������� ��� ���� � ������
		const char* windowName,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;                         // ����������� ����� 

	// ��������� �������� � ����������� ���� 
	bool CreateDevace() noexcept;
	void ResetDevace() noexcept;
	void DestroyDevace() noexcept;

	//�������� � ����������� imgui 
	void CreatImgui() noexcept;
	void DestroyImgui() noexcept;

	//��������� 
	void BiginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;

}
