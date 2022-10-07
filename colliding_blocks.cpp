#include<sstream>
#include<simplecpp>

int main(){

    cout<<"Enter the mass of second block: ";
    double m1=1, m2 ;
    cin>>m2;
    double v1 = 0, v2 = -1;
    double time = 0.1;
    int counter = 0;
    initCanvas("Collisions", 400, 200);
    Rectangle r1(100,175,50,50), r2(300,150,100,100);

    string collisions("collisions: 0");
    Text ccounter(200, 25, collisions);

    while (v2<=0 || v2 <=abs(v1)){

        if (r2.getX()-r1.getX()<=75){
            double v_1=v1, v_2=v2;
            v1 = ((m1-m2)/(m1+m2))*v_1+((2*m2)/(m1+m2))*v_2;
            v2 = ((m2-m1)/(m1+m2))*v_2+((2*m1)/(m1+m2))*v_1;
            counter+=1;

            stringstream temp;
            temp<< counter;
            collisions.replace(12,5,temp.str());
            ccounter.setMessage(collisions);

        }
        if (r1.getX()<=25) {
            v1 = -v1;
            counter+=1;

            stringstream temp;
            temp<< counter;
            collisions.replace(12,5,temp.str());
            ccounter.setMessage(collisions);
        }

        r1.move(v1*time,0);
        r2.move(v2*time,0);
    }
    wait(0.1);
    cout<<counter;
}
