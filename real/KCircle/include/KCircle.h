// KCircle.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。
#ifndef __KCIRCLEMULTI_KCIRCLE_H__
#define __KCIRCLEMULTI_KCIRCLE_H__
#pragma once

class KCircle
{
public:
	KCircle();
	KCircle(const float radius);

	float getRadius() const;
	void setRadius(const float radius);

	float getPerimeter() const;
	float getArea() const;
private:
	float m_radius;
};

#endif // __KCIRCLEMULTI_KCIRCLE_H__
