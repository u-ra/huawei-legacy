#ifndef _ASM_GENERIC_EMERGENCY_RESTART_H
#define _ASM_GENERIC_EMERGENCY_RESTART_H

static inline void machine_emergency_restart(void)
{
	machine_restart("emergency_restart");
}

#endif /* _ASM_GENERIC_EMERGENCY_RESTART_H */
