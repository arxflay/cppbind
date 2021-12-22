/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/22/2021-10:56.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/globs/c_GlobUtils.h"
#include "cxx/globs/utils.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"
#include "cxx/enums/color.hpp"



char* _Nonnull _func__concat(char* _Nonnull str1, char* _Nonnull str2, ErrorObj* _Nonnull err) {
    auto ctocxxstr1 = std::string(str1);
    free(str1);
    auto ctocxxstr2 = std::string(str2);
    free(str2);
    try {
        const auto& result = ::concat(ctocxxstr1, ctocxxstr2);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

char* _Nonnull _func__concat_1(char* _Nonnull str1, char* _Nonnull str2, char* _Nonnull str3, ErrorObj* _Nonnull err) {
    auto ctocxxstr1 = std::string(str1);
    free(str1);
    auto ctocxxstr2 = std::string(str2);
    free(str2);
    auto ctocxxstr3 = std::string(str3);
    free(str3);
    try {
        const auto& result = ::concat(ctocxxstr1, ctocxxstr2, ctocxxstr3);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

int _func__maxInt(int arg0, int arg1, ErrorObj* _Nonnull err) {
    
    
    try {
        const auto& result = ::max<int>(arg0, arg1);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result{};
    return result;
}

char* _Nonnull _func__maxString(char* _Nonnull arg0, char* _Nonnull arg1, ErrorObj* _Nonnull err) {
    auto ctocxxarg0 = std::string(arg0);
    free(arg0);
    auto ctocxxarg1 = std::string(arg1);
    free(arg1);
    try {
        const auto& result = ::max<std::string>(ctocxxarg0, ctocxxarg1);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

CDataPair _func_IegenExample_makePairProjectProject(CObject arg0, CObject arg1, ErrorObj* _Nonnull err) {
    
    auto ctocxxarg0 = static_cast<iegen::example::Project*>(arg0.ptr);
    
    auto ctocxxarg1 = static_cast<iegen::example::Project*>(arg1.ptr);
    try {
        const auto& result = iegen::example::makePair<iegen::example::Project, iegen::example::Project>(ctocxxarg0, ctocxxarg1);
        auto _first_data_cxxtocresult = new CObject;
        auto _second_data_cxxtocresult = new CObject;
        const auto& first_result = result.first;
        const auto& second_result = result.second;

        char* type_first_result = strdup("iegen::example::Project");
        CObject cxxtocfirst_result = {type_first_result, const_cast<iegen::example::Project*>(first_result)};

        char* type_second_result = strdup("iegen::example::Project");
        CObject cxxtocsecond_result = {type_second_result, const_cast<iegen::example::Project*>(second_result)};
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        CDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result{};
    return result;
}

CDataPair _func_IegenExample_makePairRootProject(CObject arg0, CObject arg1, ErrorObj* _Nonnull err) {
    
    auto ctocxxarg0 = static_cast<iegen::example::Root*>(arg0.ptr);
    
    auto ctocxxarg1 = static_cast<iegen::example::Project*>(arg1.ptr);
    try {
        const auto& result = iegen::example::makePair<iegen::example::Root, iegen::example::Project>(ctocxxarg0, ctocxxarg1);
        auto _first_data_cxxtocresult = new CObject;
        auto _second_data_cxxtocresult = new CObject;
        const auto& first_result = result.first;
        const auto& second_result = result.second;

        char* type_first_result = strdup("iegen::example::Root");
        CObject cxxtocfirst_result = {type_first_result, const_cast<iegen::example::Root*>(first_result)};

        char* type_second_result = strdup("iegen::example::Project");
        CObject cxxtocsecond_result = {type_second_result, const_cast<iegen::example::Project*>(second_result)};
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        CDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result{};
    return result;
}

unsigned int _func__optionalColor(unsigned int c, ErrorObj* _Nonnull err) {
    auto ctocxxc = (iegen::example::Color)c;
    try {
        const auto& result = ::optionalColor(ctocxxc);
        unsigned int cxxtocresult = (unsigned int)result;
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    unsigned int result{};
    return result;
}

CObject _func__optionalFDPtr(CObject project, ErrorObj* _Nonnull err) {
    
    auto ctocxxproject = static_cast<iegen::example::Project*>(project.ptr);
    try {
        const auto& result = ::optionalFDPtr(ctocxxproject);
        
        char* type_result = strdup("iegen::example::Project");
        CObject cxxtocresult = {type_result, const_cast<iegen::example::Project*>(result)};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

void _func__doNothing(ErrorObj* _Nonnull err) {
    try {
        doNothing();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

int _func__optionalInt(int i, ErrorObj* _Nonnull err) {
    
    try {
        const auto& result = ::optionalInt(i);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result{};
    return result;
}
