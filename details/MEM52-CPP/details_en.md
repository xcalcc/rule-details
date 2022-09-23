#### Abstract
Default allocators do not check results of allocation if it produces an exception. Any error has to be caught and handled.

#### Explanation
One of the most common memory alocation operators used in C++ is ::operator new(std::size_t) which may throw a std::bad_alloc when allocation fails. New operator is also overloaded with the non-throwing version which is ::operator new(std::size_t, const std::nothrow_t&) which instead of throwing exceptions will give a nullptr instead. Whichever new operator is used, there should be a check for either the corresponding error. Exceptions must be handled with catch, while nullptr should be checked accordingly, to avoid the abrupt termination of a program.
