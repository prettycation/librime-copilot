// Fix for MSVC missing std::hardware_destructive_interface_size
namespace std {
    static constexpr unsigned __int64 hardware_destructive_interface_size = 64;
    static constexpr unsigned __int64 hardware_constructive_interference_size = 64;
}
