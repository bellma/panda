//Autogenerated PPP header from /home/luke/workspace/panda/panda/plugins/proc_start_linux/proc_start_linux_ppp.h

typedef void (*on_rec_auxv_t)(CPUState *env, TranslationBlock *tb, struct auxv_values);
void ppp_add_cb_on_rec_auxv(on_rec_auxv_t);
bool ppp_remove_cb_on_rec_auxv(on_rec_auxv_t);

