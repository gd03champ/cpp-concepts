#include <iostream>

class className{
    private:
        int classData;
    public:
        void setData(int x){
            classdata = x;
        }
        void showData(){
            std::cout << classData << std::endl;
        }
}