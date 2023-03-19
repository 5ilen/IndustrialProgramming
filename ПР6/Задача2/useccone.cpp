#include <math.h>
#include <fmt/core.h>

#include "useccone.h"

void Useccone::set(float cx, float cy, float cz, float radius, float height, float cutoff) {
  Cone::set(cx, cy, cz, radius, height);
  this->cutoff = cutoff;
}

void Useccone::print() {
  fmt::print("Useccone {{\n\tCenter: ({}, {}, {}). Radius: {}. Height: {}. Cutoff: {}\n\tArea: {}. Volume: {}\n}}\n",
    cx, cy, cz,
    radius,
    height,
    cutoff,
    area(),
    volume()
  );
}

float USeccone::area() {
  Cone top = Cone(radius * cutoff / height, cutoff);
  return Cone::area() - top.lateral_surface();
}

float Useccone::volume() {
  Cone top = Cone(radius * cutoff / height, cutoff);
  return Cone::volume() - top.volume();
}