#include <wayland-client.h>
#include <assert.h>
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_wayland.h>

#include "../include/vkwayland.h"
#include "../../vkstatic/include/vkstatic.h"
#include "../../vkhelper/include/instance.h"

VkSurfaceKHR vkwayland_surface(
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

void vkwayland_new(
	Vkstatic* vks,
	struct wl_display* display,
	struct wl_surface* wsur
) {
	VkInstance instance = vkhelper_instance();
	VkSurfaceKHR vsur = vkwayland_surface(instance, display, wsur);
	vkstatic_init(vks, instance, vsur);
}
