#include "Point.hpp"

Fixed getArea(Point const a, Point const b, Point const p)
{
	Fixed val = (a.getX() - p.getX()) * (b.getY() - p.getY()) - (a.getY() - p.getY()) * (b.getX() - p.getX());
	if (val < 0)
		return (val * Fixed(-1));
	return val;
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed totalArea = getArea(a,b,c);
	std::cout << "Total Area (Raw Bits): " << totalArea.getRawBits() << std::endl;
	Fixed area1 = getArea(a,b,p);
	Fixed area2 = getArea(b,c,p);
	Fixed area3 = getArea(c,a,p);

	std::cout << "Area 1 (Raw Bits): " << area1.getRawBits() << std::endl;
	std::cout << "Area 2 (Raw Bits): " << area2.getRawBits() << std::endl;
	std::cout << "Area 3 (Raw Bits): " << area3.getRawBits() << std::endl;
	if (area1 == 0 || area2 == 0 || area3 == 0) {
		std::cout << "area 0" << std::endl;
		return false;
	}
	return (area1 + area2 + area3) == totalArea;
}