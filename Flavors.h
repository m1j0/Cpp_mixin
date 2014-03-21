#include "MixinUserBase.h"
#include "Mixins.h"

/**
 * @brief interface for Flavors
 * @details The Interface which defines the functions used in the Flavors.
 */
class IFlavors: public IMixinUser
{
public:
        /**
         * @brief sample function stub
         */
        virtual void doFlavor() = 0;
        /**
         * @brief default destructor for inheritance
         */
        virtual ~IFlavors() = default;
};

/**
 * @brief sample Flavor 1, uses Mixin 1 and 2
 */
class Flavor1: public IFlavors, public MixinUserTemplate<Mixin1, Mixin2>
{
public:
        Flavor1();
        bool usesMixin(int bmp)
        {
                return MixinUserTemplate<Mixin1, Mixin2>::usesMixin(bmp);
        }
        void doFlavor();
        virtual ~Flavor1();
};

/**
 * @brief sample Flavor 2, using Mixin 3 and 4
 */
class Flavor2: public IFlavors, public MixinUserTemplate<Mixin3, Mixin4>
{
public:
        Flavor2();
        bool usesMixin(int bmp)
        {
                return MixinUserTemplate<Mixin3, Mixin4>::usesMixin(bmp);
        }
        void doFlavor();
        virtual ~Flavor2();
};

/**
 * @brief sample Flavor 1, using no Mixin
 */
class Flavor3: public IFlavors, public MixinUserTemplate<>
{
public:
        Flavor3() {}
        bool usesMixin(int bmp)
        {
                return MixinUserTemplate<>::usesMixin(bmp);
        }
        void doFlavor() {}
        virtual ~Flavor3() {}
};