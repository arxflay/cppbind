/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/16/2022-10:13.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/shared_ptr/c_shared_ptr_symbol.h"
#include "cxx/shared_ptr/shared_ptr_symbol.hpp"

using namespace iegen::example;

void release_IegenExample_SignSharedImpl(IEGenCObject cself, bool owner) {
    if (owner) {
        if (strcmp(cself.type, "iegen::example::SignShared") == 0)
            delete static_cast<std::shared_ptr<iegen::example::SignShared>*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::DigitShared") == 0)
            delete static_cast<std::shared_ptr<iegen::example::DigitShared>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

std::shared_ptr<iegen::example::SignShared> downcast_IegenExample_SignShared(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, "iegen::example::SignShared") == 0)
            return *static_cast<std::shared_ptr<iegen::example::SignShared>*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, "iegen::example::DigitShared") == 0)
            return *static_cast<std::shared_ptr<iegen::example::DigitShared>*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

IEGenCObject create_IegenExample_SignShared(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::SignShared();
        return {strdup("iegen::example::SignShared"), new std::shared_ptr<iegen::example::SignShared>(this_object)};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_SignShared_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::example::SignShared> ctocxxcself;
    ctocxxcself = downcast_IegenExample_SignShared(cself);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

void release_IegenExample_TextShared(IEGenCObject cself, bool owner) {
    if (owner) {
        if (strcmp(cself.type, "iegen::example::TextShared") == 0)
            delete static_cast<std::shared_ptr<iegen::example::TextShared>*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::DigitShared") == 0)
            delete static_cast<std::shared_ptr<iegen::example::DigitShared>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

std::shared_ptr<iegen::example::TextShared> downcast_IegenExample_TextShared(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, "iegen::example::TextShared") == 0)
            return *static_cast<std::shared_ptr<iegen::example::TextShared>*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, "iegen::example::DigitShared") == 0)
            return *static_cast<std::shared_ptr<iegen::example::DigitShared>*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

IEGenCObject create_IegenExample_TextShared(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::TextShared();
        return {strdup("iegen::example::TextShared"), new std::shared_ptr<iegen::example::TextShared>(this_object)};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_TextShared_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::example::TextShared> ctocxxcself;
    ctocxxcself = downcast_IegenExample_TextShared(cself);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

IEGenCObject create_IegenExample_DigitShared(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::DigitShared();
        return {strdup("iegen::example::DigitShared"), new std::shared_ptr<iegen::example::DigitShared>(this_object)};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_DigitShared_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::example::DigitShared> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::DigitShared>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

void release_IegenExample_SymbolUsageShared(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_SymbolUsageShared(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::SymbolUsageShared();
        return {strdup("iegen::example::SymbolUsageShared"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_SymbolUsageShared_1(IEGenCObject d, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::example::DigitShared> ctocxxd;
    ctocxxd = *static_cast<std::shared_ptr<iegen::example::DigitShared>*>(d.ptr);
    try {
        auto this_object = new iegen::example::SymbolUsageShared(ctocxxd);
        return {strdup("iegen::example::SymbolUsageShared"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_SymbolUsageShared_getTextType(IEGenCObject cself, IEGenCObject t, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::example::TextShared> ctocxxt;
    ctocxxt = downcast_IegenExample_TextShared(t);
  
    auto ctocxxcself = static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getTextType(ctocxxt);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_IegenExample_SymbolUsageShared_getSignType(IEGenCObject cself, IEGenCObject s, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::example::SignShared> ctocxxs;
    ctocxxs = downcast_IegenExample_SignShared(s);
  
    auto ctocxxcself = static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getSignType(ctocxxs);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

int _func_IegenExample_SymbolUsageShared_getTextId(IEGenCObject cself, IEGenCObject t, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::example::TextShared> ctocxxt;
    ctocxxt = downcast_IegenExample_TextShared(t);
  
    auto ctocxxcself = static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getTextId(ctocxxt);
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

int _func_IegenExample_SymbolUsageShared_getSignId(IEGenCObject cself, IEGenCObject s, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::example::SignShared> ctocxxs;
    ctocxxs = downcast_IegenExample_SignShared(s);
  
    auto ctocxxcself = static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getSignId(ctocxxs);
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

IEGenCObject _func_IegenExample_SymbolUsageShared_getTextPtr(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getTextPtr();
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;

        auto& arg_pointee_result = *result.get();
        const char * name_result = typeid(arg_pointee_result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::TextShared");
        }
        cxxtocresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<iegen::example::TextShared>(result)));
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_IegenExample_SymbolUsageShared_getSignPtr(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::SymbolUsageShared*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getSignPtr();
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;

        auto& arg_pointee_result = *result.get();
        const char * name_result = typeid(arg_pointee_result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::SignShared");
        }
        cxxtocresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<iegen::example::SignShared>(result)));
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

