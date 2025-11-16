#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

Rectangle::Rectangle() {}

double Rectangle::getArea()
{
    return width*height;
}

double Rectangle::getCircum()
{
    return 2 * (width + height);
}
