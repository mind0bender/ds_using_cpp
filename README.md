# ds_using_cpp

### difference b/w new keyword and malloc:

1. - new is an operator which is used to allocate mem dynamically.
   - malloc is a function and is also used to allocate mem dynamically.
1. - in case of new operator stl are not required.
   - in case of malloc stdlib.h is required.
1. - compiler automatically calcs the required mem size at run time.
   - mem size is calculated manually.
1. - type casting is not required bcz new operator returns pointer of same data type.
   - type casting is mandatory bcz malloc fn returns void ptr.
1. - mem size can not be modified using realloc.
   - mem size can be modified using realloc.
