#pragma once

enum ColorType{White, Black, Red, Green, Blue, Yellow, Magenta, Cyan};
//为图形形状定义Shape基类
class  Shape
{
protected:
ColorType  color;
public:
Shape(ColorType c);
virtual void draw();
};