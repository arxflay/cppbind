/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/05/2022-07:36.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/globs/c_primitiveDefaults.h"
#include "cxx/globs/utils.hpp"
#include "cxx/enums/color.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;


unsigned int _func__optionalColor(unsigned int c, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxc = static_cast<iegen::example::Color>(c);
    try {
        const auto& result = ::optionalColor(ctocxxc);
        unsigned int cxxtocresult = static_cast<unsigned int>(result);
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    unsigned int result {};
    return result;
}

char* _Nonnull _func__optionalString(char* _Nonnull optionalStr, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxoptionalStr = std::string(optionalStr);
    free(optionalStr);
    try {
        const auto& result = ::optionalString(ctocxxoptionalStr);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

int _func__optionalInt(int i, IEGenCObject* _Nonnull iegen_err) {
    
    try {
        const auto& result = ::optionalInt(i);
        
        return result;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

