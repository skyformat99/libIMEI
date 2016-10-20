# libIMEI - Tiny IMEI generation and verification library

Generation speed: ~191570/s on an old Core i5 580m with `-O3` optimization.

### Some tips about changing IMEI for your phone

Qualcomm: `NV Item 550`

MediaTek: `AT+ EGMR=1,7,"233333333333333"` (Card 1) `AT+ EGMR=1,10,"233333333333333"` (Card 2)
