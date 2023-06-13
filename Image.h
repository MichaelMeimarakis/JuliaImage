#pragma once

#include <iostream>
#include <fstream>
#include <vector>


struct Color
{
	float r, g, b;

	Color() :r(0), g(0), b(0) {};
	Color(float _r, float _g, float _b) :r(_r), g(_g), b(_b) {};
	~Color() {};
};

class Image
{
public:
	Image(int width, int height) :m_width(width), m_height(height), m_colors(std::vector<Color>(m_width * m_height)) {};
	~Image() {};

	Color GetColor(int x, int y)const { return m_colors[y * m_width + x]; }
	void Export(const char*)const;
	int m_width, m_height;
	std::vector<Color> m_colors;
};

