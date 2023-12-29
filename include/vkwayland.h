#ifndef INCLUDEGUARD_VKWAYLAND
#define INCLUDEGUARD_VKWAYLAND

#include <vulkan/vulkan.h>
#include <wayland-client.h>

#include "../../vkstatic/build/vkstatic.h"
#define WlDisplay wl_display
#define WlSurface wl_surface

VkSurfaceKHR vkwayland(surface)(
	VkInstance instance,
	struct WlDisplay* display,
	struct WlSurface* surface
);

void vkwayland(new)(
	Vkstatic()* vks,
	struct WlDisplay* display,
	struct WlSurface* wsur
);

#endif
