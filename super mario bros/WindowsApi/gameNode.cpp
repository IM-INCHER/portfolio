#include "stdafx.h"
#include "gameNode.h"

gameNode::gameNode()
{
}


gameNode::~gameNode()
{
}

HRESULT gameNode::init()
{
	_hdc = GetDC( _hWnd );
	_managerInit = false;

	return S_OK;
}

HRESULT gameNode::init( bool managerInit )
{
	_hdc = GetDC( _hWnd );
	_managerInit = managerInit;
	
	if ( _managerInit )
	{
		SetTimer( _hWnd, 1, 10, NULL );

		KEYMANAGER->init();
		IMAGEMANAGER->init();
		TIMEMANAGER->init();
	}

	return S_OK;
}

void gameNode::release()
{
	if ( _managerInit )
	{
		KillTimer( _hWnd, 1 );

		KEYMANAGER->release();
		KEYMANAGER->releaseSingleton();
		IMAGEMANAGER->release();
		IMAGEMANAGER->releaseSingleton();
		TIMEMANAGER->release();
		TIMEMANAGER->releaseSingleton();
	}

	ReleaseDC( _hWnd, _hdc );
}

void gameNode::update()
{
	//InvalidateRect( _hWnd, NULL, false );
}

void gameNode::render()
{
}

LRESULT gameNode::MainProc( HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam )
{
	HDC hdc;
	PAINTSTRUCT ps;

	switch ( iMessage )
	{
	case WM_MOUSEMOVE:
	{
		_ptMouse.x = LOWORD( lParam );
		_ptMouse.y = HIWORD( lParam );
	}
	break;

	case WM_LBUTTONDOWN:
		break;

	case WM_LBUTTONUP:
		break;

	case WM_KEYDOWN:
		switch ( wParam )
		{
		case VK_ESCAPE:
			PostMessage( hWnd, WM_DESTROY, 0, 0 );
			//PostQuitMessage( 0 );
			break;
		}
		break;

	case WM_DESTROY:
		PostQuitMessage( 0 );
		return 0;
	}

	//윈도우 프로시져에서 처리되지 않은 나머지 메시지를 처리해준다
	return ( DefWindowProc( hWnd, iMessage, wParam, lParam ) );
}
