#ifndef ABILITIES_H
#define ABILITIES_H

#include "Character.h"


virtual class Abilities
{
    public:
        Abilities();
        virtual ~Abilities();
    protected:
        string getName();
        void Cast(Character target);
    private:
        string name;
};

#endif // ABILITIES_H
