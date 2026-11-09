// gml_Script___InputGamepadTransformSteam @ 0x140094090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputGamepadTransformSteam
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined8 local_768;
  undefined4 local_760;
  undefined4 local_75c;
  undefined8 local_758;
  undefined4 local_750;
  undefined4 local_74c;
  undefined8 local_748;
  char *local_740;
  undefined4 local_738;
  undefined8 local_730;
  undefined4 local_724;
  undefined8 local_720;
  undefined4 local_714;
  undefined8 local_710;
  undefined4 local_704;
  undefined8 *local_6f8;
  undefined1 *local_6f0;
  undefined8 *local_6e8;
  undefined8 *local_6e0;
  undefined1 *local_6d8;
  undefined8 *local_6d0;
  undefined8 *local_6c8;
  undefined1 *local_6c0;
  undefined8 *local_6b8;
  undefined1 *local_6b0;
  undefined1 *local_6a8;
  undefined1 *local_6a0;
  undefined1 *local_698;
  undefined1 *local_690;
  undefined1 *local_688;
  undefined1 *local_680;
  undefined1 *local_678;
  undefined8 *local_670;
  undefined1 *local_668;
  undefined1 *local_660;
  undefined1 *local_658;
  undefined1 *local_650;
  undefined1 *local_648;
  undefined1 *local_640;
  undefined1 *local_638;
  undefined1 *local_630;
  undefined1 *local_628;
  undefined1 *local_620;
  undefined1 *local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 *local_600;
  undefined1 *local_5f8;
  undefined1 *local_5f0;
  undefined1 *local_5e8;
  undefined1 *local_5e0;
  undefined1 *local_5d8;
  undefined1 *local_5d0;
  undefined1 *local_5c8;
  undefined8 *local_5c0;
  undefined8 local_5b8;
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined4 local_59c;
  undefined8 local_598 [2];
  undefined1 local_588 [16];
  undefined8 local_578 [2];
  undefined8 local_568 [2];
  undefined1 local_558 [16];
  undefined8 local_548 [2];
  undefined8 local_538 [2];
  undefined1 local_528 [16];
  undefined8 local_518 [2];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined8 local_488 [2];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined8 local_328 [2];
  undefined1 local_318 [16];
  undefined8 local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [120];
  
  local_res20 = 0;
  local_740 = "gml_Script___InputGamepadTransformQuirks";
  local_748 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_748;
  local_738 = 0xb;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_598,0x10,0x28,FUN_1400424d0,FUN_140041b30);
  local_704 = 0xffffff;
  local_710 = 0;
  local_714 = 0xffffff;
  local_720 = 0;
  local_59c = 0xffffff;
  local_5a8 = 0;
  local_5ac = 0xffffff;
  local_5b8 = 0;
  local_724 = 0xffffff;
  local_730 = 0;
  local_75c = 0;
  local_768 = 0;
  local_74c = 0;
  local_758 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_738 = 0xe;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,param_5);
  if (0 < iVar3) {
    lVar1 = *(longlong *)ThreadLocalStoragePointer;
    do {
      uVar11 = (undefined4)((ulonglong)pcVar9 >> 0x20);
      local_738 = 0x10;
      if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_768);
      }
      local_768 = 0;
      local_760 = 0;
      local_75c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd238);
      FUN_140041c60(local_588,uVar4);
      local_6f0 = local_588;
      uVar5 = CONCAT44(uVar11,DAT_141a01298);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_768,1,uVar5,&local_6f0);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_140041c60(&local_710,uVar4);
      local_738 = 0x11;
      if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_768);
      }
      local_768 = 0;
      local_760 = 0;
      local_75c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd1f8);
      FUN_140041c60(local_598,uVar4);
      local_6f8 = local_598;
      uVar10 = CONCAT44(uVar11,DAT_141a01158);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_768,1,uVar10,&local_6f8);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_140041c60(&local_720,uVar5);
      local_738 = 0x12;
      if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_768);
      }
      local_768 = 0;
      local_760 = 0;
      local_75c = 5;
      FUN_140041c60(local_598,uVar4);
      local_6f8 = local_598;
      uVar10 = CONCAT44(uVar11,DAT_141a010d8);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_768,1,uVar10,&local_6f8);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_140041c60(&local_5a8,uVar5);
      local_738 = 0x13;
      if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_768);
      }
      local_768 = 0;
      local_760 = 0;
      local_75c = 5;
      FUN_140041c60(local_598,uVar4);
      local_6f8 = local_598;
      pcVar9 = (code *)CONCAT44(uVar11,DAT_141a01128);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_768,1,pcVar9,&local_6f8);
      FUN_140041c60(&local_5b8,uVar4);
      local_738 = 0x14;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd288);
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd368);
      FUN_1400424a0(local_318,uVar4);
      local_res20 = 1;
      FUN_1400460e0(local_318,uVar5);
      FUN_140041c60(&local_730,local_318);
      local_res20 = 0;
      if ((1 << (local_318[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_318);
      }
      local_738 = 0x16;
      local_21c = 0;
      local_228 = 0;
      if ((*(int *)(lVar1 + 0x18) < DAT_141ddc5e8) &&
         (_Init_thread_header(&DAT_141ddc5e8), DAT_141ddc5e8 == -1)) {
        _DAT_141ddc5fc = 0;
        _DAT_141ddc5f0 = 0;
        _DAT_141ddc610 = 0;
        _DAT_141ddc604 = 0x3ff0000000000000;
        _DAT_141ddc614 = 1;
        _DAT_141ddc624 = 0;
        _DAT_141ddc618 = 0x4018000000000000;
        _DAT_141ddc628 = 2;
        _DAT_141ddc638 = 0;
        _DAT_141ddc62c = 0x4010000000000000;
        _DAT_141ddc63c = 3;
        _DAT_141ddc64c = 0;
        _DAT_141ddc640 = 0x4008000000000000;
        _DAT_141ddc650 = 4;
        _DAT_141ddc660 = 0;
        _DAT_141ddc654 = 0x4034000000000000;
        _DAT_141ddc664 = 4;
        atexit((_func_5014 *)&LAB_141464c40);
        _Init_thread_footer(&DAT_141ddc5e8);
      }
      uVar7 = 0;
      lVar8 = 0;
      do {
        iVar3 = FUN_140e851f0(&DAT_141ddc5f0 + (longlong)(int)uVar7 * 0x14,&local_228,DAT_141955260,
                              0);
        if (iVar3 == 0) {
          iVar3 = (&DAT_141ddc600)[lVar8 * 5];
          if (iVar3 == 0) {
            local_738 = 0x19;
            (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd1f8);
            FUN_1400424a0(local_278,&DAT_141dca378);
            iVar3 = FUN_140e851f0(&local_730,local_278,DAT_141955260,0);
            if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            if (((iVar3 == 0) && (cVar2 = FUN_140041d90(&local_720,0xd), cVar2 != '\0')) &&
               (cVar2 = FUN_140041d90(&local_5b8,1), cVar2 != '\0')) {
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              local_6f8 = &local_710;
              FUN_140041c60(local_588,&DAT_141dca608);
              local_6f0 = local_588;
              uVar4 = gml_Script___InputStringMatches
                                (local_res8,local_res10,&local_768,2,&local_6f8);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 == '\0') goto LAB_140096cbb;
              local_738 = 0x1b;
              if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_758);
              }
              local_758 = 0;
              local_750 = 0;
              local_74c = 5;
              FUN_140041c60(local_578,&DAT_141dca318);
              local_6e8 = local_578;
              pcVar9 = (code *)&local_6e8;
              gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                        (local_res8,local_res10,&local_758,1,pcVar9);
              local_738 = 0x1c;
              uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd248);
              FUN_140044220(uVar4,5);
            }
            else {
LAB_140096cbb:
              local_738 = 0x1e;
              FUN_1400424a0(local_268,&DAT_141dca228);
              iVar3 = FUN_140e851f0(&local_730,local_268,DAT_141955260,0);
              if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_268);
              }
              if (((iVar3 == 0) && (cVar2 = FUN_140046d30(&local_720,0x15), cVar2 != '\0')) &&
                 ((cVar2 = FUN_140041d90(&local_720,0x1e), cVar2 == '\0' ||
                  (cVar2 = FUN_140041d90(&local_5b8,0), cVar2 == '\0')))) {
                local_738 = 0x20;
                if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_768);
                }
                local_768 = 0;
                local_760 = 0;
                local_75c = 5;
                FUN_140041c60(local_598,&DAT_141dca208);
                local_6f8 = local_598;
                pcVar9 = (code *)&local_6f8;
                gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                          (local_res8,local_res10,&local_768,1,pcVar9);
                local_738 = 0x21;
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                local_2bc = 0xd;
                local_2c8 = 0x3ff0000000000000;
                FUN_140041c60(uVar4,&local_2c8);
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  puVar6 = &local_2c8;
LAB_14009743f:
                  FUN_140041a50(puVar6);
                }
              }
              else {
                local_738 = 0x23;
                FUN_1400424a0(local_258,&DAT_141dca668);
                iVar3 = FUN_140e851f0(&local_730,local_258,DAT_141955260,0);
                if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_258);
                }
                if (((iVar3 == 0) && (cVar2 = FUN_140041d90(&local_720,0x13), cVar2 != '\0')) &&
                   (cVar2 = FUN_140041d90(&local_5a8,4), cVar2 != '\0')) {
                  local_738 = 0x25;
                  if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_768);
                  }
                  local_768 = 0;
                  local_760 = 0;
                  local_75c = 5;
                  FUN_140041c60(local_598,&DAT_141dca268);
                  local_6f8 = local_598;
                  pcVar9 = (code *)&local_6f8;
                  gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                            (local_res8,local_res10,&local_768,1,pcVar9);
                  local_738 = 0x26;
                  uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                  local_2ac = 0xd;
                  local_2b8 = 0x3ff0000000000000;
                  FUN_140041c60(uVar4,&local_2b8);
                  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
                    puVar6 = &local_2b8;
                    goto LAB_14009743f;
                  }
                }
                else {
                  local_738 = 0x28;
                  FUN_1400424a0(local_248,&DAT_141dca668);
                  iVar3 = FUN_140e851f0(&local_730,local_248,DAT_141955260,0);
                  if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_248);
                  }
                  if (((iVar3 == 0) && (cVar2 = FUN_140041d90(&local_720,0), cVar2 != '\0')) &&
                     (cVar2 = FUN_140041d90(&local_5a8,8), cVar2 != '\0')) {
                    local_738 = 0x2a;
                    if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_768);
                    }
                    local_768 = 0;
                    local_760 = 0;
                    local_75c = 5;
                    FUN_140041c60(local_598,&DAT_141dc9ff8);
                    local_6f8 = local_598;
                    pcVar9 = (code *)&local_6f8;
                    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                              (local_res8,local_res10,&local_768,1,pcVar9);
                    local_738 = 0x2b;
                    uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                    local_29c = 0xd;
                    local_2a8 = 0x3ff0000000000000;
                    FUN_140041c60(uVar4,&local_2a8);
                    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
                      puVar6 = &local_2a8;
                      goto LAB_14009743f;
                    }
                  }
                  else {
                    local_738 = 0x2d;
                    if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_768);
                    }
                    local_768 = 0;
                    local_760 = 0;
                    local_75c = 5;
                    local_6f8 = &local_730;
                    FUN_140041c60(local_588,&DAT_141dca408);
                    local_6f0 = local_588;
                    FUN_140041c60(local_578,&DAT_141dca0d8);
                    local_6e8 = local_578;
                    FUN_140041c60(local_568,&DAT_141dca6f8);
                    local_6e0 = local_568;
                    FUN_140041c60(local_558,&DAT_141dca598);
                    local_6d8 = local_558;
                    FUN_140041c60(local_548,&DAT_141dca658);
                    local_6d0 = local_548;
                    pcVar9 = (code *)&local_6f8;
                    uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                      (local_res8,local_res10,&local_768,6,pcVar9);
                    cVar2 = FUN_140e491e0(uVar4);
                    if (cVar2 == '\0') {
                      local_738 = 0x32;
                      FUN_1400424a0(local_238,&DAT_141dca3e8);
                      iVar3 = FUN_140e851f0(&local_730,local_238,DAT_141955260,0);
                      if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(local_238);
                      }
                      if (iVar3 == 0) {
                        local_738 = 0x34;
                        if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_768);
                        }
                        local_768 = 0;
                        local_760 = 0;
                        local_75c = 5;
                        FUN_140041c60(local_598,&DAT_141dca588);
                        local_6f8 = local_598;
                        pcVar9 = (code *)&local_6f8;
                        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                                  (local_res8,local_res10,&local_768,1,pcVar9);
                        local_738 = 0x35;
                        uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                        local_27c = 0xd;
                        local_288 = 0x3ff0000000000000;
                        FUN_140041c60(uVar4,&local_288);
                        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                          puVar6 = &local_288;
                          goto LAB_14009743f;
                        }
                      }
                    }
                    else {
                      local_738 = 0x2f;
                      if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_758);
                      }
                      local_758 = 0;
                      local_750 = 0;
                      local_74c = 5;
                      FUN_140041c60(local_538,&DAT_141dca0f8);
                      local_6c8 = local_538;
                      pcVar9 = (code *)&local_6c8;
                      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                                (local_res8,local_res10,&local_758,1,pcVar9);
                      local_738 = 0x30;
                      uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                      local_28c = 0xd;
                      local_298 = 0x3ff0000000000000;
                      FUN_140041c60(uVar4,&local_298);
                      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                        puVar6 = &local_298;
                        goto LAB_14009743f;
                      }
                    }
                  }
                }
              }
            }
            local_738 = 0x37;
          }
          else if (iVar3 == 1) {
            local_738 = 0x3a;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd328);
            FUN_1400424a0(local_208,&DAT_141dca248);
            iVar3 = FUN_140e851f0(uVar4,local_208,DAT_141955260,0);
            if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_208);
            }
            if (iVar3 == 0) {
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              local_6f8 = &local_710;
              FUN_140041c60(local_588,&DAT_141dca1b8);
              local_6f0 = local_588;
              uVar4 = gml_Script___InputStringMatches
                                (local_res8,local_res10,&local_768,2,&local_6f8);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 == '\0') goto LAB_140096617;
              local_738 = 0x3c;
              if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_758);
              }
              local_758 = 0;
              local_750 = 0;
              local_74c = 5;
              FUN_140041c60(local_578,&DAT_141dca6d8);
              local_6e8 = local_578;
              pcVar9 = (code *)&local_6e8;
              gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                        (local_res8,local_res10,&local_758,1,pcVar9);
              local_738 = 0x3d;
              uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
              local_2fc = 0xd;
              local_308 = 0x3ff0000000000000;
              FUN_140041c60(uVar4,&local_308);
              if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) == 0) goto LAB_140096ad2;
              puVar6 = &local_308;
LAB_140096acc:
              FUN_140041a50(puVar6);
            }
            else {
LAB_140096617:
              local_738 = 0x3f;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd328);
              FUN_140041c60(local_598,uVar4);
              local_6f8 = local_598;
              FUN_140041c60(local_588,&DAT_141dca128);
              local_6f0 = local_588;
              FUN_140041c60(local_578,&DAT_141dca5b8);
              local_6e8 = local_578;
              FUN_140041c60(local_568,&DAT_141dca6c8);
              local_6e0 = local_568;
              FUN_140041c60(local_558,&DAT_141dca518);
              local_6d8 = local_558;
              FUN_140041c60(local_548,&DAT_141dca018);
              local_6d0 = local_548;
              FUN_140041c60(local_538,&DAT_141dca048);
              local_6c8 = local_538;
              FUN_140041c60(local_528,&DAT_141dca2b8);
              local_6c0 = local_528;
              pcVar9 = (code *)&local_6f8;
              uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                (local_res8,local_res10,&local_768,8,pcVar9);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 == '\0') {
                local_738 = 0x44;
                uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
                cVar2 = FUN_140041d90(uVar4,6);
                if (cVar2 == '\0') {
                  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
                  cVar2 = FUN_140041d90(uVar4,7);
                  if (cVar2 == '\0') {
                    local_738 = 0x49;
                    FUN_1400424a0(local_1f8,&DAT_141dca228);
                    iVar3 = FUN_140e851f0(&local_730,local_1f8,DAT_141955260,0);
                    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(local_1f8);
                    }
                    if (iVar3 == 0) {
                      local_738 = 0x4b;
                      if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_768);
                      }
                      local_768 = 0;
                      local_760 = 0;
                      local_75c = 5;
                      FUN_140041c60(local_598,&DAT_141dca328);
                      local_6f8 = local_598;
                      pcVar9 = (code *)&local_6f8;
                      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                                (local_res8,local_res10,&local_768,1,pcVar9);
                      local_738 = 0x4c;
                      uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                      local_2dc = 0xd;
                      local_2e8 = 0x3ff0000000000000;
                      FUN_140041c60(uVar4,&local_2e8);
                      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                        puVar6 = &local_2e8;
                        goto LAB_140096acc;
                      }
                    }
                    goto LAB_140096ad2;
                  }
                }
                local_738 = 0x46;
                if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_768);
                }
                local_768 = 0;
                local_760 = 0;
                local_75c = 5;
                FUN_140041c60(local_598,&DAT_141dca0b8);
                local_6f8 = local_598;
                pcVar9 = (code *)&local_6f8;
                gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                          (local_res8,local_res10,&local_768,1,pcVar9);
                local_738 = 0x47;
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                local_2cc = 0xd;
                local_2d8 = 0x3ff0000000000000;
                FUN_140041c60(uVar4,&local_2d8);
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  puVar6 = &local_2d8;
                  goto LAB_140096acc;
                }
              }
              else {
                local_738 = 0x41;
                if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_758);
                }
                local_758 = 0;
                local_750 = 0;
                local_74c = 5;
                FUN_140041c60(local_518,&DAT_141dca488);
                local_6b8 = local_518;
                pcVar9 = (code *)&local_6b8;
                gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                          (local_res8,local_res10,&local_758,1,pcVar9);
                local_738 = 0x42;
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
                local_2ec = 0xd;
                local_2f8 = 0x3ff0000000000000;
                FUN_140041c60(uVar4,&local_2f8);
                if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                  puVar6 = &local_2f8;
                  goto LAB_140096acc;
                }
              }
            }
LAB_140096ad2:
            local_738 = 0x4e;
          }
          else {
            if (iVar3 != 2) {
              if (iVar3 == 3) {
                local_738 = 0x7a;
                uVar4 = FUN_1400424f0(local_1b8,&DAT_141dc9fc8);
                cVar2 = FUN_140041d70(&local_710,uVar4);
                FUN_140041b30(local_1b8);
                if (cVar2 == '\0') {
                  local_738 = 0x7f;
                  uVar4 = FUN_140042490(local_res8,DAT_1419fd328);
                  uVar5 = FUN_1400424f0(local_198,&DAT_141dca288);
                  cVar2 = FUN_140041d70(uVar4,uVar5);
                  FUN_140041b30(local_198);
                  uVar7 = 1 << ((byte)local_75c & 0x1f);
                  if (cVar2 == '\0') {
                    local_738 = 0x84;
                    if ((uVar7 & 0x46) != 0) {
                      FUN_140041a50(&local_768);
                    }
                    local_768 = 0;
                    local_760 = 0;
                    local_75c = 5;
                    uVar4 = FUN_140042490(local_res8,DAT_1419fd328);
                    FUN_140041c60(local_598,uVar4);
                    local_6f8 = local_598;
                    FUN_140041c60(local_588,&DAT_141dca458);
                    local_6f0 = local_588;
                    FUN_140041c60(local_578,&DAT_141dca4f8);
                    local_6e8 = local_578;
                    FUN_140041c60(local_568,&DAT_141dca078);
                    local_6e0 = local_568;
                    FUN_140041c60(local_558,&DAT_141dca2e8);
                    local_6d8 = local_558;
                    FUN_140041c60(local_548,&DAT_141dca148);
                    local_6d0 = local_548;
                    FUN_140041c60(local_538,&DAT_141dca458);
                    local_6c8 = local_538;
                    FUN_140041c60(local_528,&DAT_141dca618);
                    local_6c0 = local_528;
                    uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                      (local_res8,local_res10,&local_768,8,&local_6f8);
                    cVar2 = FUN_140e491e0(uVar4);
                    if (cVar2 == '\0') {
                      local_738 = 0x8a;
                      if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_768);
                      }
                      local_768 = 0;
                      local_760 = 0;
                      local_75c = 5;
                      uVar4 = FUN_140042490(local_res8,DAT_1419fd328);
                      FUN_140041c60(local_598,uVar4);
                      local_6f8 = local_598;
                      FUN_140041c60(local_588,&DAT_141dca0c8);
                      local_6f0 = local_588;
                      FUN_140041c60(local_578,&DAT_141dca678);
                      local_6e8 = local_578;
                      FUN_140041c60(local_568,&DAT_141dca648);
                      local_6e0 = local_568;
                      FUN_140041c60(local_558,&DAT_141dca058);
                      local_6d8 = local_558;
                      pcVar9 = (code *)&local_6f8;
                      uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                        (local_res8,local_res10,&local_768,5,pcVar9);
                      cVar2 = FUN_140e491e0(uVar4);
                      if (cVar2 != '\0') {
                        local_738 = 0x8c;
                        if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_758);
                        }
                        local_758 = 0;
                        local_750 = 0;
                        local_74c = 5;
                        FUN_140041c60(local_548,&DAT_141dca138);
                        local_6d0 = local_548;
                        pcVar9 = (code *)&local_6d0;
                        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                                  (local_res8,local_res10,&local_758,1,pcVar9);
                        local_738 = 0x8d;
                        uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                        uVar5 = FUN_1400441b0(local_168,1);
                        FUN_140041c60(uVar4,uVar5);
                        FUN_140041b30(local_168);
                      }
                      local_738 = 0x8f;
                    }
                    else {
                      local_738 = 0x86;
                      if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_758);
                      }
                      local_758 = 0;
                      local_750 = 0;
                      local_74c = 5;
                      FUN_140041c60(local_518,&DAT_141dca2c8);
                      local_6b8 = local_518;
                      pcVar9 = (code *)&local_6b8;
                      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                                (local_res8,local_res10,&local_758,1,pcVar9);
                      local_738 = 0x87;
                      uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                      uVar5 = FUN_1400441b0(local_178,1);
                      FUN_140041c60(uVar4,uVar5);
                      FUN_140041b30(local_178);
                      local_738 = 0x8f;
                    }
                  }
                  else {
                    local_738 = 0x81;
                    if ((uVar7 & 0x46) != 0) {
                      FUN_140041a50(&local_768);
                    }
                    local_768 = 0;
                    local_760 = 0;
                    local_75c = 5;
                    FUN_140041c60(local_598,&DAT_141dca418);
                    local_6f8 = local_598;
                    pcVar9 = (code *)&local_6f8;
                    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                              (local_res8,local_res10,&local_768,1,pcVar9);
                    local_738 = 0x82;
                    uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                    uVar5 = FUN_1400441b0(local_128,1);
                    FUN_140041c60(uVar4,uVar5);
                    FUN_140041b30(local_128);
                    local_738 = 0x8f;
                  }
                }
                else {
                  local_738 = 0x7c;
                  if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_768);
                  }
                  local_768 = 0;
                  local_760 = 0;
                  local_75c = 5;
                  FUN_140041c60(local_598,&DAT_141dca5f8);
                  local_6f8 = local_598;
                  pcVar9 = (code *)&local_6f8;
                  gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                            (local_res8,local_res10,&local_768,1,pcVar9);
                  local_738 = 0x7d;
                  uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                  uVar5 = FUN_1400441b0(local_1a8,1);
                  FUN_140041c60(uVar4,uVar5);
                  FUN_140041b30(local_1a8);
                  local_738 = 0x8f;
                }
                break;
              }
              if (iVar3 != 4) break;
              local_738 = 0x93;
              uVar4 = FUN_140042490(local_res8,DAT_1419fd248);
              cVar2 = FUN_140041d90(uVar4,5);
              if (cVar2 == '\0') {
                local_738 = 0x9b;
                uVar4 = FUN_140042490(local_res8,DAT_1419fd248);
                cVar2 = FUN_140041d90(uVar4,6);
                if (cVar2 == '\0') {
                  uVar4 = FUN_140042490(local_res8,DAT_1419fd248);
                  cVar2 = FUN_140041d90(uVar4,7);
                  if (cVar2 != '\0') goto LAB_140094cb1;
                  local_738 = 0xa0;
                  if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_768);
                  }
                  local_768 = 0;
                  local_760 = 0;
                  local_75c = 5;
                  local_6f8 = &local_710;
                  FUN_140041c60(local_588,&DAT_141dca698);
                  local_6f0 = local_588;
                  pcVar9 = (code *)&local_6f8;
                  uVar4 = gml_Script___InputStringMatches
                                    (local_res8,local_res10,&local_768,2,pcVar9);
                  cVar2 = FUN_140e491e0(uVar4);
                  if (cVar2 != '\0') {
                    local_738 = 0xa2;
                    if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_758);
                    }
                    local_758 = 0;
                    local_750 = 0;
                    local_74c = 5;
                    FUN_140041c60(local_578,&DAT_141dca188);
                    local_6e8 = local_578;
                    pcVar9 = (code *)&local_6e8;
                    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                              (local_res8,local_res10,&local_758,1,pcVar9);
                    local_738 = 0xa3;
                    uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                    uVar5 = FUN_1400441b0(local_1d8,1);
                    FUN_140041c60(uVar4,uVar5);
                    FUN_140041b30(local_1d8);
                    local_738 = 0xa5;
                    break;
                  }
                }
                else {
LAB_140094cb1:
                  local_738 = 0x9d;
                  if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_768);
                  }
                  local_768 = 0;
                  local_760 = 0;
                  local_75c = 5;
                  FUN_140041c60(local_598,&DAT_141dca0b8);
                  local_6f8 = local_598;
                  pcVar9 = (code *)&local_6f8;
                  gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                            (local_res8,local_res10,&local_768,1,pcVar9);
                  local_738 = 0x9e;
                  uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                  uVar5 = FUN_1400441b0(local_1c8,1);
                  FUN_140041c60(uVar4,uVar5);
                  FUN_140041b30(local_1c8);
                }
                local_738 = 0xa5;
                break;
              }
              local_738 = 0x95;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              FUN_140041c60(local_598,&DAT_141dca428);
              local_6f8 = local_598;
              gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                        (local_res8,local_res10,&local_768,1,&local_6f8);
              local_738 = 0x96;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              uVar4 = FUN_140042490(local_res8,DAT_1419fd1f8);
              FUN_140041c60(local_598,uVar4);
              local_6f8 = local_598;
              FUN_1400441d0(local_588,&DAT_1419dfec0);
              local_6f0 = local_588;
              uVar4 = FUN_140041c40(local_188,
                                    gml_Script_anon_8503___InputGamepadTransformQuirks___InputGamepadTransformQuirks
                                    ,local_res8);
              FUN_140041c60(local_578,uVar4);
              FUN_140041b30(local_188);
              local_6e8 = local_578;
              gml_Script_InputPlugInGamepadSetType(local_res8,local_res10,&local_768,3,&local_6f8);
              local_738 = 0x97;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              uVar4 = FUN_140042490(local_res8,DAT_1419fd1f8);
              FUN_140041c60(local_598,uVar4);
              local_6f8 = local_598;
              FUN_1400441d0(local_588,&DAT_1419dfee0);
              local_6f0 = local_588;
              uVar4 = FUN_140041c40(local_f8,
                                    gml_Script_anon_8658___InputGamepadTransformQuirks___InputGamepadTransformQuirks
                                    ,local_res8);
              FUN_140041c60(local_578,uVar4);
              FUN_140041b30(local_f8);
              local_6e8 = local_578;
              gml_Script_InputPlugInGamepadSetType(local_res8,local_res10,&local_768,3,&local_6f8);
              local_738 = 0x98;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              uVar4 = FUN_140042490(local_res8,DAT_1419fd1f8);
              FUN_140041c60(local_598,uVar4);
              local_6f8 = local_598;
              FUN_1400441d0(local_588,&DAT_1419dfef0);
              local_6f0 = local_588;
              uVar4 = FUN_140041c40(local_c8,gml_Script___InputGamepadTransformQuirks,local_res8);
              FUN_140041c60(local_578,uVar4);
              FUN_140041b30(local_c8);
              local_6e8 = local_578;
              gml_Script_InputPlugInGamepadSetType(local_res8,local_res10,&local_768,3,&local_6f8);
              local_738 = 0x99;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              uVar4 = FUN_140042490(local_res8,DAT_1419fd1f8);
              FUN_140041c60(local_598,uVar4);
              local_6f8 = local_598;
              FUN_1400441d0(local_588,&DAT_1419dfed0);
              local_6f0 = local_588;
              uVar4 = FUN_140041c40(local_1e8,gml_GlobalScript___InputGamepadTransformSteam,
                                    local_res8);
              FUN_140041c60(local_578,uVar4);
              FUN_140041b30(local_1e8);
              local_6e8 = local_578;
              pcVar9 = (code *)&local_6f8;
              gml_Script_InputPlugInGamepadSetType(local_res8,local_res10,&local_768,3,pcVar9);
              local_738 = 0xa5;
              break;
            }
            local_738 = 0x51;
            cVar2 = FUN_140041d90(&local_720,0x90);
            if ((cVar2 != '\0') && (cVar2 = FUN_140041d90(&local_5a8,0), cVar2 != '\0')) {
              local_738 = 0x53;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              FUN_140041c60(local_598,&DAT_141dca528);
              local_6f8 = local_598;
              pcVar9 = (code *)&local_6f8;
              gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                        (local_res8,local_res10,&local_768,1,pcVar9);
              local_738 = 0x54;
              uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
              local_20c = 0xd;
              local_218 = 0x3ff0000000000000;
              FUN_140041c60(uVar4,&local_218);
              FUN_140041b30(&local_218);
              local_738 = 0x77;
              break;
            }
            local_738 = 0x56;
            cVar2 = FUN_140041d90(&local_720,0);
            if (((cVar2 != '\0') && (cVar2 = FUN_140041d90(&local_5a8,6), cVar2 != '\0')) &&
               (cVar2 = FUN_140041d90(&local_5b8,0), cVar2 != '\0')) {
              local_738 = 0x58;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              FUN_140041c60(local_598,&DAT_141dca6b8);
              local_6f8 = local_598;
              pcVar9 = (code *)&local_6f8;
              gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                        (local_res8,local_res10,&local_768,1,pcVar9);
              local_738 = 0x59;
              uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
              uVar5 = FUN_1400441b0(local_158,1);
              FUN_140041c60(uVar4,uVar5);
              FUN_140041b30(local_158);
              local_738 = 0x77;
              break;
            }
            local_738 = 0x5b;
            uVar4 = FUN_1400424f0(local_148,&DAT_141dca378);
            cVar2 = FUN_140041d70(&local_730,uVar4);
            FUN_140041b30(local_148);
            if (((cVar2 != '\0') && (cVar2 = FUN_140041d90(&local_720,0xd), cVar2 != '\0')) &&
               (cVar2 = FUN_140041d90(&local_5b8,1), cVar2 != '\0')) {
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              local_6f8 = &local_710;
              FUN_140041c60(local_588,&DAT_141dca628);
              local_6f0 = local_588;
              uVar4 = gml_Script___InputStringMatches
                                (local_res8,local_res10,&local_768,2,&local_6f8);
              cVar2 = thunk_FUN_140e491e0(uVar4);
              if (cVar2 != '\0') {
                local_738 = 0x5d;
                if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_758);
                }
                local_758 = 0;
                local_750 = 0;
                local_74c = 5;
                FUN_140041c60(local_578,&DAT_141dca6a8);
                local_6e8 = local_578;
                pcVar9 = (code *)&local_6e8;
                gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                          (local_res8,local_res10,&local_758,1,pcVar9);
                local_738 = 0x5e;
                uVar4 = FUN_1400419a0(local_res8,DAT_1419fd248);
                FUN_140044220(uVar4,5);
                local_738 = 0x77;
                break;
              }
            }
            local_738 = 0x60;
            if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_768);
            }
            local_768 = 0;
            local_760 = 0;
            local_75c = 5;
            local_6f8 = &local_710;
            FUN_140041c60(local_588,&DAT_141dca308);
            local_6f0 = local_588;
            FUN_140041c60(local_578,&DAT_141dca088);
            local_6e8 = local_578;
            uVar4 = gml_Script___InputStringMatches(local_res8,local_res10,&local_768,3,&local_6f8);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              local_738 = 0x65;
              if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_768);
              }
              local_768 = 0;
              local_760 = 0;
              local_75c = 5;
              uVar4 = FUN_140042490(local_res8,DAT_1419fd328);
              FUN_140041c60(local_598,uVar4);
              local_6f8 = local_598;
              FUN_140041c60(local_588,&DAT_141dca298);
              local_6f0 = local_588;
              FUN_140041c60(local_578,&DAT_141dca478);
              local_6e8 = local_578;
              FUN_140041c60(local_568,&DAT_141dca6e8);
              local_6e0 = local_568;
              FUN_140041c60(local_558,&DAT_141dca068);
              local_6d8 = local_558;
              FUN_140041c60(local_548,&DAT_141dca168);
              local_6d0 = local_548;
              FUN_140041c60(local_538,&DAT_141dca1e8);
              local_6c8 = local_538;
              FUN_140041c60(local_528,&DAT_141dca548);
              local_6c0 = local_528;
              uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                (local_res8,local_res10,&local_768,8,&local_6f8);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 == '\0') {
                local_738 = 0x6a;
                if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_768);
                }
                local_768 = 0;
                local_760 = 0;
                local_75c = 5;
                uVar4 = FUN_140042490(local_res8,DAT_1419fd288);
                FUN_140041c60(local_598,uVar4);
                local_6f8 = local_598;
                FUN_140041c60(local_588,&DAT_141dca3d8);
                local_6f0 = local_588;
                FUN_140041c60(local_578,&DAT_141dc9fa8);
                local_6e8 = local_578;
                FUN_140041c60(local_568,&DAT_141dca688);
                local_6e0 = local_568;
                FUN_140041c60(local_558,&DAT_141dca4d8);
                local_6d8 = local_558;
                FUN_140041c60(local_548,&DAT_141dca1f8);
                local_6d0 = local_548;
                FUN_140041c60(local_538,&DAT_141dca5c8);
                local_6c8 = local_538;
                FUN_140041c60(local_528,&DAT_141dca108);
                local_6c0 = local_528;
                FUN_140041c60(local_518,&DAT_141dca238);
                local_6b8 = local_518;
                FUN_140041c60(local_508,&DAT_141dca028);
                local_6b0 = local_508;
                FUN_140041c60(local_4f8,&DAT_141dca5e8);
                local_6a8 = local_4f8;
                FUN_140041c60(local_4e8,&DAT_141dca2a8);
                local_6a0 = local_4e8;
                FUN_140041c60(local_4d8,&DAT_141dca468);
                local_698 = local_4d8;
                FUN_140041c60(local_4c8,&DAT_141dca498);
                local_690 = local_4c8;
                FUN_140041c60(local_4b8,&DAT_141dca508);
                local_688 = local_4b8;
                FUN_140041c60(local_4a8,&DAT_141dca5a8);
                local_680 = local_4a8;
                FUN_140041c60(local_498,&DAT_141dca1a8);
                local_678 = local_498;
                uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                  (local_res8,local_res10,&local_768,0x11,&local_6f8);
                cVar2 = FUN_140e491e0(uVar4);
                if (cVar2 == '\0') {
                  local_738 = 0x71;
                  if ((1 << ((byte)local_75c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_768);
                  }
                  local_768 = 0;
                  local_760 = 0;
                  local_75c = 5;
                  local_6f8 = &local_730;
                  FUN_140041c60(local_588,&DAT_141dca3b8);
                  local_6f0 = local_588;
                  FUN_140041c60(local_578,&DAT_141dca638);
                  local_6e8 = local_578;
                  FUN_140041c60(local_568,&DAT_141dca368);
                  local_6e0 = local_568;
                  FUN_140041c60(local_558,&DAT_141dca358);
                  local_6d8 = local_558;
                  FUN_140041c60(local_548,&DAT_141dca568);
                  local_6d0 = local_548;
                  FUN_140041c60(local_538,&DAT_141dca2d8);
                  local_6c8 = local_538;
                  FUN_140041c60(local_528,&DAT_141dca348);
                  local_6c0 = local_528;
                  FUN_140041c60(local_518,&DAT_141dca178);
                  local_6b8 = local_518;
                  FUN_140041c60(local_508,&DAT_141dc9fb8);
                  local_6b0 = local_508;
                  FUN_140041c60(local_4f8,&DAT_141dca4a8);
                  local_6a8 = local_4f8;
                  FUN_140041c60(local_4e8,&DAT_141dca1d8);
                  local_6a0 = local_4e8;
                  FUN_140041c60(local_4d8,&DAT_141dca338);
                  local_698 = local_4d8;
                  FUN_140041c60(local_4c8,&DAT_141dca538);
                  local_690 = local_4c8;
                  FUN_140041c60(local_4b8,&DAT_141dca0e8);
                  local_688 = local_4b8;
                  FUN_140041c60(local_4a8,&DAT_141dca5d8);
                  local_680 = local_4a8;
                  FUN_140041c60(local_498,&DAT_141dca398);
                  local_678 = local_498;
                  FUN_140041c60(local_488,&DAT_141dca388);
                  local_670 = local_488;
                  FUN_140041c60(local_478,&DAT_141dca3a8);
                  local_668 = local_478;
                  FUN_140041c60(local_468,&DAT_141dca4c8);
                  local_660 = local_468;
                  FUN_140041c60(local_458,&DAT_141dca198);
                  local_658 = local_458;
                  FUN_140041c60(local_448,&DAT_141dca438);
                  local_650 = local_448;
                  FUN_140041c60(local_438,&DAT_141dca008);
                  local_648 = local_438;
                  FUN_140041c60(local_428,&DAT_141dca4e8);
                  local_640 = local_428;
                  FUN_140041c60(local_418,&DAT_141dca448);
                  local_638 = local_418;
                  FUN_140041c60(local_408,&DAT_141dca218);
                  local_630 = local_408;
                  FUN_140041c60(local_3f8,&DAT_141dca118);
                  local_628 = local_3f8;
                  FUN_140041c60(local_3e8,&DAT_141dc9fd8);
                  local_620 = local_3e8;
                  FUN_140041c60(local_3d8,&DAT_141dca278);
                  local_618 = local_3d8;
                  FUN_140041c60(local_3c8,&DAT_141dca0a8);
                  local_610 = local_3c8;
                  FUN_140041c60(local_3b8,&DAT_141dc9fe8);
                  local_608 = local_3b8;
                  FUN_140041c60(local_3a8,&DAT_141dca3c8);
                  local_600 = local_3a8;
                  FUN_140041c60(local_398,&DAT_141dca098);
                  local_5f8 = local_398;
                  FUN_140041c60(local_388,&DAT_141dca1c8);
                  local_5f0 = local_388;
                  FUN_140041c60(local_378,&DAT_141dca258);
                  local_5e8 = local_378;
                  FUN_140041c60(local_368,&DAT_141dca578);
                  local_5e0 = local_368;
                  FUN_140041c60(local_358,&DAT_141dca2f8);
                  local_5d8 = local_358;
                  FUN_140041c60(local_348,&DAT_141dca558);
                  local_5d0 = local_348;
                  FUN_140041c60(local_338,&DAT_141dca038);
                  local_5c8 = local_338;
                  pcVar9 = (code *)&local_6f8;
                  uVar4 = gml_Script_anon_6694___InputSystem___InputSystem
                                    (local_res8,local_res10,&local_768,0x27,pcVar9);
                  cVar2 = FUN_140e491e0(uVar4);
                  if (cVar2 != '\0') {
                    local_738 = 0x74;
                    if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_758);
                    }
                    local_758 = 0;
                    local_750 = 0;
                    local_74c = 5;
                    FUN_140041c60(local_328,&DAT_141dca3f8);
                    local_5c0 = local_328;
                    pcVar9 = (code *)&local_5c0;
                    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                              (local_res8,local_res10,&local_758,1,pcVar9);
                    local_738 = 0x75;
                    uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                    uVar5 = FUN_1400441b0(local_108,1);
                    FUN_140041c60(uVar4,uVar5);
                    FUN_140041b30(local_108);
                  }
                  local_738 = 0x77;
                }
                else {
                  local_738 = 0x6d;
                  if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_758);
                  }
                  local_758 = 0;
                  local_750 = 0;
                  local_74c = 5;
                  FUN_140041c60(local_488,&DAT_141dca4b8);
                  local_670 = local_488;
                  pcVar9 = (code *)&local_670;
                  gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                            (local_res8,local_res10,&local_758,1,pcVar9);
                  local_738 = 0x6e;
                  uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                  uVar5 = FUN_1400441b0(local_118,1);
                  FUN_140041c60(uVar4,uVar5);
                  FUN_140041b30(local_118);
                  local_738 = 0x77;
                }
              }
              else {
                local_738 = 0x67;
                if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_758);
                }
                local_758 = 0;
                local_750 = 0;
                local_74c = 5;
                FUN_140041c60(local_518,&DAT_141dca488);
                local_6b8 = local_518;
                pcVar9 = (code *)&local_6b8;
                gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                          (local_res8,local_res10,&local_758,1,pcVar9);
                local_738 = 0x68;
                uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
                uVar5 = FUN_1400441b0(local_b8,1);
                FUN_140041c60(uVar4,uVar5);
                FUN_140041b30(local_b8);
                local_738 = 0x77;
              }
            }
            else {
              local_738 = 0x62;
              if ((1 << ((byte)local_74c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_758);
              }
              local_758 = 0;
              local_750 = 0;
              local_74c = 5;
              FUN_140041c60(local_568,&DAT_141dca158);
              local_6e0 = local_568;
              pcVar9 = (code *)&local_6e0;
              gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                        (local_res8,local_res10,&local_758,1,pcVar9);
              local_738 = 99;
              uVar4 = FUN_1400419a0(local_res8,DAT_1419fd318);
              uVar5 = FUN_1400441b0(local_138,1);
              FUN_140041c60(uVar4,uVar5);
              FUN_140041b30(local_138);
              local_738 = 0x77;
            }
          }
          break;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar7 < 6);
      FUN_140041b30(&local_228);
      cVar2 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  FUN_140045ef0(local_e8);
  FUN_140041b30(&local_758);
  FUN_140041b30(&local_768);
  FUN_140041b30(&local_730);
  FUN_140041b30(&local_5b8);
  FUN_140041b30(&local_5a8);
  FUN_140041b30(&local_720);
  FUN_140041b30(&local_710);
  _eh_vector_destructor_iterator_(local_598,0x10,0x28,FUN_140041b30);
  FUN_140041970(&local_748);
  return param_3;
}

