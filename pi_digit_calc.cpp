#include<simplecpp>

main_program{

    cout<<"Enter the mass of second block: ";
    double m1=1, m2;
    cin>>m2;
    double v1 = 0, v2 = -1;
    double time = 1;
    long long count = 0;
  //  initCanvas();
   // Rectangle r1(100,475,50,50), r2(300,450,100,100);
    double x1 = 100 , x2= 300;
    while (v2<=0 || v2 <=abs(v1)){
        if (x2 - x1 <=75){
            double v_1=v1, v_2=v2;
            v1 = ((m1-m2)/(m1+m2))*v_1+((2*m2)/(m1+m2))*v_2;
            v2 = ((m2-m1)/(m1+m2))*v_2+((2*m1)/(m1+m2))*v_1;
            count+=1;
        }
        if (x1 <=25) {
            v1 = -v1;
            count+=1;
        }
        x1 += v1*time;
        x2 += v2*time;
    }
    cout<<count;
}
