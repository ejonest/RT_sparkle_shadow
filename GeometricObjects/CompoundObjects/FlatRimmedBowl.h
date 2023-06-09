#ifndef FLATRIMMEDBOWL_H
#define FLATRIMMEDBOWL_H

#include "Compound.h"


class FlatRimmedBowl: public Compound {
public:
  FlatRimmedBowl(void);
  FlatRimmedBowl(double i_r, double o_r, const Point3D& c = Point3D());
  FlatRimmedBowl(const FlatRimmedBowl& b);
  virtual FlatRimmedBowl* clone(void) const;
  virtual FlatRimmedBowl& operator= (const FlatRimmedBowl& rhs);
  virtual ~FlatRimmedBowl(void);

  virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const;
  virtual bool shadow_hit(const Ray& ray, double& tmin) const;
};

#endif // FLATRIMMEDBOWL_H
