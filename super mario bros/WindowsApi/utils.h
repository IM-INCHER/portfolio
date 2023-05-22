#pragma once

#include <cmath>

#define DEG_TO_RAD  0.017453f //1도의 라이안 값
#define PI 3.141592654f // 180도
#define PI2 (PI * 2)	// 360도

#define FLOAT_EPSILON 0.0001f //실수 값 오차범위의 허용 범위

namespace MY_UTIL
{
	//거리 가져오는 함수
	float getDistance( float startX, float startY, float endX, float endY );

	//앵글 가져오는 함수
	float getAngle( float x1, float y1, float x2, float y2 );
}