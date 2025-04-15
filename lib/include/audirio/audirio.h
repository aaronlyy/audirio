#pragma once

#ifdef _WIN32
  #ifdef AUDIRIO_EXPORTS
    #define AUDIRIO_API __declspec(dllexport)
  #else
    #define AUDIRIO_API __declspec(dllimport)
  #endif
#else
  #define AUDIRIO_API
#endif

namespace audirio {
    class AUDIRIO_API Audirio {
    public:
        int dummy();
    };
}
