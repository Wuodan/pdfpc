/* caching.c generated by valac 0.16.0, the Vala compiler
 * generated from caching.vala, do not modify */


#include <glib.h>
#include <glib-object.h>


#define PDFPC_RENDERER_TYPE_CACHING (pdfpc_renderer_caching_get_type ())
#define PDFPC_RENDERER_CACHING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_RENDERER_TYPE_CACHING, pdfpcRendererCaching))
#define PDFPC_RENDERER_IS_CACHING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_RENDERER_TYPE_CACHING))
#define PDFPC_RENDERER_CACHING_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), PDFPC_RENDERER_TYPE_CACHING, pdfpcRendererCachingIface))

typedef struct _pdfpcRendererCaching pdfpcRendererCaching;
typedef struct _pdfpcRendererCachingIface pdfpcRendererCachingIface;

#define PDFPC_RENDERER_CACHE_TYPE_BASE (pdfpc_renderer_cache_base_get_type ())
#define PDFPC_RENDERER_CACHE_BASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFPC_RENDERER_CACHE_TYPE_BASE, pdfpcRendererCacheBase))
#define PDFPC_RENDERER_CACHE_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PDFPC_RENDERER_CACHE_TYPE_BASE, pdfpcRendererCacheBaseClass))
#define PDFPC_RENDERER_CACHE_IS_BASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFPC_RENDERER_CACHE_TYPE_BASE))
#define PDFPC_RENDERER_CACHE_IS_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PDFPC_RENDERER_CACHE_TYPE_BASE))
#define PDFPC_RENDERER_CACHE_BASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PDFPC_RENDERER_CACHE_TYPE_BASE, pdfpcRendererCacheBaseClass))

typedef struct _pdfpcRendererCacheBase pdfpcRendererCacheBase;
typedef struct _pdfpcRendererCacheBaseClass pdfpcRendererCacheBaseClass;

struct _pdfpcRendererCachingIface {
	GTypeInterface parent_iface;
	void (*set_cache) (pdfpcRendererCaching* self, pdfpcRendererCacheBase* cache);
	pdfpcRendererCacheBase* (*get_cache) (pdfpcRendererCaching* self);
};



GType pdfpc_renderer_cache_base_get_type (void) G_GNUC_CONST;
GType pdfpc_renderer_caching_get_type (void) G_GNUC_CONST;
void pdfpc_renderer_caching_set_cache (pdfpcRendererCaching* self, pdfpcRendererCacheBase* cache);
pdfpcRendererCacheBase* pdfpc_renderer_caching_get_cache (pdfpcRendererCaching* self);


/**
         * Set a Cache store to be used for caching
         */
void pdfpc_renderer_caching_set_cache (pdfpcRendererCaching* self, pdfpcRendererCacheBase* cache) {
	g_return_if_fail (self != NULL);
	PDFPC_RENDERER_CACHING_GET_INTERFACE (self)->set_cache (self, cache);
}


/**
         * Retrieve the currently used cache store
         *
         * If no cache store is set null will be returned.
         */
pdfpcRendererCacheBase* pdfpc_renderer_caching_get_cache (pdfpcRendererCaching* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return PDFPC_RENDERER_CACHING_GET_INTERFACE (self)->get_cache (self);
}


static void pdfpc_renderer_caching_base_init (pdfpcRendererCachingIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


/**
     * Every renderer may decide to implement the Caching interface to improve
     * rendering speed.
     */
GType pdfpc_renderer_caching_get_type (void) {
	static volatile gsize pdfpc_renderer_caching_type_id__volatile = 0;
	if (g_once_init_enter (&pdfpc_renderer_caching_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (pdfpcRendererCachingIface), (GBaseInitFunc) pdfpc_renderer_caching_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType pdfpc_renderer_caching_type_id;
		pdfpc_renderer_caching_type_id = g_type_register_static (G_TYPE_INTERFACE, "pdfpcRendererCaching", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (pdfpc_renderer_caching_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&pdfpc_renderer_caching_type_id__volatile, pdfpc_renderer_caching_type_id);
	}
	return pdfpc_renderer_caching_type_id__volatile;
}


