/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 07/07/2022-10:39.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include "python/wrappers/examples_lib/examples_pygen.h"

namespace py = pybind11;

void bindExamples(py::module& m) {
    py::module_ misc = m.def_submodule("misc", "misc");

    py::module_ misc_std_utils = misc.def_submodule("std_utils", "std_utils");

    bindExamplesLibMiscStdUtilsPygen(misc_std_utils);
    py::module_ containers = m.def_submodule("containers", "containers");

    py::module_ containers_map = containers.def_submodule("map", "map");

    bindExamplesLibContainersMapPygen(containers_map);
    py::module_ containers_nested_containers = containers.def_submodule("nested_containers", "nested_containers");

    bindExamplesLibContainersNestedContainersPygen(containers_nested_containers);
    py::module_ containers_pair = containers.def_submodule("pair", "pair");

    bindExamplesLibContainersPairPygen(containers_pair);
    py::module_ containers_vector = containers.def_submodule("vector", "vector");

    bindExamplesLibContainersVectorPygen(containers_vector);
    py::module_ enums = m.def_submodule("enums", "enums");

    py::module_ enums_color = enums.def_submodule("color", "color");

    bindExamplesLibEnumsColorPygen(enums_color);
    py::module_ enums_frame = enums.def_submodule("frame", "frame");

    bindExamplesLibEnumsFramePygen(enums_frame);
    py::module_ enums_logging = enums.def_submodule("logging", "logging");

    bindExamplesLibEnumsLoggingPygen(enums_logging);
    py::module_ extra = m.def_submodule("extra", "extra");

    py::module_ extra_object = extra.def_submodule("object", "object");

    bindExamplesLibExtraObjectPygen(extra_object);
    py::module_ extra_object_usage = extra.def_submodule("object_usage", "object_usage");

    bindExamplesLibExtraObjectUsagePygen(extra_object_usage);
    py::module_ forward_decl = m.def_submodule("forward_decl", "forward_decl");

    py::module_ forward_decl_student = forward_decl.def_submodule("student", "student");

    bindExamplesLibForwardDeclStudentPygen(forward_decl_student);
    py::module_ forward_decl_teacher = forward_decl.def_submodule("teacher", "teacher");

    bindExamplesLibForwardDeclTeacherPygen(forward_decl_teacher);
    py::module_ functionals = m.def_submodule("functionals", "functionals");

    py::module_ functionals_functional_example = functionals.def_submodule("functional_example", "functional_example");

    bindExamplesLibFunctionalsFunctionalExamplePygen(functionals_functional_example);
    py::module_ getters = m.def_submodule("getters", "getters");

    py::module_ getters_fruits = getters.def_submodule("fruits", "fruits");

    bindExamplesLibGettersFruitsPygen(getters_fruits);
    py::module_ getters_number = getters.def_submodule("number", "number");

    bindExamplesLibGettersNumberPygen(getters_number);
    py::module_ getters_person = getters.def_submodule("person", "person");

    bindExamplesLibGettersPersonPygen(getters_person);
    py::module_ simple_task = m.def_submodule("simple.task", "simple.task");

    py::module_ simple_task_task = simple_task.def_submodule("task", "task");

    bindExamplesLibSimpleTaskTaskPygen(simple_task_task);
    py::module_ simple = m.def_submodule("simple", "simple");

    py::module_ simple_project = simple.def_submodule("project", "project");

    bindExamplesLibSimpleProjectPygen(simple_project);
    py::module_ simple_root = simple.def_submodule("root", "root");

    bindExamplesLibSimpleRootPygen(simple_root);
    py::module_ globs = m.def_submodule("globs", "globs");

    py::module_ globs_utils = globs.def_submodule("utils", "utils");

    bindExamplesLibGlobsUtilsPygen(globs_utils);
    py::module_ globs_primitiveDefaults = globs.def_submodule("primitiveDefaults", "primitiveDefaults");

    bindExamplesLibGlobsPrimitivedefaultsPygen(globs_primitiveDefaults);
    py::module_ globs_complexDefaults = globs.def_submodule("complexDefaults", "complexDefaults");

    bindExamplesLibGlobsComplexdefaultsPygen(globs_complexDefaults);
    py::module_ globs_customArgUtils = globs.def_submodule("customArgUtils", "customArgUtils");

    bindExamplesLibGlobsCustomargutilsPygen(globs_customArgUtils);
    py::module_ globs_templateOverloadedUtils = globs.def_submodule("templateOverloadedUtils", "templateOverloadedUtils");

    bindExamplesLibGlobsTemplateoverloadedutilsPygen(globs_templateOverloadedUtils);
    py::module_ hashing = m.def_submodule("hashing", "hashing");

    py::module_ hashing_objects = hashing.def_submodule("objects", "objects");

    bindExamplesLibHashingObjectsPygen(hashing_objects);
    py::module_ inheritance = m.def_submodule("inheritance", "inheritance");

    py::module_ inheritance_animal = inheritance.def_submodule("animal", "animal");

    bindExamplesLibInheritanceAnimalPygen(inheritance_animal);
    py::module_ inheritance_mammals = m.def_submodule("inheritance.mammals", "inheritance.mammals");

    py::module_ inheritance_mammals_animal = inheritance_mammals.def_submodule("animal", "animal");

    bindExamplesLibInheritanceMammalsAnimalPygen(inheritance_mammals_animal);
    py::module_ inheritance_base = inheritance.def_submodule("base", "base");

    bindExamplesLibInheritanceBasePygen(inheritance_base);
    py::module_ inheritance_vehicle = inheritance.def_submodule("vehicle", "vehicle");

    bindExamplesLibInheritanceVehiclePygen(inheritance_vehicle);
    py::module_ inheritance_bicycle = inheritance.def_submodule("bicycle", "bicycle");

    bindExamplesLibInheritanceBicyclePygen(inheritance_bicycle);
    py::module_ inheritance_car = inheritance.def_submodule("car", "car");

    bindExamplesLibInheritanceCarPygen(inheritance_car);
    py::module_ inheritance_date = inheritance.def_submodule("date", "date");

    bindExamplesLibInheritanceDatePygen(inheritance_date);
    py::module_ inheritance_datetime = inheritance.def_submodule("datetime", "datetime");

    bindExamplesLibInheritanceDatetimePygen(inheritance_datetime);
    py::module_ inheritance_doctor = inheritance.def_submodule("doctor", "doctor");

    bindExamplesLibInheritanceDoctorPygen(inheritance_doctor);
    py::module_ inheritance_parallelogram = inheritance.def_submodule("parallelogram", "parallelogram");

    bindExamplesLibInheritanceParallelogramPygen(inheritance_parallelogram);
    py::module_ inheritance_rectangle = inheritance.def_submodule("rectangle", "rectangle");

    bindExamplesLibInheritanceRectanglePygen(inheritance_rectangle);
    py::module_ inheritance_rhombus = inheritance.def_submodule("rhombus", "rhombus");

    bindExamplesLibInheritanceRhombusPygen(inheritance_rhombus);
    py::module_ inheritance_square = inheritance.def_submodule("square", "square");

    bindExamplesLibInheritanceSquarePygen(inheritance_square);
    py::module_ inheritance_symbol = inheritance.def_submodule("symbol", "symbol");

    bindExamplesLibInheritanceSymbolPygen(inheritance_symbol);
    py::module_ inheritance_usage = inheritance.def_submodule("usage", "usage");

    bindExamplesLibInheritanceUsagePygen(inheritance_usage);
    py::module_ misc_size_buffer = misc.def_submodule("size_buffer", "size_buffer");

    bindExamplesLibMiscSizeBufferPygen(misc_size_buffer);
    py::module_ misc_yaml_example = misc.def_submodule("yaml_example", "yaml_example");

    bindExamplesLibMiscYamlExamplePygen(misc_yaml_example);
    py::module_ nested_types = m.def_submodule("nested_types", "nested_types");

    py::module_ nested_types_list = nested_types.def_submodule("list", "list");

    bindExamplesLibNestedTypesListPygen(nested_types_list);
    py::module_ nested_types_usage = m.def_submodule("nested_types.usage", "nested_types.usage");

    py::module_ nested_types_usage_list_usage = nested_types_usage.def_submodule("list_usage", "list_usage");

    bindExamplesLibNestedTypesUsageListUsagePygen(nested_types_usage_list_usage);
    py::module_ nullables = m.def_submodule("nullables", "nullables");

    py::module_ nullables_nullable_utils = nullables.def_submodule("nullable_utils", "nullable_utils");

    bindExamplesLibNullablesNullableUtilsPygen(nullables_nullable_utils);
    py::module_ operators = m.def_submodule("operators", "operators");

    py::module_ operators_counter = operators.def_submodule("counter", "counter");

    bindExamplesLibOperatorsCounterPygen(operators_counter);
    py::module_ operators_intarray = operators.def_submodule("intarray", "intarray");

    bindExamplesLibOperatorsIntarrayPygen(operators_intarray);
    py::module_ optionals = m.def_submodule("optionals", "optionals");

    py::module_ optionals_optionals = optionals.def_submodule("optionals", "optionals");

    bindExamplesLibOptionalsOptionalsPygen(optionals_optionals);
    py::module_ overloads = m.def_submodule("overloads", "overloads");

    py::module_ overloads_employee = overloads.def_submodule("employee", "employee");

    bindExamplesLibOverloadsEmployeePygen(overloads_employee);
    py::module_ overloads_utils = overloads.def_submodule("utils", "utils");

    bindExamplesLibOverloadsUtilsPygen(overloads_utils);
    py::module_ rv_policies = m.def_submodule("rv_policies", "rv_policies");

    py::module_ rv_policies_keep_alive_policy = rv_policies.def_submodule("keep_alive_policy", "keep_alive_policy");

    bindExamplesLibRvPoliciesKeepAlivePolicyPygen(rv_policies_keep_alive_policy);
    py::module_ rv_policies_return_value_policies = rv_policies.def_submodule("return_value_policies", "return_value_policies");

    bindExamplesLibRvPoliciesReturnValuePoliciesPygen(rv_policies_return_value_policies);
    py::module_ shared_ptr = m.def_submodule("shared_ptr", "shared_ptr");

    py::module_ shared_ptr_shared_ptr = shared_ptr.def_submodule("shared_ptr", "shared_ptr");

    bindExamplesLibSharedPtrSharedPtrPygen(shared_ptr_shared_ptr);
    py::module_ shared_ptr_shared_ptr_symbol = shared_ptr.def_submodule("shared_ptr_symbol", "shared_ptr_symbol");

    bindExamplesLibSharedPtrSharedPtrSymbolPygen(shared_ptr_shared_ptr_symbol);
    py::module_ simple_holder = simple.def_submodule("holder", "holder");

    bindExamplesLibSimpleHolderPygen(simple_holder);
    py::module_ simple_path = simple.def_submodule("path", "path");

    bindExamplesLibSimplePathPygen(simple_path);
    py::module_ templates = m.def_submodule("templates", "templates");

    py::module_ templates_addressable = templates.def_submodule("addressable", "addressable");

    bindExamplesLibTemplatesAddressablePygen(templates_addressable);
    py::module_ templates_array = templates.def_submodule("array", "array");

    bindExamplesLibTemplatesArrayPygen(templates_array);
    py::module_ templates_component = templates.def_submodule("component", "component");

    bindExamplesLibTemplatesComponentPygen(templates_component);
    py::module_ templates_container = templates.def_submodule("container", "container");

    bindExamplesLibTemplatesContainerPygen(templates_container);
    py::module_ templates_pair = templates.def_submodule("pair", "pair");

    bindExamplesLibTemplatesPairPygen(templates_pair);
    py::module_ templates_stack = templates.def_submodule("stack", "stack");

    bindExamplesLibTemplatesStackPygen(templates_stack);
    py::module_ templates_stack_usage = templates.def_submodule("stack_usage", "stack_usage");

    bindExamplesLibTemplatesStackUsagePygen(templates_stack_usage);
    py::module_ templates_my_stack = templates.def_submodule("my_stack", "my_stack");

    bindExamplesLibTemplatesMyStackPygen(templates_my_stack);
    py::module_ templates_template_methods = templates.def_submodule("template_methods", "template_methods");

    bindExamplesLibTemplatesTemplateMethodsPygen(templates_template_methods);
    py::module_ templates_value = templates.def_submodule("value", "value");

    bindExamplesLibTemplatesValuePygen(templates_value);
    py::module_ templates_wrapper = templates.def_submodule("wrapper", "wrapper");

    bindExamplesLibTemplatesWrapperPygen(templates_wrapper);
    py::module_ typedefs = m.def_submodule("typedefs", "typedefs");

    py::module_ typedefs_queue_int = typedefs.def_submodule("queue_int", "queue_int");

    bindExamplesLibTypedefsQueueIntPygen(typedefs_queue_int);
    py::module_ typedefs_queue_int_shared = typedefs.def_submodule("queue_int_shared", "queue_int_shared");

    bindExamplesLibTypedefsQueueIntSharedPygen(typedefs_queue_int_shared);
}
