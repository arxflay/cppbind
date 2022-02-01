/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-10:17.
 * Please do not change it manually.
 */

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/enums/c_frame.h"
#include "cxx/enums/frame.hpp"
#include "cxx/enums/color.hpp"

using namespace iegen::example;

void release_Frame(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Frame*>(cself.ptr);
    }
}

IEGenCObject create_Frame(IEGenCErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Frame();
        return {strdup("iegen::example::Frame"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}
unsigned int _prop_get_Frame_backgroundColor(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    const auto& result = ctocxxcself->backgroundColor;
    unsigned int cxxtocresult = static_cast<unsigned int>(result);
    return cxxtocresult;
}
void _prop_set_Frame_backgroundColor(IEGenCObject cself, unsigned int backgroundColor){
    
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    auto ctocxxbackgroundColor = static_cast<iegen::example::Color>(backgroundColor);
    ctocxxcself->backgroundColor = ctocxxbackgroundColor;
}

unsigned int _prop_get_Frame_backgroundColorShade(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    const auto& result = ctocxxcself->backgroundColorShade;
    unsigned int cxxtocresult = static_cast<unsigned int>(result);
    return cxxtocresult;
}
void _prop_set_Frame_backgroundColorShade(IEGenCObject cself, unsigned int backgroundColorShade){
    
    auto ctocxxcself = static_cast<iegen::example::Frame*>(cself.ptr);
    auto ctocxxbackgroundColorShade = static_cast<iegen::example::ColorShade>(backgroundColorShade);
    ctocxxcself->backgroundColorShade = ctocxxbackgroundColorShade;
}

