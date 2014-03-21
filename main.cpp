#include "Mixins.h"
#include "Flavors.h"
#include <iostream>

int main(int argc, char const *argv[])
{

        Flavor1 test;
        // Run Mixin and Flavor functions
        test.doFlavor();
        test.doMixin1();
        // Runtime test which Mixins Flavor1 uses
        test.usesMixin(Mixin1::GetId());
        std::cout << test.usesMixin(Mixin1::GetId()) << test.usesMixin(Mixin2::GetId()) << test.usesMixin(Mixin3::GetId()) << test.usesMixin(Mixin4::GetId()) << std::endl;

        Flavor2 test1;
        // Run Mixin and Flavor functions
        test1.doFlavor();
        test1.doMixin3();
        // Runtime test which Mixins Flavor2 uses
        std::cout << test1.usesMixin(Mixin1::GetId()) << test1.usesMixin(Mixin2::GetId()) << test1.usesMixin(Mixin3::GetId()) << test1.usesMixin(Mixin4::GetId()) << std::endl;


        Flavor3 test2;
        // Runtime test which Mixins Flavor2 uses
        std::cout << test2.usesMixin(Mixin1::GetId()) << test2.usesMixin(Mixin2::GetId()) << test2.usesMixin(Mixin3::GetId()) << test2.usesMixin(Mixin4::GetId()) << std::endl;


        // Runtime test which probably unknown Flavors implement
        IFlavors *flvs[] = {&test, &test2};

        for (IFlavors *flv : flvs) {
                std::cout << flv->usesMixin(Mixin1::GetId());
        }

        std::cout << std::endl;
        return 0;
}