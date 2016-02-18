#ifndef __MODEM_CONTROL_H__
#define __MODEM_CONTROL_H__ 1

struct modemctl_platform_data {
	const char *name;

	unsigned gpio_phone_on;
	unsigned gpio_phone_active;
	unsigned gpio_pda_active;
	unsigned gpio_cp_reset;
	unsigned gpio_usim_boot;
	unsigned gpio_flm_sel;
	unsigned gpio_sim_ndetect;

	void (*cfg_gpio)(void);
}

#endif /* __MODEM_CONTROL_H__ */


















































	
