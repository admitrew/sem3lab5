file(READ "${FREETYPE_DIR}/CMakeLists.txt" FREETYPE_CMAKELISTS_CONTENTS)
string(REPLACE "  install(\n    FILES \${PROJECT_BINARY_DIR}/freetype2.pc\n    DESTINATION \${CMAKE_INSTALL_LIBDIR}/pkgconfig\n    COMPONENT pkgconfig)" "" FREETYPE_CMAKELISTS_CONTENTS "${FREETYPE_CMAKELISTS_CONTENTS}")
file(WRITE "${FREETYPE_DIR}/CMakeLists.txt" "${FREETYPE_CMAKELISTS_CONTENTS}")