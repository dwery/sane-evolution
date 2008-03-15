
#include <sane/sane.h>

SANE_Status
sane_check_api_level(SANE_Handle h, SANE_Int * level)
{
	return sane_control_option(h, 0, SANE_ACTION_CHECK_API_LEVEL, level);
}

SANE_Status
sane_check_warm_up(SANE_Handle h, SANE_Int * interval)
{
	return sane_control_option(h, 0, SANE_ACTION_CHECK_WARM_UP, interval);
}

