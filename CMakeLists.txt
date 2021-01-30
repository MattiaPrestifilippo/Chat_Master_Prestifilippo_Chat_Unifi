cmake_minimum_required(VERSION 3.16)
project(Chat_Master_Prestifilippo)

set(CMAKE_CXX_STANDARD 14)
add_executable(Chat_Master_Prestifilippo main.cpp Messaggio.h Utente.h Chat.cpp Chat.h Chats.cpp Chats.h)
add_subdirectory(test)
set(SOURCE_FILES main.cpp Utente.h Messaggio.h Chat.h Chat.cpp Chats.h Chats.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries (Chat_Master_Prestifilippo core)
