#include "stdafx.h"
#include "progressBar.h"


progressBar::progressBar()
{
}


progressBar::~progressBar()
{
}

HRESULT progressBar::init( int x, int y, int width, int height )
{
	_x = x;
	_y = y;

	_rcProgress = RectMake( x, y, width, height );

	_frontImg = IMAGEMANAGER->addImage( "frontImage", "image/hpBarTop.BMP", x, y, width, height, true, RGB( 255, 0, 255 ) );
	_backImg = IMAGEMANAGER->addImage( "backImage", "image/hpBarBottom.BMP", x, y, width, height, true, RGB( 255, 0, 255 ) );

	_width = _frontImg->getWidth();

	return S_OK;
}

void progressBar::release()
{
}

void progressBar::update()
{
	_rcProgress = RectMakeCenter( _x, _y, _backImg->getWidth(), _backImg->getHeight() );
}

void progressBar::render()
{
	_backImg->render( getMemDC(), 
		_rcProgress.left + _backImg->getWidth() / 2,	//그릴 위치 X
		_y + _backImg->getHeight() / 2,					//그릴 위치 Y
		0, 0,											//sourX, Y
		_backImg->getWidth(), _backImg->getHeight() );	//sourWidth, Height

	_frontImg->render( getMemDC(),
		_rcProgress.left + _frontImg->getWidth() / 2,	//그릴 위치 X
		_y + _frontImg->getHeight() / 2,				//그릴 위치 Y
		0, 0,											//sourX, Y
		_width, _frontImg->getHeight() );				//sourWidth, Height
}

void progressBar::gauge( float currentGauge, float maxGauge )
{
	_width = ( currentGauge / maxGauge ) * _backImg->getWidth();
}
