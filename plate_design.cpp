#include<simplecpp>

main_program{
//Write your code here
    cout<<"This is program to draw a plate design"<<"\n"<<"Enter the number of loops: ";
    int n;
    cin>>n;
    turtleSim();
    penUp(); right(45); forward(120); left(45); forward(50); penDown();
    repeat(n){
        forward(50);
        repeat(24){
            right(10); forward(1.2);
        }
        forward(50);
        repeat(24){
            left(10); forward(1.2);
        }
        left(360.0/n); //rotation after 1 loop = 360/n
    }

wait(50);
}
