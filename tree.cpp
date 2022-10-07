#include<simplecpp>

void tree(int n, double l, double t){
    if(n>0){
        double nl = l-l/n, nt = t-t/(5*n);
        forward(l);
        left(t);
        tree(n-1, nl, nt);
        right(t);
        forward(l);
        right(t);
        tree(n-2, nl, nt);
        left(t);
        forward(-2*l);
    }

}

main_program{
//Write your code here
    int n;
    cin>>n;
    turtleSim("Tree", 1000, 700);
    penUp();
    left(90);
    forward(-250);
    penDown();
    tree(n,100,360/n);
    wait(100);
}
