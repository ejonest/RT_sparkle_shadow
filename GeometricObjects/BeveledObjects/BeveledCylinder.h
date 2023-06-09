#ifndef BEVELEDCYLINDER_H
#define BEVELEDCYLINDER_H

#include "GeometricObjects/CompoundObjects/Compound.h"
#include "Utilities/Point3D.h"
#include "Utilities/BBox.h"


class BeveledCylinder: public Compound {
public:
  BeveledCylinder(void);
  BeveledCylinder(const double bottom, const double top, const double radius, const double bevel_radius);
  BeveledCylinder(const BeveledCylinder& bc);
  virtual BeveledCylinder* clone(void) const;
  virtual BeveledCylinder& operator=(const BeveledCylinder& rhs);
  virtual ~BeveledCylinder(void);

  virtual BBox get_bounding_box(void) const;

  virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const;
  virtual bool shadow_hit(const Ray& ray, double& tmin) const;

private:
  double y0;		// bottom y value
  double y1;		// top y value
  double r;     // radius
  double rb;     // bevel radius
  BBox bbox;    // bounding box
};

#endif // BEVELEDCYLINDER_H
