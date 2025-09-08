SunshineOrphanage_AkihikosRoom2F_MapScripts::
	.byte 0


GiveRunningShoesAtStart::
# 4 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 5 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 6 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 7 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


GiveRunningShoesAtStart_Text_0:
# 5 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "I should put on my running shoes.\p$"
