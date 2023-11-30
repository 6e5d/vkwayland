#ifndef INCLUDEGUARD_VKWAYLAND
#define INCLUDEGUARD_VKWAYLAND

#include <vulkan/vulkan.h>
#include <wayland-client.h>

#include "../../vkstatic/include/vkstatic.h"

VkSurfaceKHR vkwayland_surface(
VkInstance instance,
struct wl_display* display,
struct wl_surface* surface
);

void vkwayland_new(
Vkstatic* vks,
struct wl_display* display,
struct wl_surface* wsur
);

#endif
