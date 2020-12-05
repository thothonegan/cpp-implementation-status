

// Generated from main.cpp.erb on 2020-12-05

#include <iostream>

// compiler detection
// must define:
// COMPILER_NAME
// COMPILER_VERSION
// HAS_VERSION

#if defined(__clang__)
	#define COMPILER_NAME "Clang"
	#define COMPILER_VERSION __clang_version__
	#if __has_include(<version>)
		#define HAS_VERSION 1
	#else
		#define HAS_VERSION 0
	#endif
#elif defined(__GNUC__)
	#define COMPILER_NAME "GCC"
	#define COMPILER_VERSION __VERSION__

	#if __cplusplus >= 202002
		#define HAS_VERSION 1
	#else
		#define HAS_VERSION 0
	#endif
#else
	#define COMPILER_NAME "Unknown"
	#define COMPILER_VERSION "Unknown"

	#if __cplusplus >= 202002
		#define HAS_VERSION 1
	#else
		#define HAS_VERSION 0
	#endif
#endif

#if HAS_VERSION
	#include <version>
#else
	#include <ciso646>
#endif

#include <cstring>

#ifndef __has_cpp_attribute
	#define __has_cpp_attribute(attributeToken) 0
#endif

#define TEST_ATTRIBUTE(name, expectedValue) \
do { \
	if (__has_cpp_attribute(name) == expectedValue) { \
		available("* C++ Attribute " #name); \
	} else { \
		notAvailable("* C++ Attribute " #name); \
	} \
} while (false)

#define STRINGIFY_INTERNAL(x) #x
#define STRINGIFY(x) STRINGIFY_INTERNAL(x)

#define TEST_LANGUAGEFEATURE(name, expectedValue) \
do { \
	if (std::string(STRINGIFY(name)) == #expectedValue) { \
		available("* C++ Feature " #name); \
	} else { \
		notAvailable("* C++ Feature" #name); \
	} \
} while (false)

#define TEST_LIBFEATURE(name, expectedValue) \
do { \
	if (std::string(STRINGIFY(name)) == #expectedValue) { \
		available("* C++ Library Feature " #name ); \
	} else { \
		notAvailable("* C++ Library Feature " #name); \
	} \
} while (false)

#define COL_WIDTH 70

void available (const char* description)
{
	std::cout << description << ":";
	
	for (int i = strlen(description)+1; i < COL_WIDTH; ++i)
		std::cout << " ";

	std::cout << "available" << std::endl;
}

void notAvailable (const char* description)
{
	std::cout << description << ":";
	
	for (int i = strlen(description)+1; i < COL_WIDTH; ++i)
		std::cout << " ";

	std::cout << "---" << std::endl;
}

int main ()
{
	std::cout << "--- CPP status ---" << std::endl;
	std::cout << "Compiler: " << COMPILER_NAME << " " << COMPILER_VERSION << std::endl;
	std::cout << "Language standard: " << __cplusplus << std::endl;

	

		std::cout << std::endl;
		std::cout << "--- Language: c++11" << std::endl;

		
			TEST_ATTRIBUTE(carries_dependency, 200809);
		
			TEST_ATTRIBUTE(noreturn, 200809);
		

		
			TEST_LANGUAGEFEATURE(__cpp_alias_templates, 200704);
		
			TEST_LANGUAGEFEATURE(__cpp_attributes, 200809);
		
			TEST_LANGUAGEFEATURE(__cpp_constexpr, 200704);
		
			TEST_LANGUAGEFEATURE(__cpp_decltype, 200707);
		
			TEST_LANGUAGEFEATURE(__cpp_delegating_constructors, 200604);
		
			TEST_LANGUAGEFEATURE(__cpp_inheriting_constructors, 200802);
		
			TEST_LANGUAGEFEATURE(__cpp_initializer_lists, 200806);
		
			TEST_LANGUAGEFEATURE(__cpp_lambdas, 200907);
		
			TEST_LANGUAGEFEATURE(__cpp_nsdmi, 200809);
		
			TEST_LANGUAGEFEATURE(__cpp_range_based_for, 200907);
		
			TEST_LANGUAGEFEATURE(__cpp_raw_strings, 200710);
		
			TEST_LANGUAGEFEATURE(__cpp_ref_qualifiers, 200710);
		
			TEST_LANGUAGEFEATURE(__cpp_rvalue_references, 200610);
		
			TEST_LANGUAGEFEATURE(__cpp_static_assert, 200410);
		
			TEST_LANGUAGEFEATURE(__cpp_threadsafe_static_init, 200806);
		
			TEST_LANGUAGEFEATURE(__cpp_unicode_characters, 200704);
		
			TEST_LANGUAGEFEATURE(__cpp_unicode_literals, 200710);
		
			TEST_LANGUAGEFEATURE(__cpp_user_defined_literals, 200809);
		
			TEST_LANGUAGEFEATURE(__cpp_variadic_templates, 200704);
		

		

	

		std::cout << std::endl;
		std::cout << "--- Language: c++14" << std::endl;

		
			TEST_ATTRIBUTE(deprecated, 201309);
		

		
			TEST_LANGUAGEFEATURE(__cpp_aggregate_nsdmi, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_binary_literals, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_constexpr, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_decltype_auto, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_generic_lambdas, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_init_captures, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_return_type_deduction, 201304);
		
			TEST_LANGUAGEFEATURE(__cpp_sized_deallocation, 201309);
		
			TEST_LANGUAGEFEATURE(__cpp_variable_templates, 201304);
		

		
			TEST_LIBFEATURE(__cpp_lib_chrono_udls, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_complex_udls, 201309);
		
			TEST_LIBFEATURE(__cpp_lib_exchange_function, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_generic_associative_lookup, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_integer_sequence, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_integral_constant_callable, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_is_final, 201402);
		
			TEST_LIBFEATURE(__cpp_lib_is_null_pointer, 201309);
		
			TEST_LIBFEATURE(__cpp_lib_make_reverse_iterator, 201402);
		
			TEST_LIBFEATURE(__cpp_lib_make_unique, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_null_iterators, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_quoted_string_io, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_result_of_sfinae, 201210);
		
			TEST_LIBFEATURE(__cpp_lib_robust_nonmodifying_seq_ops, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_shared_timed_mutex, 201402);
		
			TEST_LIBFEATURE(__cpp_lib_string_udls, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_transformation_trait_aliases, 201304);
		
			TEST_LIBFEATURE(__cpp_lib_transparent_operators, 201210);
		
			TEST_LIBFEATURE(__cpp_lib_tuple_element_t, 201402);
		
			TEST_LIBFEATURE(__cpp_lib_tuples_by_type, 201304);
		

	

		std::cout << std::endl;
		std::cout << "--- Language: c++17" << std::endl;

		
			TEST_ATTRIBUTE(fallthrough, 201603);
		
			TEST_ATTRIBUTE(maybe_unused, 201603);
		

		
			TEST_LANGUAGEFEATURE(__cpp_aggregate_bases, 201603);
		
			TEST_LANGUAGEFEATURE(__cpp_aligned_new, 201606);
		
			TEST_LANGUAGEFEATURE(__cpp_capture_star_this, 201603);
		
			TEST_LANGUAGEFEATURE(__cpp_constexpr, 201603);
		
			TEST_LANGUAGEFEATURE(__cpp_deduction_guides, 201703);
		
			TEST_LANGUAGEFEATURE(__cpp_enumerator_attributes, 201411);
		
			TEST_LANGUAGEFEATURE(__cpp_fold_expressions, 201603);
		
			TEST_LANGUAGEFEATURE(__cpp_guaranteed_copy_elision, 201606);
		
			TEST_LANGUAGEFEATURE(__cpp_hex_float, 201603);
		
			TEST_LANGUAGEFEATURE(__cpp_if_constexpr, 201606);
		
			TEST_LANGUAGEFEATURE(__cpp_inheriting_constructors, 201511);
		
			TEST_LANGUAGEFEATURE(__cpp_inline_variables, 201606);
		
			TEST_LANGUAGEFEATURE(__cpp_namespace_attributes, 201411);
		
			TEST_LANGUAGEFEATURE(__cpp_noexcept_function_type, 201510);
		
			TEST_LANGUAGEFEATURE(__cpp_nontype_template_args, 201411);
		
			TEST_LANGUAGEFEATURE(__cpp_nontype_template_parameter_auto, 201606);
		
			TEST_LANGUAGEFEATURE(__cpp_range_based_for, 201603);
		
			TEST_LANGUAGEFEATURE(__cpp_static_assert, 201411);
		
			TEST_LANGUAGEFEATURE(__cpp_structured_bindings, 201606);
		
			TEST_LANGUAGEFEATURE(__cpp_template_template_args, 201611);
		
			TEST_LANGUAGEFEATURE(__cpp_variadic_using, 201611);
		

		
			TEST_LIBFEATURE(__cpp_lib_addressof_constexpr, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_allocator_traits_is_always_equal, 201411);
		
			TEST_LIBFEATURE(__cpp_lib_any, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_apply, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_array_constexpr, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_as_const, 201510);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_is_always_lock_free, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_bool_constant, 201505);
		
			TEST_LIBFEATURE(__cpp_lib_boyer_moore_searcher, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_byte, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_chrono, 201510);
		
			TEST_LIBFEATURE(__cpp_lib_chrono, 201611);
		
			TEST_LIBFEATURE(__cpp_lib_clamp, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_enable_shared_from_this, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_execution, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_filesystem, 201703);
		
			TEST_LIBFEATURE(__cpp_lib_gcd_lcm, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_hardware_interference_size, 201703);
		
			TEST_LIBFEATURE(__cpp_lib_has_unique_object_representations, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_hypot, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_incomplete_container_elements, 201505);
		
			TEST_LIBFEATURE(__cpp_lib_invoke, 201411);
		
			TEST_LIBFEATURE(__cpp_lib_is_aggregate, 201703);
		
			TEST_LIBFEATURE(__cpp_lib_is_invocable, 201703);
		
			TEST_LIBFEATURE(__cpp_lib_is_swappable, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_launder, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_logical_traits, 201510);
		
			TEST_LIBFEATURE(__cpp_lib_make_from_tuple, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_map_try_emplace, 201411);
		
			TEST_LIBFEATURE(__cpp_lib_math_special_functions, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_memory_resource, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_node_extract, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_nonmember_container_access, 201411);
		
			TEST_LIBFEATURE(__cpp_lib_not_fn, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_optional, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_parallel_algorithm, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_raw_memory_algorithms, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_sample, 201603);
		
			TEST_LIBFEATURE(__cpp_lib_scoped_lock, 201703);
		
			TEST_LIBFEATURE(__cpp_lib_shared_mutex, 201505);
		
			TEST_LIBFEATURE(__cpp_lib_shared_ptr_arrays, 201611);
		
			TEST_LIBFEATURE(__cpp_lib_shared_ptr_weak_type, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_string_view, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_to_chars, 201611);
		
			TEST_LIBFEATURE(__cpp_lib_transparent_operators, 201510);
		
			TEST_LIBFEATURE(__cpp_lib_type_trait_variable_templates, 201510);
		
			TEST_LIBFEATURE(__cpp_lib_uncaught_exceptions, 201411);
		
			TEST_LIBFEATURE(__cpp_lib_unordered_map_try_emplace, 201411);
		
			TEST_LIBFEATURE(__cpp_lib_variant, 201606);
		
			TEST_LIBFEATURE(__cpp_lib_void_t, 201411);
		

	

		std::cout << std::endl;
		std::cout << "--- Language: c++20" << std::endl;

		
			TEST_ATTRIBUTE(likely, 201803);
		
			TEST_ATTRIBUTE(no_unique_address, 201803);
		
			TEST_ATTRIBUTE(nodiscard, 201907);
		
			TEST_ATTRIBUTE(nodiscard, 201907);
		
			TEST_ATTRIBUTE(unlikely, 201803);
		

		
			TEST_LANGUAGEFEATURE(__cpp_aggregate_paren_init, 201902);
		
			TEST_LANGUAGEFEATURE(__cpp_char8_t, 201811);
		
			TEST_LANGUAGEFEATURE(__cpp_concepts, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_conditional_explicit, 201806);
		
			TEST_LANGUAGEFEATURE(__cpp_consteval, 201811);
		
			TEST_LANGUAGEFEATURE(__cpp_constexpr, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_constexpr_dynamic_alloc, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_constexpr_in_decltype, 201711);
		
			TEST_LANGUAGEFEATURE(__cpp_constinit, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_deduction_guides, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_designated_initializers, 201707);
		
			TEST_LANGUAGEFEATURE(__cpp_generic_lambdas, 201707);
		
			TEST_LANGUAGEFEATURE(__cpp_impl_coroutine, 201902);
		
			TEST_LANGUAGEFEATURE(__cpp_impl_destroying_delete, 201806);
		
			TEST_LANGUAGEFEATURE(__cpp_impl_three_way_comparison, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_init_captures, 201803);
		
			TEST_LANGUAGEFEATURE(__cpp_modules, 201907);
		
			TEST_LANGUAGEFEATURE(__cpp_nontype_template_args, 201911);
		
			TEST_LANGUAGEFEATURE(__cpp_using_enum, 201907);
		

		
			TEST_LIBFEATURE(__cpp_lib_array_constexpr, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_assume_aligned, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_flag_test, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_float, 201711);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_lock_free_type_aliases, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_ref, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_shared_ptr, 201711);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_value_initialization, 201911);
		
			TEST_LIBFEATURE(__cpp_lib_atomic_wait, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_barrier, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_bind_front, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_bit_cast, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_bitops, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_bounded_array_traits, 201902);
		
			TEST_LIBFEATURE(__cpp_lib_char8_t, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_chrono, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_concepts, 202002);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_algorithms, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_complex, 201711);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_dynamic_alloc, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_functional, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_iterator, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_memory, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_numeric, 201911);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_string, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_string_view, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_tuple, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_utility, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_constexpr_vector, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_coroutine, 201902);
		
			TEST_LIBFEATURE(__cpp_lib_destroying_delete, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_endian, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_erase_if, 202002);
		
			TEST_LIBFEATURE(__cpp_lib_execution, 201902);
		
			TEST_LIBFEATURE(__cpp_lib_format, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_generic_unordered_lookup, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_int_pow2, 202002);
		
			TEST_LIBFEATURE(__cpp_lib_integer_comparison_functions, 202002);
		
			TEST_LIBFEATURE(__cpp_lib_interpolate, 201902);
		
			TEST_LIBFEATURE(__cpp_lib_is_constant_evaluated, 201811);
		
			TEST_LIBFEATURE(__cpp_lib_is_layout_compatible, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_is_nothrow_convertible, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_is_pointer_interconvertible, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_jthread, 201911);
		
			TEST_LIBFEATURE(__cpp_lib_latch, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_list_remove_return_type, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_math_constants, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_polymorphic_allocator, 201902);
		
			TEST_LIBFEATURE(__cpp_lib_ranges, 201911);
		
			TEST_LIBFEATURE(__cpp_lib_remove_cvref, 201711);
		
			TEST_LIBFEATURE(__cpp_lib_semaphore, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_shared_ptr_arrays, 201707);
		
			TEST_LIBFEATURE(__cpp_lib_shift, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_smart_ptr_for_overwrite, 202002);
		
			TEST_LIBFEATURE(__cpp_lib_source_location, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_span, 202002);
		
			TEST_LIBFEATURE(__cpp_lib_ssize, 201902);
		
			TEST_LIBFEATURE(__cpp_lib_starts_ends_with, 201711);
		
			TEST_LIBFEATURE(__cpp_lib_string_view, 201803);
		
			TEST_LIBFEATURE(__cpp_lib_syncbuf, 201803);
		
			TEST_LIBFEATURE(__cpp_lib_three_way_comparison, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_to_address, 201711);
		
			TEST_LIBFEATURE(__cpp_lib_to_array, 201907);
		
			TEST_LIBFEATURE(__cpp_lib_type_identity, 201806);
		
			TEST_LIBFEATURE(__cpp_lib_unwrap_ref, 201811);
		

	

	return 0;
}
