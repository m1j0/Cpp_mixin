/**
 * @brief interface for Mixin users
 */
class IMixinUser
{
public:
        /**
         * @brief check if Mixin user uses the given Mixins
         *
         * @param bmp the or linked Mixin id's
         * @return true if all given Mixins are used, false otherwise
         */
        virtual bool usesMixin(int bmp) = 0;
        ~IMixinUser() = default;
};

/**
 * @brief base class for Mixin users
 *
 * @tparam typename ... Mixins the list of  Mixin's to implement
 */
template<typename ... Mixins> class MixinUserTemplate;

/**
 * @brief the recursion end
 */
template <>
class MixinUserTemplate<> : public IMixinUser
{
protected:
        int getBmp()
        {
                return 0;
        }
public:
        bool usesMixin(int bmp)
        {
                return false;
        }
};

/**
 * @brief the recursion steps
 *
 * @tparam First the first Mixin to use
 * @tparam typename ... Rest the other Mixins to use
 */
template <typename First, typename ... Rest>
class MixinUserTemplate<First, Rest ...>: public First,  public MixinUserTemplate<Rest...>
{
protected:
        int getBmp()
        {
                return MixinUserTemplate<Rest...>::getBmp() + First::getBmp();
        }
public:
        bool usesMixin(int bmp)
        {
                return getBmp()&bmp;
        }
        ~MixinUserTemplate() = default;
};