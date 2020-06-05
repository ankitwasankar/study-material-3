#include <windows.h>
#include <windowsx.h>
#include "main.h"
#include "dialogs.h"
#include "resource.h"

BOOL WINAPI Main_Proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
        /* BEGIN MESSAGE CRACK */
        HANDLE_MSG(hWnd, WM_INITDIALOG, Main_OnInitDialog);
        HANDLE_MSG(hWnd, WM_COMMAND, Main_OnCommand);
        HANDLE_MSG(hWnd,WM_CLOSE, Main_OnClose);
        /* END MESSAGE CRACK */
    }

    return FALSE;
}

/*******************************************************************************
*  Main_OnInitDialog
*/
BOOL Main_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam)
{
    /* Set app icons */
    HICON hIcon = LoadIcon((HINSTANCE) GetWindowLong(hwnd, GWL_HINSTANCE) ,MAKEINTRESOURCE(IDI_ICONAPP));
    SendMessage(hwnd, WM_SETICON, TRUE,  (LPARAM)hIcon);
    SendMessage(hwnd, WM_SETICON, FALSE, (LPARAM)hIcon);
    
    /*
    * Add initializing code here
    */
    
    return TRUE;
}

/*******************************************************************************
*  Main_OnCommand
*/
void Main_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
    switch(id)
    {
        case IDC_OK:
            MessageBox(hwnd,TEXT("You clicked OK!"),TEXT("dialog"),MB_OK);
            EndDialog(hwnd, id);
        break;
        case IDC_CANCEL:
            MessageBox(hwnd,TEXT("You clicked Cancel!"),TEXT("dialog"),MB_OK);
            EndDialog(hwnd, id);
        break;
        default:break;
    }

}

/*******************************************************************************
*  Main_OnClose
*/
void Main_OnClose(HWND hwnd)
{
    EndDialog(hwnd, 0);
}
