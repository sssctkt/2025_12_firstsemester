//structure everything is assumed to be public
class fraction { //everything is assumed to be private
//private, means you cannot access it in main 
//public, means you can access it in main
   private:
    int num;
    int den;
   public:
    void setvalue(int n, int d); //class member function, it can access the data even in private
    void getvalue();
    bool bigger(fraction f); //this fraction f is not the one that calls the function, it's like a regular variable
    fraction displaybigger(fraction f);
    fraction additon(fraction f);
};