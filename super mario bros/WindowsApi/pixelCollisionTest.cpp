#include "stdafx.h"
#include "pixelCollisionTest.h"


pixelCollisionTest::pixelCollisionTest()
{
}


pixelCollisionTest::~pixelCollisionTest()
{
}

HRESULT pixelCollisionTest::init()
{
	IMAGEMANAGER->addImage( "mountain", "image/mountain.bmp", 800, 600, true, RGB( 255, 0, 255 ) );

	_ball = IMAGEMANAGER->addImage( "ball", "image/ball.bmp", 60, 60, true, 0xff00ff );

	_x = CENTERX;
	_y = CENTERY;

	_rc = RectMakeCenter( _x, _y, _ball->getFrameWidth(), _ball->getFrameHeight() );

	_probeY = _y + _ball->getFrameHeight() / 2;

	return S_OK;
}

void pixelCollisionTest::release()
{
}

void pixelCollisionTest::update()
{
	if ( KEYMANAGER->isStayKeyDown( VK_LEFT ) )
	{
		_x -= 2.f;
	}

	if ( KEYMANAGER->isStayKeyDown( VK_RIGHT ) )
	{
		_x += 2.f;
	}

	_probeY = _y + _ball->getFrameHeight() / 2;

	for ( int i = _probeY - 50; i < _probeY + 50; i++ )
	{
		COLORREF color = GetPixel( IMAGEMANAGER->findImage( "mountain" )->getMemDC(), _x, i );

		int r = GetRValue( color );
		int g = GetGValue( color );
		int b = GetBValue( color );

		if ( !(r == 255 && g == 0 && b == 255) )
		{
			_y = i - _ball->getFrameHeight() / 2;
			break;
		}
	}

	_rc = RectMakeCenter( _x, _y, _ball->getWidth(), _ball->getHeight() );

}

void pixelCollisionTest::render()
{
	IMAGEMANAGER->render( "mountain", getMemDC() );

	_ball->render( getMemDC(), _rc.left, _rc.top );

	Rectangle( getMemDC(), _x, _probeY, _x + 10, _probeY + 10 );
}
