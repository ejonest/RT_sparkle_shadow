#ifndef __CONCAVE__PART__TORUS__
#define __CONCAVE__PART__TORUS__

// This file contains the declaration of the class ConcavePartTorus
// This is a part torus where the surface normal always points inwards
// If you study the code here you should be able to implement other part objects

#include "GeometricObjects/GeometricObject.h"

//-------------------------------------------------------------------------------- class ConcavePartTorus


class ConcavePartTorus: public GeometricObject {
public:
  ConcavePartTorus(void);
  ConcavePartTorus(const double i_r, const double o_r,
                   const double azimuth_min,   // in degrees
                   const double azimuth_max,   // in degrees
                   const double polar_min,     // in degrees measured from top
                   const double polar_max);		// in degrees measured from top
  virtual ConcavePartTorus* clone(void) const;
  ConcavePartTorus(const ConcavePartTorus& cp);
  virtual ~ConcavePartTorus(void);
  ConcavePartTorus& operator= (const ConcavePartTorus& rhs);

  virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const;
  virtual bool shadow_hit(const Ray& ray, double& tmin) const;

  BBox get_bounding_box(void) const;

public:
  double a;         		// inner radius
  double b;             // outer radius
  double phi_min;       // minimum azimiuth angle in degrees measured counter clockwise from the +ve z axis
  double phi_max;       // maximum azimiuth angle in degrees measured counter clockwise from the +ve z axis
  double theta_min;			// minimum polar angle in degrees measured counter clockwise from the xz plane
  double theta_max;			// maximum polar angle in degrees measured counter clockwise from the xz plane
  BBox bbox;            // bounding box

private:
  Normal compute_normal(const Point3D& p) const;
};

inline BBox ConcavePartTorus::get_bounding_box(void) const {
  return bbox;
}

#endif // __CONCAVE__PART__TORUS__
