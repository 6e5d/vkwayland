#include <wayland-client.h>
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_wayland.h>

#include "../include/vkwayland.h"
#include "../../vkhelper/include/vkhelper.h"

VkSurfaceKHR vkwayland(surface)(
	VkInstance instance,
	struct wl_display* display,
	struct wl_surface* surface
) {
	VkSurfaceKHR vksurface;
	VkWaylandSurfaceCreateInfoKHR createInfo = {
		.sType = VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR,
		.display = display,
		.surface = surface,
	};
	assert(0 == vkCreateWaylandSurfaceKHR(
		instance, &createInfo, NULL, &vksurface));
	return vksurface;
}

void vkwayland(new)(
	Vkstatic()* vks,
	struct wl_display* display,
	struct wl_surface* wsur
) {
	VkInstance instance = vkhelper(instance)();
	VkSurfaceKHR vsur = vkwayland(surface)(instance, display, wsur);
	vkstatic(init)(vks, instance, vsur);
}
