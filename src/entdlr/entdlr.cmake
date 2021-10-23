set (ENTDLR_ROOT "${CMAKE_CURRENT_LIST_DIR}/../")

if (WIN32)
    set (ENTDLR_EXECUTABLE "${ENTDLR_ROOT}/bin/entdlr.exe")
else ()
    set (ENTDLR_EXECUTABLE "${ENTDLR_ROOT}/bin/entdlr")
endif ()

# Make ENTDLR parse a file
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FILE_TARGET DefinitionFile TemplateFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    get_filename_component (Template_Filename ${TemplateFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})
    string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})

    # parse option arguments
    set (includeOption "")
    if (NOT "${ARGN}" STREQUAL "")
        set (includeOption "-i${ARNG}")
    endif ()

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} ${DefinitionFile} "-o" "${OutputFile}" "${includeOption}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DefinitionFile} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR](${Name})"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a file with a provided wren and confing json
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FULL_FILE_TARGET DefinitionFile TemplateFile WrenFile JsonFile OutputFile)
    # get a project name from it
    get_filename_component (Filename ${DefinitionFile} NAME)
    get_filename_component (Template_Filename ${TemplateFile} NAME)
    string (REGEX REPLACE "\(.*\).fbs" "\\1" Name ${Filename})
    string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})

    # parse option arguments
    set (includeOption -i"${ARGN}")
    if (NOT "${ARGN}" STREQUAL "")
        set (includeOption "-i${ARGN}")
    endif ()

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} "-o" "${OutputFile}" "${includeOption}" "-w" "${WrenFile}" "-c" "${JsonFile}" "${TemplateFile}" "${DefinitionFile}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DefinitionFile} ${WrenFile} ${JsonFile} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR](${Name})"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        set (ENTDLR_${Name}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${Name}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_DIR_TARGET TargetName DefinitionDir TemplateFile OutputFile)
    # get a project name from it
    get_filename_component (Template_Filename ${TemplateFile} NAME)
    string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})

    # parse option arguments
    set (includeOption "")
    if (NOT "${ARGN}" STREQUAL "")
        set (includeOption "-i${ARGN}")
    endif ()

    FILE (GLOB_RECURSE DEF_FILES "${DefinitionDir}/*.fbs")

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "${includeOption}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR_DIR](${TargetName})"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()

# Make ENTDLR parse a dir with a provided wren and config json
# Setting the variable "appendTemplateFilename" to true will append the template name to the output variable name
macro (ENTDLR_FULL_DIR_TARGET TargetName DefinitionDir TemplateFile WrenFile JsonFile OutputFile)
    # get a project name from it
    get_filename_component (Template_Filename ${TemplateFile} NAME)
    string (REGEX REPLACE "\(.*\).tmpl" "\\1" Template_Filename ${Template_Filename})

    # parse option arguments
    set (includeOption "")
    if (NOT "${ARGN}" STREQUAL "")
        set (includeOption "-i${ARGN}")
    endif ()

    FILE (GLOB_RECURSE DEF_FILES "${DefinitionDir}/*.fbs")

    add_custom_command (
        OUTPUT ${OutputFile}
        COMMAND ${ENTDLR_EXECUTABLE} ${TemplateFile} "-d" "${DefinitionDir}" "-o" "${OutputFile}" "-w" "${WrenFile}" "-c" "${JsonFile}" "${includeOption}"
        VERBATIM
        DEPENDS ${TemplateFile} ${DEF_FILES} ${ENTDLR_EXECUTABLE}
        COMMENT "[ENTDLR](${TargetName})"
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    )

    # Applying the template filename is useful for when the same definition file is used with multiple template files
    #  without appending the template file name the previously generated file would be overwritten
    if (appendTemplateFilename)
        set (ENTDLR_${TargetName}_${Template_Filename}_OUTPUT ${OutputFile})
    else()
        set (ENTDLR_${TargetName}_OUTPUT ${OutputFile})
    endif()
endmacro ()