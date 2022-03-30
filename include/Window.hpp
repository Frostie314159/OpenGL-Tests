#pragma once
#include <memory>
#include <GLFW/glfw3.h>

class Window {
    struct GLFWwindowDeleter{
        void operator()(GLFWwindow* window) const {
            glfwDestroyWindow(window);
        }
    };
    std::unique_ptr<GLFWwindow, GLFWwindowDeleter> m_Window;
    int m_Width, m_Height;
    static constexpr int DEFAULT_WIDTH = 800;
    static constexpr int DEFAULT_HEIGHT = 800;
    static constexpr const char* DEFAULT_TITLE = "Window";
public:
    Window(int t_Width = Window::DEFAULT_WIDTH, int height = Window::DEFAULT_HEIGHT, const char* title = Window::DEFAULT_TITLE);
    ~Window();

    const std::weak_ptr<GLFWwindow> getWindow() noexcept;
};