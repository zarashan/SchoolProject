#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
    public:
        Character();
        ~Character();
        int getStatStr();
        void setStatStr(int newStr);
        int getStatVit();
        void setStatVit(int newVit);
        int getStatSpd();
        void setStatAgl(int newSpd);
        int getStatVit();
        void setStatVit(int newVit);
        int getStatDex();
        void setStatEvd(int newDex);
        void addAbilities(string newAbility);
    protected:
    private:
        int statHit = 10;
        int statMag = 10;
        string[] abilites
        int statStr = 2;
        int statAgl = 2;
        int statMag = 2;
        int statEvd = 2;
        int StatVit = 2;
};

#endif // CHARACTER_H
