//// 	Copyright (C) Kevin Suffern 2000-2007.
////	This C++ code is for non-commercial purposes only.
////	This C++ code is licensed under the GNU General Public License Version 2.
////	See the file COPYING.txt for the full license.


//// This builds the scene for Figure 27.19(b)

//// You can implement the thick ring object as an exercise.
//// See Exercise 19.24

//#include "World/Worlds/27.h"


//void
//World::build(void) {
//    int num_samples = 16;
	
//    vp.set_hres(600);
//    vp.set_vres(600);
//    vp.set_max_depth(3);
////    vp.set_max_depth(8);
//    vp.set_samples(num_samples);
	
//    background_color = RGBColor(0.0, 0.3, 0.25);
	
//    Ambient* ambient_ptr = new Ambient;
//    ambient_ptr->scale_radiance(0.25);
//    set_ambient_light(ambient_ptr);
	
//    tracer_ptr = new Whitted(this);
	
//    Pinhole* pinhole_ptr = new Pinhole;
//    pinhole_ptr->set_eye(-0.25, 1, 3);
//    pinhole_ptr->set_lookat(0.25, 1.25, 0);
//    pinhole_ptr->set_view_distance(500);
//    pinhole_ptr->compute_uvw();
//    set_camera(pinhole_ptr);
	
		
//    PointLight* light_ptr1 = new PointLight;
//    light_ptr1->set_location(20, 20, 5);
//    light_ptr1->scale_radiance(2.75);
//    light_ptr1->set_shadows(true);
//    add_light(light_ptr1);
	
	
//    // red sphere
		
//    Reflective*	phong_ptr2 = new Reflective;
//    phong_ptr2->set_cd(1, 0, 0);
//    phong_ptr2->set_ka(0.3);
//    phong_ptr2->set_kd(0.9);
//    phong_ptr2->set_ks(0.2);
//    phong_ptr2->set_exp(1000);
//    phong_ptr2->set_kr(0.25);
	
//    Sphere* sphere_ptr = new Sphere(Point3D(2.0, 1.5, -2.5), 1.5);
//    sphere_ptr->set_material(phong_ptr2);
//    add_object(sphere_ptr);


//    // thick ring
	
//    Transparent* glass_ptr = new Transparent;
//    glass_ptr->set_ks(0.15);
//    glass_ptr->set_exp(2000.0);
//    glass_ptr->set_ior(1.5);
//    glass_ptr->set_kr(0.1);
//    glass_ptr->set_kt(0.9);

	
//    double ymin = 0.0;
//    double ymax = 0.35;
//    double inner_radius = 0.9;
//    double outer_radius = 1.25;
	
//    Instance* ring_ptr = new Instance (new ThickRing(ymin, ymax, inner_radius, outer_radius));
//    ring_ptr->set_material(glass_ptr);
//    ring_ptr->rotate_x(90);
//    ring_ptr->rotate_y(-45);
//    ring_ptr->translate(0, 1.25, 0);
//    add_object(ring_ptr);
	
	
//    // plane with checker
		
//    Checker3D* checker_ptr = new Checker3D;
//    checker_ptr->set_size(1.0);
//    checker_ptr->set_color1(white);
//    checker_ptr->set_color2(0.5);
	
//    SV_Matte* sv_matte_ptr = new SV_Matte;
//    sv_matte_ptr->set_ka(0.8);
//    sv_matte_ptr->set_kd(0.85);
//    sv_matte_ptr->set_cd(checker_ptr);
	
//    Plane* plane_ptr = new Plane(Point3D(0.0), Normal(0, 1, 0));
//    plane_ptr->set_material(sv_matte_ptr);
//    add_object(plane_ptr);
//}

