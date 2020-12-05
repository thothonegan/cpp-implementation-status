cmake_minimum_required (VERSION 3.0)

project (CppImplementationStatus)

	set (CppImplementationStatus_SOURCES
		${CppImplementationStatus_SOURCE_DIR}/Private/Main.cpp
	)

	# Note that if your compiler doesnt support one of these, it automatically decays
	# So for example, the CPP20 one might actually compile as 17 if your compiler doesnt
	# support 20.

	add_executable (CppImplementationStatusCPP11
		${CppImplementationStatus_SOURCES}
	)
	set_property (TARGET CppImplementationStatusCPP11 PROPERTY CXX_STANDARD 11)

	add_executable (CppImplementationStatusCPP14
		${CppImplementationStatus_SOURCES}
	)
	set_property (TARGET CppImplementationStatusCPP14 PROPERTY CXX_STANDARD 14)

	add_executable (CppImplementationStatusCPP17
		${CppImplementationStatus_SOURCES}
	)
	set_property (TARGET CppImplementationStatusCPP17 PROPERTY CXX_STANDARD 17)

	add_executable (CppImplementationStatusCPP20
		${CppImplementationStatus_SOURCES}
	)
	set_property (TARGET CppImplementationStatusCPP20 PROPERTY CXX_STANDARD 20)
