#pragma once
#pragma once
#include <iostream>

namespace Area {
	const float Pi = 3.141592653589793;
	float CubeVolume(float Length, float Width, float Height) {
		return Length * Width * Height;
	}


	float ParallelogramArea(float Length, float Length2) {
		return Length * Length2;
	}

	float CircleArea(float Radius) {
		return Radius * Radius * Pi;

	}

	float SectorArea(float Radius, float Degree) {
		Degree = (Degree * Pi) / 180;
		return  (Radius * Radius * Pi) / ((2 * Pi) / Degree);


	}

	float TriangleArea(float Height, float Base) {
		return 0.5f * Base * Height;
	}

	float CubePerimeter(float Length, float Width, float Height) {
		return (Length + Width + Height) * 4;

	}

	float PyramidVolume(float Length, float Width, float Height) {
		float BaseArea = Length * Width;
		return (1 / 3)(BaseArea)(Height);
	}

	float ConeVolume(float Radius, float Heigth) {
		return (Pi * Radius * Radius * Heigth) * (1 / 3);
	}

	float CylinderVolume(float Radius, float Height) {
		return (Pi * Radius * Radius) * Height;
	}
}