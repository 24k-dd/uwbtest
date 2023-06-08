cmake_minimum_required(VERSION 3.25)
project(uwbtest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "D:/new-qt/6.6.0/mingw_64/bin")

include_directories("D:/new-qt/eigen-3.4.0")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Network
        Charts
        Sql
        REQUIRED)

add_executable(uwbtest main.cpp api/mytcpserver.cpp api/mytcpserver.h model/model.cpp model/model.h api/inwork.cpp api/inwork.h ui/loginwidget.cpp ui/loginwidget.h ui/loginwidget.ui ui/Callout.cpp ui/Callout.h ui/chartview.cpp ui/chartview.h ui/mainwidget.cpp ui/mainwidget.h ui/mainwidget.ui api/sqlitetools.cpp api/sqlitetools.h pkg/FindPoint.cpp pkg/FindPoint.h pkg/KalmanFilter.cpp pkg/KalmanFilter.h ui/mainwindow.cpp ui/mainwindow.h ui/mainwindow.ui ui/CheckIdWidget.cpp ui/CheckIdWidget.h)
target_link_libraries(uwbtest
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Network
        Qt::Charts
        Qt::Sql
        )

if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets Sql Network Charts)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
