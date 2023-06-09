#ifndef SOLIDCONE_H
#define SOLIDCONE_H

#include "Compound.h"
#include "GeometricObjects/Primitives/OpenCone.h"
#include "GeometricObjects/Primitives/Disk.h"


class SolidCone: public Compound {
public:
    SolidCone(void);
    SolidCone(double h, double r);
    SolidCone(const SolidCone& sc);
    virtual SolidCone* clone (void) const;
    SolidCone& operator= (const SolidCone& rhs);
    virtual ~SolidCone(void);

    virtual bool hit(const Ray& ray, double& tmin, ShadeRec& sr) const;
    virtual bool shadow_hit(const Ray& ray, double& tmin) const;
};

#endif // SOLIDCONE_H
