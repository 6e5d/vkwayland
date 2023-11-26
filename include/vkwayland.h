#ifndef INCLUDEGUARD_VKWAYLAND_VKWAYLANDH
#define INCLUDEGUARD_VKWAYLAND_VKWAYLANDH

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
