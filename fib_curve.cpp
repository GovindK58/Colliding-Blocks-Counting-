#include<simplecpp>

main_program{
    int n1=0;
    int n2=1;
    int n = 0;
    turtleSim();
    while(n<100){
        n = n1 + n2;
        float length;
        length = (0.05*n*sine(45.0)*cosine(179*0.25)/sine(0.25))-0.05/2;
        cout<<n<<" "<<length<<endl;
        repeat(4){
            forward(length);
            right(-90);
        }
        forward(0.05*n/2);
        repeat(179){
            left(0.5);
            forward(0.05*n);

        }
        left(0.5);
        forward(0.05*n/2);
        n2 = n1;
        n1 = n;
    }
    wait(100);
}
