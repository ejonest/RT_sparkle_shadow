//// 	Copyright (C) Kevin Suffern 2000-2007.
////	This C++ code is for non-commercial purposes only.
////	This C++ code is licensed under the GNU General Public License Version 2.
////	See the file COPYING.txt for the full license.


//// This builds the scene for Figure 27.15(b)

//#include "World/Worlds/27.h"


//void
//World::build(void){
//    int num_samples = 16;
	
//    vp.set_hres(600);
//    vp.set_vres(600);
//    vp.set_samples(num_samples);
//    vp.set_max_depth(5);
	
//    background_color = RGBColor(0.0, 0.3, 0.25);
	
//    tracer_ptr = new Whitted(this);
	
//    Ambient* ambient_ptr = new Ambient;
//    ambient_ptr->scale_radiance(0.25);
//    set_ambient_light(ambient_ptr);
		
//    Pinhole* pinhole_ptr = new Pinhole;
//    pinhole_ptr->set_eye(-8, 5.5, 40);
//    pinhole_ptr->set_lookat(1, 4, 0);
//    pinhole_ptr->set_view_distance(2400.0);
//    pinhole_ptr->compute_uvw();
//    set_camera(pinhole_ptr);
	
	
//    // point light
	
//    PointLight* light_ptr1 = new PointLight;
//    light_ptr1->set_location(40, 50, 0);
//    light_ptr1->scale_radiance(4.5);
//    light_ptr1->set_shadows(true);
//    add_light(light_ptr1);
	

//    // point light
	
//    PointLight* light_ptr2 = new PointLight;
//    light_ptr2->set_location(-10, 20, 10);
//    light_ptr2->scale_radiance(4.5);
//    light_ptr2->set_shadows(true);
//    add_light(light_ptr2);
	
	
//    // directional light
	
//    Directional* light_ptr3 = new Directional;
//    light_ptr3->set_direction(-1, 0, 0);
//    light_ptr3->scale_radiance(4.5);
//    light_ptr3->set_shadows(true);
//    add_light(light_ptr3);
	
	
//    // transparent sphere
	
//    Transparent* glass_ptr = new Transparent;
//    glass_ptr->set_ks(0.2);
//    glass_ptr->set_exp(2000.0);
//    glass_ptr->set_ior(0.75);
//    glass_ptr->set_kr(0.1);
//    glass_ptr->set_kt(0.9);
	
//    Sphere* sphere_ptr1 = new Sphere(Point3D(0.0, 4.5, 0.0), 3.0);
//    sphere_ptr1->set_material(glass_ptr);
//    add_object(sphere_ptr1);
	
	
//    // red sphere
		
//    Reflective*	reflective_ptr = new Reflective;
//    reflective_ptr->set_ka(0.3);
//    reflective_ptr->set_kd(0.3);
//    reflective_ptr->set_cd(red);
//    reflective_ptr->set_ks(0.2);
//    reflective_ptr->set_exp(2000.0);
//    reflective_ptr->set_kr(0.25);
	
//    Sphere* sphere_ptr2 = new Sphere(Point3D(4, 4, -6), 3);
//    sphere_ptr2->set_material(reflective_ptr);
//    add_object(sphere_ptr2);

		
//    Checker3D* checker_ptr = new Checker3D;
//    checker_ptr->set_size(4);
//    checker_ptr->set_color1(0.75);
//    checker_ptr->set_color2(white);
	
//    SV_Matte* sv_matte_ptr = new SV_Matte;
//    sv_matte_ptr->set_ka(0.5);
//    sv_matte_ptr->set_kd(0.35);
//    sv_matte_ptr->set_cd(checker_ptr);
	
//    // rectangle
	
//    Rectangle* rectangle_ptr = new Rectangle(Point3D(-20, -0.001, -100), Vector3D(0, 0, 120), Vector3D(40, 0, 0));
//    rectangle_ptr->set_material(sv_matte_ptr);
//    add_object(rectangle_ptr);
//}


