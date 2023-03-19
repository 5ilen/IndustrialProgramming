#pragma once

#include "ПР6\Задача1\cone.h"

class Useccone : public Cone {
	float cutoff;

public:
  inline Useccone(float cutoff)
		: Cone(), cutoff(cutoff) {}
  inline Useccone(float radius, float height, float cutoff)
		: Cone(radius, height), cutoff(cutoff) {}
  inline Useccone(float cx, float cy, float cz, float radius, float height, float cutoff) {
		this->set(cx, cy, cz, radius, height, cutoff);
  }

	void set(float cx, float cy, float cz, float radius, float height, float cutoff);
	void print();

	float area();
	float volume();
};