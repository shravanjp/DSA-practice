#include<iostream>
using namespace std;
template <typename T,typename U>
class Weight
{
    private:
            T kg;
            U gram;
    public:
            void setData(T x,U y)
            {
                kg=x;
                gram=y;
            }
            T getKg()
            {
                return kg;
            }
            U getGram()
            {
                return gram;
            }
};
T add(T x,T y)
{
    return x+y;
}
int main()
{
    Weight <int,double> obj1;
    obj1.setData(7,5.78899);
    cout<<"KG:   "<<obj1.getKg();
    cout<<"Gram: "<<obj1.getGram();
    cout<<"Sum of "<<obj1.kg<<" and "<<int(obj1.gram)<<" is :"<<add<int>(7,89);
    return 0;
}