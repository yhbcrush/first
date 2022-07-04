#include<iostream>
#include<unistd.h>

using namespace std;

class Cperson
{
    private:
	    Cperson(){}
	    ~Cperson(){}
    private:
	    static Cperson *ps;
	    static pthread_mutex_t lock;
    public:
	    static Cperson * Getobject();
	    static void Destroy(Cperson * p);

}



