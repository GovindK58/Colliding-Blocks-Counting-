#include<simplecpp>

void f(int n, double l, int i=1){

    /* i denotes if the curve is flipped or not
    (flipped = mirror image)
    l dneotes length of each line
    n = order
    */

    if(n>0){
        right(90*i); f(n-1, l, -i);
        forward(-l*i);
        left(90*i); f(n-1, l, i);
        forward(l*i);
        f(n-1, l, i); left(90*i);
        forward(-l*i);
        f(n-1, l, -i); right(90*i);
    }
}


int main(){

    cout<<"Enter the order of hilbert's curve: ";
    int n; cin>>n;
    int L = 600;
    double l = L/(pow(2,n)+1);
    turtleSim("Hilbert's Curve", L, L);
    penUp();
    forward(-L/2+l);
    right(90);
    forward(L/2-l);
    left(90);
    penDown();
    f(n, l);
    wait(100);
}
