#ifndef many_template_getter_hpp
#define many_template_getter_hpp
#include <utility>

namespace iegen::example {
// [example]
/**
 * __API__
 * gen: class
 * package: getters
 * swift.include: CWrapper
 */
struct Foo  {
    /**
     * __API__
     * gen: property_setter
     */
    int value;

    Foo() : value(0){};

};


/**
 * __API__
 * gen: class
 * package: getters
 */
struct Bar  {
    /**
     * __API__
     * gen: property_setter
     */
    int value;

    Bar() : value(0){};

};

/**
 * An example class containing template getters that depend on more than one type.
 *
 * __API__
 * gen: class
 * package: getters
 */
class ManyTypeTemplateGetter  {
    public:
    /**
     * Default constructor.
     *
     * __API__
     * gen: constructor
     */
    ManyTypeTemplateGetter() {};

    /**
     * Template getter example with return type from more than one template argument.
     * As we don´t specify a name here then type names(Foo and Bar) will be used with appropriate naming convention.
     * E.g. for python will be foo_bar.
     *
     * __API__
     * gen: getter
     * throws: no_throw
     * template:
     *   T:
     *     - type: iegen::example::Foo
     *   U:
     *     - type: iegen::example::Bar
     */
    template <typename T, typename U>
    std::pair<T, U> pair() const {
        T t;
        U u;
        return std::make_pair(t, u);
    }

    /**
     * Template getter example with return type from more than one template argument.
     * Giving a name here is important as we have another template getter that can have the same types.
     * If we won´t specify the name here then both will have the same name retrieved from types names
     * thus this one will override the previous one or the code won´t compile.
     * In this case we can specify name only for the first arguments, as for the second we have one option and this way all cases will be covered.
     *
     * __API__
     * gen: getter
     * throws: no_throw
     * template:
     *   T:
     *     - type: iegen::example::Foo
     *       name: foo_bar_pair
     *     - type: iegen::example::Bar
     *       name: bar_bar_pair
     *   U:
     *     - type: iegen::example::Bar
     */
    template <typename T, typename U>
    std::pair<T, U> pairWithType() const {
        T t;
        U u;
        return std::make_pair(t, u);
    }
};
// [example]
}

#endif