//// 	Copyright (C) Kevin Suffern 2000-2007.
////	This C++ code is for non-commercial purposes only.
////	This C++ code is licensed under the GNU General Public License Version 2.
////	See the file COPYING.txt for the full license.


//// This builds the scene for Figure 27.19(a).

//// You can implement the solid cylinder as an exercise.
//// See Exercise 19.22

//#include "World/Worlds/27.h"


//void
//World::build(void) {
//    int num_samples = 16;
	
//    vp.set_hres(600);
//    vp.set_vres(600);
////    vp.set_max_depth(10);
//    vp.set_max_depth(2);
//    vp.set_samples(num_samples);
	
//    background_color = RGBColor(0.0, 0.3, 0.25);
	
//    Ambient* ambient_ptr = new Ambient;
//    ambient_ptr->scale_radiance(0.25);
//    set_ambient_light(ambient_ptr);
	
//    tracer_ptr = new Whitted(this);
	
//    Pinhole* pinhole_ptr = new Pinhole;
//    pinhole_ptr->set_eye(0, 1, 4);
//    pinhole_ptr->set_lookat(0.25, 1.25, 0.0);
//    pinhole_ptr->set_view_distance(500.0);
//    pinhole_ptr->compute_uvw();
//    set_camera(pinhole_ptr);
	
		
//    PointLight* light_ptr1 = new PointLight;
//    light_ptr1->set_location(20, 20, 5);
//    light_ptr1->scale_radiance(2.75);
//    light_ptr1->set_shadows(true);
//    add_light(light_ptr1);
	
		
//    Directional* light_ptr2 = new Directional;
//    light_ptr2->set_direction(-1, 0, 0);
//    light_ptr2->scale_radiance(3.0);
//    light_ptr2->set_shadows(true);
//    add_light(light_ptr2);
	

//    // solid cylinder

//    Transparent* glass_ptr = new Transparent;
//    glass_ptr->set_ks(0.15);
//    glass_ptr->set_exp(2000.0);
//    glass_ptr->set_ior(1.5);
//    glass_ptr->set_kr(0.1);
//    glass_ptr->set_kt(0.9);

//    double bottom 	= 0.0;
//    double top 		= 2.25;
//    double radius 	= 1.5;
	
//    SolidCylinder* cylinder_ptr = new SolidCylinder(bottom, top, radius);
//    cylinder_ptr->set_material(glass_ptr);
//    add_object(cylinder_ptr);
	
	
//    // red sphere
		
//    Reflective*	phong_ptr = new Reflective;
//    phong_ptr->set_cd(red);
//    phong_ptr->set_ka(0.3);
//    phong_ptr->set_kd(0.9);
//    phong_ptr->set_ks(0.25);
//    phong_ptr->set_exp(1000);
//    phong_ptr->set_kr(0.25);
	
//    Sphere* sphere_ptr2 = new Sphere(Point3D(2.0, 1.5, -2.5), 1.5);
//    sphere_ptr2->set_material(phong_ptr);
//    add_object(sphere_ptr2);
		
	
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

