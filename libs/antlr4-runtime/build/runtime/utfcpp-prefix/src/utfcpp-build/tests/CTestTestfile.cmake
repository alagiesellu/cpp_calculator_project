# CMake generated Testfile for 
# Source directory: /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests
# Build directory: /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(negative_test "negative" "/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/test_data/utf8_invalid.txt")
set_tests_properties(negative_test PROPERTIES  _BACKTRACE_TRIPLES "/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;37;add_test;/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;0;")
add_test(cpp11_test "cpp11")
set_tests_properties(cpp11_test PROPERTIES  _BACKTRACE_TRIPLES "/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;38;add_test;/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;0;")
add_test(api_test "apitests")
set_tests_properties(api_test PROPERTIES  _BACKTRACE_TRIPLES "/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;39;add_test;/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;0;")
add_test(noexceptions_test "noexceptionstests")
set_tests_properties(noexceptions_test PROPERTIES  _BACKTRACE_TRIPLES "/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;40;add_test;/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/tests/CMakeLists.txt;0;")
