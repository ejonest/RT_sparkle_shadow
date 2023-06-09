#ifndef __DISK_H__
#define __DISK_H__

#include "Utilities/Ray.h"
#include "Utilities/ShadeRec.h"
#include "GeometricObjects/GeometricObject.h"


class Disk: public GeometricObject {
public:
  Disk(void);
  Disk(const Point3D& c, const Normal& n, double r);
  Disk(const Disk& disk);
  virtual Disk* clone(void) const;
  Disk& operator=(const Disk& rhs);
  virtual ~Disk(void);

  virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const;
  virtual bool shadow_hit(const Ray& ray, double& tmin) const;

private:
  Point3D center;
  Normal normal;
  double radius;
  double r_squared;
};

#endif // DISK_H


