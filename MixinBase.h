#ifndef MIXIN_BASE_H
#define MIXIN_BASE_H

/**
 * @brief template class for Mixns
 * @details The base class for all Mixins to provide the test functionality
 *
 * @tparam ID the id of the Mixin, should be a power of 2
 */
template <int ID>
class MixinBase
{
protected:
        /**
         * @brief Mixin id to use in test
         * @return the Mixin id
         */
        constexpr static int getBmp()
        {
                return ID;
        }

public:
        /**
         * @brief Mixin id to use as test
         * @return the Mixin id
         */
        constexpr static int GetId()
        {
                return ID;
        }

        /**
         * @brief default constructor for Mixin
         */
        virtual ~MixinBase() = default;
};

#endif