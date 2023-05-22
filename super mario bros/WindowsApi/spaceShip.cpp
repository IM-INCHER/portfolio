#include "stdafx.h"
#include "spaceShip.h"
#include "enemyManager.h"

spaceShip::spaceShip()
{
}


spaceShip::~spaceShip()
{
}

HRESULT spaceShip::init()
{
	_ship = IMAGEMANAGER->addImage( "ship", "image/rocket.bmp", 52, 64, true, RGB( 255, 0, 255 ) );
	_ship->setX( CENTERX - _ship->getWidth() / 2 );
	_ship->setY( CENTERY + 300 );

	_missile = new missile;
	_missile->init( 50, 400 );

	_frameMissile = new frameMissile;
	_frameMissile->init( 100, 700 );

	_hpBar = new progressBar;
	_hpBar->init( _ship->getX(), _ship->getY() - 15, _ship->getWidth(), 5 );

	_maxHP = 10000.f;
	_currentHP = 10000.f;

	return S_OK;
}

void spaceShip::release()
{
	_hpBar->release();
	SAFE_DELETE( _hpBar );

	_frameMissile->release();
	SAFE_DELETE( _frameMissile );

	_missile->release();
	SAFE_DELETE( _missile );
}

void spaceShip::update()
{
	if ( KEYMANAGER->isStayKeyDown( VK_LEFT ) )
	{
		_ship->setX( _ship->getX() - 8.f );
	}

	if ( KEYMANAGER->isStayKeyDown( VK_RIGHT ) )
	{
		_ship->setX( _ship->getX() + 8.f );
	}
	if ( KEYMANAGER->isStayKeyDown( VK_UP ) )
	{
		_ship->setY( _ship->getY() - 8.f );
	}
	if ( KEYMANAGER->isStayKeyDown( VK_DOWN ) )
	{
		_ship->setY( _ship->getY() + 8.f );
	}
	if ( KEYMANAGER->isStayKeyDown( VK_SPACE ) )
	{
		_missile->fire( _ship->getX() + _ship->getWidth() / 2, _ship->getY() - 60 );
	}

	if ( KEYMANAGER->isStayKeyDown( 'B' ) )
	{
		_frameMissile->fire( _ship->getX() + _ship->getWidth() / 2, _ship->getY() - 60 );
	}

	_missile->update();
	_frameMissile->update();

	collision();

	//progress Update
	_hpBar->setX( _ship->getX() );
	_hpBar->setY( _ship->getY() - 15 );
	_hpBar->gauge( _currentHP, _maxHP );
	_hpBar->update();
}

void spaceShip::render()
{
	_ship->render( getMemDC() );
	_missile->render();
	_frameMissile->render();

	//progress Render
	_hpBar->render();
}

void spaceShip::removeMissile( int arrNum )
{
	if ( _missile )
	{
		_missile->removeMissile( arrNum );
	}
}

void spaceShip::removeFrameMissile( int arrNum )
{
	if ( _frameMissile )
	{
		_frameMissile->removeMissile( arrNum );
	}
}

void spaceShip::collision()
{
	for ( int i = 0; i < _frameMissile->getVBullet().size(); i++ )
	{
		for ( int j = 0; j < _em->getVMinion().size(); j++ )
		{
			RECT rc;
			if ( IntersectRect( &rc, &_frameMissile->getVBullet()[i].rc,
				&_em->getVMinion()[j]->getRect() ) )
			{
				_frameMissile->removeMissile( i );
				_em->removeMinion( j );
			}
		}
	}
}
