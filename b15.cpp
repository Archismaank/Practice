#include<stdio.h>

class rectangle {
    public:
    int length;
    int breadth;

    void initialize(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
        int a = 0;
        a = length*breadth;
        return a;
    }

    int peri(){
        int b = 0;
        b = 2*(length+breadth);
        return b;
    }
};

int main(){
    rectangle r;
    int l,b;
    printf("Length: \n");
    scanf("%d", &l);
    printf("Breadth: \n");
    scanf("%d", &b);
    r.initialize(l,b);
    int ar = r.area();
    int perim = r.peri();
    printf("area: %d\n", ar);
    printf("perimeter: %d\n", perim);
}