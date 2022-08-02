#pragma once

#include <string>

#ifdef _WIN32
  #define HELLO_EXPORT __declspec(dllexport)
#else
  #define HELLO_EXPORT
#endif

HELLO_EXPORT void hello();

HELLO_EXPORT std::string compose_message(const std::string& build_type, const std::string& extra_info);
