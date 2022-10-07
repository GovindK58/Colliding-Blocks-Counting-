#include<simplecpp>

main_program{
    float a1=59, a2=29, a3=13, a4=2.1, a5=1.7;
    int t1, t2, t3, t4, t5;
    int i=0;  // tick counter
    turtleSim();
    penUp();
    right(90);
    repeat(360){
        t1=2*i; t2=3*i; t3=7*i; t4=11*i; t5=17*i;
        i++;
        // to the tip
        left(t1); forward(a1);
        left(t2); forward(a2);
        left(t3); forward(a3);
        left(t4); forward(a4);
        left(t5); forward(a5);
        // tick-tick
        penDown();
        left(90); forward(1);/* forward(-1);*/ right(90);
        penUp();
        // back to start
        forward(-a5); left(-t5);
        forward(-a4); left(-t4);
        forward(-a3); left(-t3);
        forward(-a2); left(-t2);
        forward(-a1); left(-t1);
    }
   wait(20);
}

