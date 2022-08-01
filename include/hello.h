#pragma once


#ifdef _WIN32
  #define HELLO_EXPORT __declspec(dllexport)
#else
  #define HELLO_EXPORT
#endif

HELLO_EXPORT void hello();

HELLO_EXPORT std::string compose_message(std::string build_type, std::string extra_info);
