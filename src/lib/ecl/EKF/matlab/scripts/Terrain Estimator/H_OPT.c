t2 = q0*q0;
t3 = q1*q1;
t4 = q2*q2;
t5 = q3*q3;
t6 = pd-ptd;
t7 = 1.0/(t6*t6);
t8 = q0*q3*2.0;
t9 = t2-t3-t4+t5;
A0[0][0] = -t7*t9*(vel_z*(q0*q1*2.0+q2*q3*2.0)+vel_y*(t2-t3+t4-t5)-vel_x*(t8-q1*q2*2.0));
A0[1][0] = t7*t9*(-vel_z*(q0*q2*2.0-q1*q3*2.0)+vel_x*(t2+t3-t4-t5)+vel_y*(t8+q1*q2*2.0));