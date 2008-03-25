
#include <sane/sane.h>

SANE_Status
sane_exchange_api_level(SANE_Handle h, SANE_Int * level)
{
	return sane_control_option(h, 0, SANE_ACTION_CHECK_API_LEVEL,
		level, NULL);
}

SANE_Status
sane_tell_api_level(SANE_Handle h, SANE_Int level)
{
	return sane_exchange_api_level(h, &level);
}

SANE_Status
sane_check_warm_up(SANE_Handle h, SANE_Int * interval)
{
	return sane_control_option(h, 0, SANE_ACTION_CHECK_WARM_UP,
		interval, NULL);
}

SANE_Status
sane_get_scanner_info(SANE_Handle h, SANE_Scanner_Info *si)
{
	return sane_control_option(h, 0, SANE_ACTION_GET_SCANNER_INFO,
		si, NULL);
}

/*
SANE_Status
sane_set_scan_area(SANE_Handle h, SANE_Word tlx, SANE_Word tly, SANE_Word brx, SANE_Word bry)
{
	SANE_Status status;
	SANE_Scan_Area sa;
	
	sa.tlx = tlx;
	sa.tly = tly;
	sa.brx = brx;
	sa.bry = bry;

	status = sane_control_option(h, 0, SANE_ACTION_SET_SCAN_AREA,
		&sa, NULL);

	if (status == SANE_STATUS_UNSUPPORTED) {
	}


	return status;
}

SANE_Status
sane_warm_and_start(SANE_Handle h)
{
	return SANE_STATUS_UNSUPPORTED;
}
*/
