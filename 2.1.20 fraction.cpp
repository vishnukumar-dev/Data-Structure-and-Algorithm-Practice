# include <bits/stdc++.h>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void print(){
            cout<<numerator<<"/"<<denominator<<endl;
        }

        void simpilify()
        {
            
        }

        void add(Fraction F1){
            int lcm = denominator * F1.denominator;
            int x = lcm/denominator;
            int y = lcm/F1.denominator;

            int num = (x*numerator) + (y*F1.numerator);

            numerator = num;
            denominator = lcm;


        }


};