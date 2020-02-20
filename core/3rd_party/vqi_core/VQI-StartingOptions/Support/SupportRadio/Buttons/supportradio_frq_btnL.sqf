//	Frequency Channel
//	Click LEFT Ch

playSound "Orange_PhoneCall_Reject";
if (SR_CH_TRANSMIT == 0) exitWith { SR_CH_TRANSMIT = 9;  };
if (SR_CH_TRANSMIT == 1) exitWith { SR_CH_TRANSMIT = 0;  };
if (SR_CH_TRANSMIT == 2) exitWith { SR_CH_TRANSMIT = 1;  };
if (SR_CH_TRANSMIT == 3) exitWith { SR_CH_TRANSMIT = 2;  };
if (SR_CH_TRANSMIT == 4) exitWith { SR_CH_TRANSMIT = 3;  };
if (SR_CH_TRANSMIT == 5) exitWith { SR_CH_TRANSMIT = 4;  };
if (SR_CH_TRANSMIT == 6) exitWith { SR_CH_TRANSMIT = 5;  };
if (SR_CH_TRANSMIT == 7) exitWith { SR_CH_TRANSMIT = 6;  };
if (SR_CH_TRANSMIT == 8) exitWith { SR_CH_TRANSMIT = 7;  };
if (SR_CH_TRANSMIT == 9) exitWith { SR_CH_TRANSMIT = 8;  };


////////////////
/* NOTES:



*/