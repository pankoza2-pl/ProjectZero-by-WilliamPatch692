#include <Windows.h>

DWORD Effect1() {
	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	while (true)
	{
		HDC hdc = GetDC(NULL);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		PatBlt(hdc, 0, 0, x, y, PATINVERT);
		DeleteObject(brush);
		Sleep(10);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD Effect2() {
	int signX = 1;
	int signY = 1;
	int incrementor = 10;
	int x = 10;
	int y = 10;
	while (true)
	{
		HDC hdc = GetDC(NULL);
		x += incrementor * signX;
		y += incrementor * signY;
		int top_x = 0 + x;
		int top_y = 0 + y;
		int bottom_x = 96 + x;
		int bottom_y = 96 + y;
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		RoundRect(hdc, top_x, top_y, bottom_x, bottom_y, rand() % 128, rand() % 128);
		if (y >= GetSystemMetrics(SM_CYSCREEN))
		{
			signY = -1;
		}

		if (x >= GetSystemMetrics(SM_CXSCREEN))
		{
			signX = -1;
		}

		if (y == 0)
		{
			signY = 1;
		}

		if (x == 0)
		{
			signX = 1;
		}
		DeleteObject(brush);
		Sleep(10);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD Effect3() {
	int w = GetSystemMetrics(SM_CXSCREEN);
	int h = GetSystemMetrics(SM_CYSCREEN);
	while (true)
	{
		HDC hdc = GetDC(NULL);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_APPSTARTING));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_ARROW));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_CROSS));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_HAND));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_HELP));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_IBEAM));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_ICON));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_MANAGE_LINK));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_NO));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_SIZE));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_SIZEALL));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_SIZENESW));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_SIZENS));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_SIZENWSE));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_SIZEWE));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_UPARROW));
		Sleep(4);
		DrawIcon(hdc, rand() % w, rand() % h, LoadCursorA(NULL, (LPCSTR)IDC_WAIT));
		Sleep(4);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD Effect4() {
	int sw = GetSystemMetrics(SM_CXSCREEN);
	int sh = GetSystemMetrics(SM_CYSCREEN);
	while (true)
	{
		HDC hdc = GetDC(0);
		StretchBlt(hdc, 0, 0, rand() % sw, rand() % sh, hdc, 0, 0, sw, sh, SRCCOPY);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
		Sleep(20);
	}
}

DWORD Effect5() {
	while (true) {
		HDC hdc = GetDC(NULL);
		for (int i = 0; i < 1900; i++) {
			BitBlt(hdc, i, i, i, i, hdc, 100, 100, NOTSRCERASE);
			DeleteObject(&i);
		}
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD Effect6() {
	int sw = GetSystemMetrics(SM_CXSCREEN);
	int sh = GetSystemMetrics(SM_CYSCREEN);
	while (true) {
		HDC hdc = GetDC(0);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		SetStretchBltMode(hdc, HALFTONE);
		StretchBlt(hdc, 1, 1, sw - 2, sh - 2, hdc, sw, sh, -sw, -sh, SRCCOPY);
		DeleteObject(brush);
		Sleep(25);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD Effect7() {
	int signX = 1;
	int signY = 1;
	int incrementor = 10;
	int x = 10;
	int y = 10;
	while (true)
	{
		HDC hdc = GetDC(NULL);
		x += incrementor * signX;
		y += incrementor * signY;
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		DrawIcon(hdc, x, y, LoadCursorA(NULL, (LPCSTR)IDC_ARROW));
		if (y >= GetSystemMetrics(SM_CYSCREEN))
		{
			signY = -1;
		}

		if (x >= GetSystemMetrics(SM_CXSCREEN))
		{
			signX = -1;
		}

		if (y == 0)
		{
			signY = 1;
		}

		if (x == 0)
		{
			signX = 1;
		}
		DeleteObject(brush);
		Sleep(10);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD Effect8() {
	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	while (true)
	{
		HDC hdc = GetDC(NULL);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIconA(NULL, (LPCSTR)IDI_APPLICATION));
		Sleep(4);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIconA(NULL, (LPCSTR)IDI_ASTERISK));
		Sleep(4);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIconA(NULL, (LPCSTR)IDI_EXCLAMATION));
		Sleep(4);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIconA(NULL, (LPCSTR)IDI_INFORMATION));
		Sleep(4);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIconA(NULL, (LPCSTR)IDI_QUESTION));
		Sleep(4);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIconA(NULL, (LPCSTR)IDI_SHIELD));
		Sleep(4);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

DWORD BeepAudio() {
	while (true)
	{
		Beep(500, 1000);
		Beep(250, 1000);
		Beep(600, 1000);
		Beep(1250, 1000);
		Beep(1750, 1000);
		Beep(350, 1000);
		Beep(700, 1000);
		Beep(1000, 1000);
		Beep(1800, 1000);
		Beep(1100, 1000);
		Beep(2000, 1000);
		Beep(200, 1000);
		Beep(400, 1000);
		Beep(3000, 1000);
		Beep(100, 1000);
		Beep(1800, 1000);
		Beep(1600, 1000);
		Beep(2400, 1000);
		Beep(3200, 1000);
		Beep(2500, 1000);
		Beep(2250, 1000);
		Beep(2750, 1000);
		Beep(800, 1000);
		Beep(3500, 1000);
		Beep(3650, 1000);
		Beep(2800, 1000);
		Beep(4000, 1000);
		Beep(900, 1000);
		Beep(1650, 1000);
		Beep(3900, 1000);
		Beep(1375, 1000);
		Beep(3300, 1000);
		Beep(2300, 1000);
		Beep(320, 1000);
		Beep(750, 1000);
		Beep(100, 1000);
		Beep(200, 1000);
		Beep(300, 1000);
		Beep(400, 1000);
		Beep(500, 1000);
		Beep(600, 1000);
		Beep(700, 1000);
		Beep(800, 1000);
		Beep(900, 1000);
		Beep(1000, 1000);
	}
	return 0;
}

DWORD Effect9() {
	int w = GetSystemMetrics(SM_CXSCREEN);
	int h = GetSystemMetrics(SM_CYSCREEN);
	int signX = 1;
	int signY = 1;
	int incrementor = 10;
	int x = 10;
	int y = 10;
	while (true)
	{
		HDC hdc = GetDC(NULL);
		x += incrementor * signX;
		y += incrementor * signY;
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		BitBlt(hdc, x, y, w, h, hdc, 0, 0, SRCERASE);
		if (y >= GetSystemMetrics(SM_CYSCREEN))
		{
			signY = -1;
		}

		if (x >= GetSystemMetrics(SM_CXSCREEN))
		{
			signX = -1;
		}

		if (y == 0)
		{
			signY = 1;
		}

		if (x == 0)
		{
			signX = 1;
		}
		DeleteObject(brush);
		Sleep(10);
		ReleaseDC(NULL, hdc);
		DeleteDC(hdc);
	}
}

int WinMain(HINSTANCE a, HINSTANCE b, LPSTR c, int d) {
	HANDLE Sound = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)BeepAudio, 0, 0, 0);
	HANDLE Thread1 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect1, 0, 0, 0);
	HANDLE Thread2 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect2, 0, 0, 0);
	HANDLE Thread3 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect3, 0, 0, 0);
	HANDLE Thread4 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect4, 0, 0, 0);
	Sleep(3e4);
	InvalidateRect(NULL, NULL, NULL);
	TerminateThread(Thread1, NULL);
	CloseHandle(Thread1);
	TerminateThread(Thread2, NULL);
	CloseHandle(Thread2);
	TerminateThread(Thread3, NULL);
	CloseHandle(Thread3);
	TerminateThread(Thread4, NULL);
	CloseHandle(Thread4);
	HANDLE Thread5 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect5, 0, 0, 0);
	HANDLE Thread6 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect6, 0, 0, 0);
	HANDLE Thread7 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect7, 0, 0, 0);
	HANDLE Thread8 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect8, 0, 0, 0);
	Sleep(3e4);
	InvalidateRect(NULL, NULL, NULL);
	TerminateThread(Thread5, NULL);
	CloseHandle(Thread5);
	TerminateThread(Thread6, NULL);
	CloseHandle(Thread6);
	TerminateThread(Thread7, NULL);
	CloseHandle(Thread7);
	TerminateThread(Thread8, NULL);
	CloseHandle(Thread8);
	HANDLE Thread9 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Effect9, 0, 0, 0);
	Sleep(3e4);
	exit(0);
}