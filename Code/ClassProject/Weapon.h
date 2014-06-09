#ifndef WEAPON_H
#define WEAPON_H


class Weapon
{
    public:
        Weapon();
        ~Weapon();
        int getStatStr();
        void setStatStr(int newStr);
        int getStatVit();
        void setStatVit(int newVit);
        int getStatSpd();
        void setStatSpd(int newSpd);
        int getStatVit();
        void setStatVit(int newVit);
        int getStatDex();
        void setStatDex(int newDex);
        String getType();
    protected:
    private:
        int statStr = 2;
        int statAgl = 2;
        int statMag = 2;
        int statEvd = 2;
        int StatVit = 10;
        string type = "";
        int abilityID = 0;
};

#endif // WEAPON_H
