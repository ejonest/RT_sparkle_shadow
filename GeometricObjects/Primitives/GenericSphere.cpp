// This file contains the definition of the class GenericSphere

#include "GenericSphere.h"

#include "Utilities/Maths.h"
#include "Materials/Material.h"

#include <math.h>


GenericSphere::GenericSphere(void):
  GeometricObject() {
}

GenericSphere* GenericSphere::clone(void) const {
  return new GenericSphere(*this);
}

GenericSphere::GenericSphere (const GenericSphere& GenericSphere):
  GeometricObject(GenericSphere) {
}

GenericSphere& GenericSphere::operator=(const GenericSphere& rhs)
{
  if (this == &rhs)
    return *this;

  GeometricObject::operator= (rhs);

  return *this;
}

GenericSphere::~GenericSphere(void) {
//  delete material_ptr;
}

BBox GenericSphere::get_bounding_box(void) const {
  return BBox(-1, 1, -1, 1, -1, 1);
}

bool GenericSphere::hit(const Ray& ray, double& tmin, ShadeRec& sr) const {
  double 		t;
  Vector3D	temp 	= ray.o;
  double 		a 		= ray.d.dot(ray.d);
  double 		b 		= 2.0 * Vector3D(ray.o).dot(ray.d);
  double 		c 		= temp.dot(temp) - 1;
  double 		disc	= b * b - 4.0 * a * c;

  if (disc < 0.0)
    return false;
  else {
    double e = sqrt(disc);
    double denom = 2.0 * a;
    t = (-b - e) / denom;    // smaller root

    if (t > kEpsilon) {
      tmin = t;
      sr.normal 	 = (ray.o + t * ray.d);
      sr.local_hit_point = ray.o + t * ray.d;
      return true;
    }

    t = (-b + e) / denom;    // larger root

    if (t > kEpsilon) {
      tmin = t;
      sr.normal   = (ray.o + t * ray.d);
      sr.local_hit_point = ray.o + t * ray.d;
      return true;
    }
  }

  return false;
}

bool GenericSphere::shadow_hit(const Ray& ray, double& tmin) const {
  if (!shadows)
    return false;

  double 		t;
  Vector3D	temp 	= ray.o;
  double 		a 		= ray.d.dot(ray.d);
  double 		b 		= 2.0 * Vector3D(ray.o).dot(ray.d);
  double 		c 		= temp.dot(temp) - 1;
  double 		disc	= b * b - 4.0 * a * c;

  if (disc < 0.0)
    return false;
  else {
    double e = sqrt(disc);
    double denom = 2.0 * a;
    t = (-b - e) / denom;    // smaller root

    if (t > kEpsilon) {
      tmin = t;
      return true;
    }

    t = (-b + e) / denom;    // larger root

    if (t > kEpsilon) {
      tmin = t;
      return true;
    }
  }

  return false;
}
