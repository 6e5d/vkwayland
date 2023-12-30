#include <vulkan/vulkan.h>
#include <wayland-client.h>

#include "../../vkstatic/build/vkstatic.h"

VkSurfaceKHR vkwayland(surface)(
	VkInstance instance,
	struct wl_display* display,
	struct wl_surface* surface
);

void vkwayland(new)(
	Vkstatic()* vks,
	struct wl_display* display,
	struct wl_surface* wsur
);

#endif
