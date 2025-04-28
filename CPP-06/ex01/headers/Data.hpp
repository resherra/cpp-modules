#ifndef DATA_HPP
#define DATA_HPP

class Data
{
    public:
        void    set_x(int);

        Data&   operator=(Data&);

        Data(Data&);
        Data();
        ~Data();

    private:
        int x;
};



#endif