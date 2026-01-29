EventScript_TV::
	
	end

EventScript_TryDoTVShow::
	
	end

EventScript_MomDadMightLikeThis1::
	
	end

EventScript_PlayersHouseMovie::
	releaseall
	end

@ special InitRoamer is a junk call. Its input var (VAR_0x8004) hasn't been set, and
@ It's called again when Mom actually asks for the color, overwriting
@ whatever it does here.
EventScript_PlayersHouseLatiNewsFlash::
	
	end

@ The following is a loop for the TV show messages
@ VAR_RESULT is set to TRUE when the show has printed its final message
EventScript_DoTVShow::
	
	end

EventScript_TurnOffTV::
	
	end

EventScript_MomDadMightLikeThis2::

	end

EventScript_TryDoPokeNews::
	
	end

EventScript_DoInSearchOfTrainers::
	end
