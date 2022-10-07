#include<simplecpp>

main_program{
    initCanvas("projectile",1000,600);
    Line Xaxis(100,0,100,600), Yaxis(0,500,1000,500);
    float v=10, a=0, g=0.2;
    repeat(19){
        Circle p(100,500,5);
        p.penDown();
      //  cout <<"Enter the angle: ";
       // cin >>a;
        float vx= v*cosine(a), vy= v*sine(a);
        while (vy+v*sine(a)>=-0.1){
            p.move(vx, -vy);
            vy = vy-g;
           // wait(0.1);
        }
        p.imprint();
        a=a+5;
    }
    wait(10);

}
