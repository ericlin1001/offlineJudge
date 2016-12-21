#include <windows.h>

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {#include<iostream>
#include<cstdlib>
using namespace std;
int mian()
{
cout<<"请输入你的语文成绩"<<endl;
float a;
cin>>a;
cout<<"请输入你的数学成绩"<<endl;
float b;
cin>>b;
cout<<"请输入你的英语成绩"<<endl;
float c ;
cin>>c;
cout<<"请输入你的物理成绩"<<endl;
float d;
cin>>d;
cout<<"请输入你的电路基础成绩"<<endl;
float e;
cin>>e;
cout<<"请输入你的程序设计成绩"<<endl;
float f;
cin>>f;
cout<<"请输入你的历史成绩"<<endl;
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
{cout<<"很棒哟！你的语文成绩优秀"<<endl; 
}
else if(a>3.0)
{cout<<"还ok哟！你的语文成绩良好"<<endl; 
}
else if(a>2.0)
{cout<<"你的语文成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的语文成绩不及格，你可以考虑重考或者重修"<<endl;
}




if(b>4.0)
{cout<<"很棒哟！你的数学成绩优秀"<<endl; 
}
else if(b>3.0)
{cout<<"还ok哟！你的数学成绩良好"<<endl; 
}
else if(b>2.0)
{cout<<"你的数学成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的数学成绩不及格，你可以考虑重考或者重修"<<endl; 
}




if(c>4.0)
{cout<<"很棒哟！你的英语成绩优秀"<<endl; 
}
else if(c>3.0)
{cout<<"还ok哟！你的英语成绩良好"<<endl; 
}
else if(c>2.0)
{cout<<"你的英语成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的英语成绩不及格，你可以考虑重考或者重修"<<endl; 
}



if(d>4.0)
{cout<<"很棒哟！你的物理成绩优秀"<<endl; 
}
else if(d>3.0)
{cout<<"还ok哟！你的物理成绩良好"<<endl; 
}
else if(d>2.0)
{cout<<"你的物理成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的物理成绩不及格，你可以考虑重考或者重修"<<endl; 
}



if(e>4.0)
{cout<<"很棒哟！你的电路基础成绩优秀"<<endl; 
}
else if(e>3.0)
{cout<<"还ok哟！你的电路基础成绩良好"<<endl; 
}
else if(e>2.0)
{cout<<"你的电路基础成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的电路基础成绩不及格，你可以考虑重考或者重修"<<endl; 
}



if(f>4.0)
{cout<<"很棒哟！你的程序设计成绩优秀"<<endl; 
}
else if(f>3.0)
{cout<<"还ok哟！你的程序设计成绩良好"<<endl; 
}
else if(f>2.0)
{cout<<"你的程序设计成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的程序设计成绩不及格，你可以考虑重考或者重修"<<endl; 
}



if(g>4.0)
{cout<<"很棒哟！你的历史成绩优秀"<<endl; 
}
else if(g>3.0)
{cout<<"还ok哟！你的历史成绩良好"<<endl; 
}
else if(g>2.0)
{cout<<"你的历史成绩中等，要努力了哟！"<<endl;
}
else
{cout<<"很遗憾，你的历史成绩不及格，你可以考虑重考或者重修"<<endl; 
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
