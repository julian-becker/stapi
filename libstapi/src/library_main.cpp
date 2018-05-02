#include <libstapi/export.h>
#include <iostream>

LIBSTAPI_API int libstapi_api()
{
    std::cout << "hello from libstapi" << std::endl;
    return 42;
}
