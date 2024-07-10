// KCircle.cpp: 定义应用程序的入口点。
//

#include "KCircle.h"
#define PI 3.14

KCircle::KCircle()
{
}

KCircle::KCircle(const float radius)
{
	m_radius = radius;
}

float KCircle::getRadius() const
{
	return m_radius;
}

void KCircle::setRadius(const float radius)
{
	m_radius = radius;
}

float KCircle::getPerimeter() const
{
	return 2 * PI * m_radius;
}

float KCircle::getArea() const
{
	return PI * m_radius * m_radius;
}
