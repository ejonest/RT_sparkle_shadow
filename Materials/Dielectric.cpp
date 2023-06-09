//#include "Dielectric.h"

//Dielectric::Dielectric(void)
//: Phong(),
//  fresnel_brdf(new FresnelReflector),
//  fresnel_btdf(new FresnelTransmitter) { }

//Dielectric::Dielectric(const Dielectric& other)
//: Dielectric() { copy(other); }

//Dielectric& Dielectric::operator=(const Dielectric& other) {
//    if (this != &other) { copy(other); }
//    return *this;
//}

//void Dielectric::copy(const Dielectric& other) {
//    Phong::operator=(other);

//    FresnelReflector* prefl = fresnel_brdf;
//    FresnelTransmitter* ptrans = fresnel_btdf;

//    fresnel_brdf = prefl ? prefl->clone() : NULL;
//    fresnel_btdf = ptrans ? ptrans->clone() : NULL;
//}

//Emissive::~Emissive(void) { }

//Emissive* Emissive::clone(void) const { return new Emissive(*this); }

//RGBColor Dielectric::shade(ShadeRec& sr) {
//    RGBColor L(Phong::shade(sr));

//    Vector3D wi;
//    Vector3D wo(-sr.ray.d);
//    RGBColor fr = fresnel_brdf->sample_f(sr, wo, wi);             // computes wi
//    Ray reflected_ray(sr.hit_point, wi);
//    float t;
//    RGBColor Lr, Lt;
//    float ndotwi =  sr.normal.dot(wi);

//    if (fresnel_btdf->tir(sr)) {                        // total internal reflection
//        if (ndotwi < 0.0) {
//            // reflected ray is inside
//            Lr = sr.w.tracer_ptr->trace_ray(reflected_ray, t, sr.depth + 1);
//            L += cf_in.powc(t) * Lr;               // inside filter color
//        }
//        else {
//            // reflected ray is outside
//            Lr = sr.w.tracer_ptr->trace_ray(reflected_ray, t, sr.depth + 1);
//            // kr = 1
//            L += cf_out.powc(t) * Lr;              // outside filter color
//        }
//    }
//    else {             // no total internal reflection
//        Vector3D wt;
//        RGBColor ft = fresnel_btdf->sample_f(sr, wo, wt);     // computes wt
//        Ray transmitted_ray(sr.hit_point, wt);
//        float ndotwt = sr.normal.dot(wt);

//        if (ndotwi < 0.0) {
//            // reflected ray is inside
//            Lr = fr * sr.w.tracer_ptr->trace_ray(reflected_ray, t,
//                sr.depth + 1) * fabs(ndotwi);
//            L += cf_in.powc(t) * Lr;               // inside filter color

//            // transmitted ray is outside
//            Lt = ft * sr.w.tracer_ptr->trace_ray(transmitted_ray, t,
//                sr.depth + 1) * fabs(ndotwt);
//            L += cf_out.powc(t) * Lt;              // outside filter color
//        }
//      else {
//          // reflected ray is outside
//          Lr = fr * sr.w.tracer_ptr->trace_ray(reflected_ray, t,
//                sr.depth + 1) * fabs(ndotwi);
//          L += cf_out.powc(t) * Lr;         // outside filter color

//          // transmitted ray is inside
//          Lt = ft * sr.w.tracer_ptr->trace_ray(transmitted_ray, t,
//                sr.depth + 1) * fabs(ndotwt);
//          L += cf_in.powc(t)) * Lt;         // inside filter color
//      }
//  }
//  return (L);
//}
