#pragma once

class Direction
{
    private:
        bool a, b;// AB = up, Ab = down, aB = right, ab = left

        /*static Direction UP(true, true);
        static Direction DOWN(true,false);
        static Direction RIGHT(false, true);
        static Direction LEFT(false, false);*/

    public:
        Direction(const bool A, const bool B)
        { setD(A,B); }
        ~Direction() {}

        void setD(const bool A, const bool B)
        { setA(A); setB(B); }
        void setA(const bool A)
        { a=A; }
        void setB(const bool B)
        { b=B; }
        bool getA()
        { return a; }
        bool getB()
        { return b; }

        void operator<< (Direction& dir)
        { setD(dir.getA(), dir.getB()); }
        bool operator== (Direction& dir)
        {
            if ((a==dir.a)&&(b==dir.b))
                return true;
            else
                return false;
        }
};
