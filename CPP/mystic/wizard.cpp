#include "wizard.h"

using namespace std;

Wizard::Wizard(const string& name, int healthPoint, int damage, int manaPoint) : Spellcaster(name, healthPoint, damage, manaPoint) {
    setAbility(new WizardAbility(this));
    setUnitType(wizard);
    this->battleMage = true;
}

Wizard::~Wizard() {}
