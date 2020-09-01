/**
 * comments
 * 
 * __API__
 * kotlin.file: utils
 * module: pi.xxx 
 * kotlin.prefix: PI
 */
namespace pi::utils {
    /**
     * commants
     * 
     * __API__
     * gen: class
     * module: pi.xxx 
     * shared_ref: False
     */
    struct Example
    {
        /**
         * commants
         * 
         * __API__
         * gen: enum
         * module: pi.xxx.Example 
         * swift.name: ExampleType
         */
        enum class Type { A, B, C };



        /**
         * commants
         * 
         * __API__
         * gen: constructor
         * 
         */
        Example(int& x, std::string name = "XXX");

        /**
         * commants
         * 
         * __API__
         * gen: method
         */
        Type f(Type t, int i =10, char* test = "XXX");

        /**
         * commants
         * 
         * __API__
         * gen: method
         */
        int get_attribute(char* test = "XXX");
    };
    /**
     * commants
     * 
     * __API__
     * gen: enum
     * module: pi.xxx
     * swift.name: ExampleType
     */
    enum class Type2 { A2, B2, C2 };
}
