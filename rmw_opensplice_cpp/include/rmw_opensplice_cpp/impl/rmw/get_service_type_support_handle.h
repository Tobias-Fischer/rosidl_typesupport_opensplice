
#ifndef __rmw__get_service_type_support_handle__h__
#define __rmw__get_service_type_support_handle__h__

#include "rosidl_typesupport_opensplice_cpp/ServiceTypeSupport.h"

namespace rmw
{
template<typename T>
const rosidl_generator_cpp::ServiceTypeSupportHandle& get_service_type_support_handle()
{
  return rmw_opensplice_cpp::get_service_type_support_handle<T>();
}

}  // namespace rmw

#endif  // __rmw__get_service_type_support_handle__h__
