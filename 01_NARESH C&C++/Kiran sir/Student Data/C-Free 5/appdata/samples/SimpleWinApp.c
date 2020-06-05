#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);   /* Declare Windows procedure */
char szClassName[ ] = "WindowsApp";   /* Class Name */

int WINAPI WinMain(HINSTANCE hThisInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpszArgument,
                   int nFunsterStil)

{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The WNDCLASSEX structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WndProc;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof(WNDCLASSEX);
    wincl.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor(NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL; /* No menu */
    wincl.cbClsExtra = 0;
    wincl.cbWndExtra = 0;
    wincl.hbrBackground = (HBRUSH) GetStockObject(WHITE_BRUSH);

    /* Register the window class, if fail quit the program */
    if(!RegisterClassEx(&wincl)) return 0;

    /* The class is registered, create the window*/
    hwnd = CreateWindowEx(
           0,
           szClassName,
           "Simple Windows App",
           WS_OVERLAPPEDWINDOW,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           HWND_DESKTOP,
           NULL,
           hThisInstance,
           NULL
           );

    /* Make the window visible on the screen */
    ShowWindow(hwnd, nFunsterStil);
    /* Run the message loop. It will run until GetMessage( ) returns 0 */
    while(GetMessage(&messages, NULL, 0, 0))
    {
           TranslateMessage(&messages);
           DispatchMessage(&messages);
    }
    /* The program return-value is 0 - The value that PostQuitMessage( ) gave */
    return messages.wParam;
}

/* This function is called by the Windows function DispatchMessage( ) */
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                    /* handle the messages */
    {
        case WM_DESTROY:
            PostQuitMessage(0);         /* send a WM_QUIT to the message queue */
            break;
        default:                        /* for messages that we don't deal with */
            return DefWindowProc(hwnd, message, wParam, lParam);
    }
    return 0;
}
