#include <windows.h>

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {#include<iostream>
#include<cstdlib>
using namespace std;
int mian()
{
cout<<"������������ĳɼ�"<<endl;
float a;
cin>>a;
cout<<"�����������ѧ�ɼ�"<<endl;
float b;
cin>>b;
cout<<"���������Ӣ��ɼ�"<<endl;
float c ;
cin>>c;
cout<<"�������������ɼ�"<<endl;
float d;
cin>>d;
cout<<"��������ĵ�·�����ɼ�"<<endl;
float e;
cin>>e;
cout<<"��������ĳ�����Ƴɼ�"<<endl;
float f;
cin>>f;
cout<<"�����������ʷ�ɼ�"<<endl;
float g;
cin>>g;
	a= (a-50)/10;
	b=(b-50) /10;
	c=(c-50) /10;
	d=(d-50) /10;
	e=(e-50) /10;
	f=(f-50) /10;
	g=(g-50) /10;
if(a>4.0)
{cout<<"�ܰ�Ӵ��������ĳɼ�����"<<endl; 
}
else if(a>3.0)
{cout<<"��okӴ��������ĳɼ�����"<<endl; 
}
else if(a>2.0)
{cout<<"������ĳɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź���������ĳɼ�����������Կ����ؿ���������"<<endl;
}




if(b>4.0)
{cout<<"�ܰ�Ӵ�������ѧ�ɼ�����"<<endl; 
}
else if(b>3.0)
{cout<<"��okӴ�������ѧ�ɼ�����"<<endl; 
}
else if(b>2.0)
{cout<<"�����ѧ�ɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź��������ѧ�ɼ�����������Կ����ؿ���������"<<endl; 
}




if(c>4.0)
{cout<<"�ܰ�Ӵ�����Ӣ��ɼ�����"<<endl; 
}
else if(c>3.0)
{cout<<"��okӴ�����Ӣ��ɼ�����"<<endl; 
}
else if(c>2.0)
{cout<<"���Ӣ��ɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź������Ӣ��ɼ�����������Կ����ؿ���������"<<endl; 
}



if(d>4.0)
{cout<<"�ܰ�Ӵ���������ɼ�����"<<endl; 
}
else if(d>3.0)
{cout<<"��okӴ���������ɼ�����"<<endl; 
}
else if(d>2.0)
{cout<<"�������ɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź����������ɼ�����������Կ����ؿ���������"<<endl; 
}



if(e>4.0)
{cout<<"�ܰ�Ӵ����ĵ�·�����ɼ�����"<<endl; 
}
else if(e>3.0)
{cout<<"��okӴ����ĵ�·�����ɼ�����"<<endl; 
}
else if(e>2.0)
{cout<<"��ĵ�·�����ɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź�����ĵ�·�����ɼ�����������Կ����ؿ���������"<<endl; 
}



if(f>4.0)
{cout<<"�ܰ�Ӵ����ĳ�����Ƴɼ�����"<<endl; 
}
else if(f>3.0)
{cout<<"��okӴ����ĳ�����Ƴɼ�����"<<endl; 
}
else if(f>2.0)
{cout<<"��ĳ�����Ƴɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź�����ĳ�����Ƴɼ�����������Կ����ؿ���������"<<endl; 
}



if(g>4.0)
{cout<<"�ܰ�Ӵ�������ʷ�ɼ�����"<<endl; 
}
else if(g>3.0)
{cout<<"��okӴ�������ʷ�ɼ�����"<<endl; 
}
else if(g>2.0)
{cout<<"�����ʷ�ɼ��еȣ�ҪŬ����Ӵ��"<<endl;
}
else
{cout<<"���ź��������ʷ�ɼ�����������Կ����ؿ���������"<<endl; 
}
system("pause");
return 0;
}
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width */
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
