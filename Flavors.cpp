#include "Flavors.h"
#include "Mixins.h"
#include <iostream>

using namespace std;

Flavor1::Flavor1() {}

void Flavor1::doFlavor()
{
        cout << "Flavor1" << endl;
}

Flavor1::~Flavor1() {}

//template class Mixin1<Flavor1>;

Flavor2::Flavor2() {}

void Flavor2::doFlavor()
{
        cout << "Flavor2" << endl;
}

Flavor2::~Flavor2() {}
