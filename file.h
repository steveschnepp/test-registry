
typedef void (*hook_t)(void);

struct init_struct {
    hook_t hook;
    const char *name;
};

extern const struct init_struct __start_init;
extern const struct init_struct __stop_init;

#define INIT_HOOK(_name, _hook) \
    const struct init_struct _init_struct_##_name __attribute__((section("init"))) = { \
        .hook = _hook, \
        .name = #_name, \
    };
