
class fraction
{   
    private:
        int numerator;
        int denominator;

    public:
        fraction(int numerator, int denominator)
        {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        void print()
        {
            cout<<"fraction = "<<numerator<<"/"<<denominator<<endl;
        }

        void simplify()
        {
            int gcd =1;
            int small = min(numerator,denominator);
            for(int i=1; i<small; i++)
            {
                if(numerator % i == 0 && denominator % i == 0)
                {
                    gcd = i;
                }
            }
            numerator = numerator/gcd;
            denominator = denominator/gcd;
        }


        // 10/2 + 15/4  =   (((4*10)+(2*15))/8)
        void  add(fraction f2)
        {
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            numerator = ((x*numerator) + (y*f2.numerator));
            denominator =lcm;
            simplify();
        }

};


