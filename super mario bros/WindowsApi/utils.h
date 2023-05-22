#pragma once

#include <cmath>

#define DEG_TO_RAD  0.017453f //1���� ���̾� ��
#define PI 3.141592654f // 180��
#define PI2 (PI * 2)	// 360��

#define FLOAT_EPSILON 0.0001f //�Ǽ� �� ���������� ��� ����

namespace MY_UTIL
{
	//�Ÿ� �������� �Լ�
	float getDistance( float startX, float startY, float endX, float endY );

	//�ޱ� �������� �Լ�
	float getAngle( float x1, float y1, float x2, float y2 );
}