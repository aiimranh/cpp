#include <iostream>
#include <string>

using namespace std;

class buckyclass{
    public:
        buckyclass()
        {
            cout<<"When you initialized class object i will print."<<endl;
            name="Imran";
        }
        void setname(string x)
        {
            name=x;
        }
        string getname()
        {
            return name;
        }

    private:
        string name;//can not be access out of this class
        //so we need public function to set and get value.

    protected:

};

int main()
{
    buckyclass bo;
    cout<<bo.getname()<<endl;

    return 0;
}

