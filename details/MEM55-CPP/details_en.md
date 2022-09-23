#### Abstract
The program has replaced the function for a dynamic memory allocation or a deallocation that does not meet the semantic requirements specified by the C++ standard.

#### Explanation
The replacement function for allocation contains an external declaration that may return nullptr. The function \"new\" will instead return a nullptr instead of the supposed \"std::bad_alloc\". 
