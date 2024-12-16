
#ifdef EMBER_STATIC
    #define EMBER_API
#else
    #ifdef EMBER_EXPORT
        #define EMBER_API __declspec(dllexport)
    #else
        #define EMBER_API __declspec(dllimport)
    #endif
#endif

