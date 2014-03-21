#include "MixinBase.h"

#ifndef MIXINS_H
#define MIXINS_H

/**
 * @brief sample Mixn 1
 */
class Mixin1 : public MixinBase<1>
{
public:
        Mixin1();
        void doMixin1();
};

/**
 * @brief sample Mixn 2
 */
class Mixin2 : public MixinBase < 1 << 1 >
{
public:
        Mixin2();
        void doMixin2();
};

/**
 * @brief sample Mixn 3
 */
class Mixin3 : public MixinBase < 1 << 2 >
{
public:
        Mixin3();
        void doMixin3();
};

/**
 * @brief sample Mixn 4
 */
class Mixin4 : public MixinBase < 1 << 3 >
{
public:
        Mixin4();
        void doMixin4();
};

#endif
//#include "Mixins.impl"