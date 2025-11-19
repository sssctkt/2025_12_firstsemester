
#include <iostream>
using namespace std;
struct coord{
    float x;
    float y;
    coord *next;
};
coord *additem(coord *p, float x1, float y1);
int main()
{
    float x1, y1;
    coord *p, *counter;
    p=NULL;
    while ((cin>>x1>>y1)){
        p=additem(p, x1, y1);
    }
    for (counter=p; counter!=NULL; counter=counter->next){
        cout<<counter->x<<" "<<counter->y<<endl;
    }
    return 0;
}
coord *additem(coord *p, float x1, float y1){
    coord *a;
    a=new coord;
    //add new stuff in 
    a->x=x1;
    a->y=y1;
    a->next=p;
    p=a;
    return p;
}
