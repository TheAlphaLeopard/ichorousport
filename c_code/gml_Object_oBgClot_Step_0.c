// gml_Object_oBgClot_Step_0 @ 0x1406823a0

undefined8 *
gml_Object_oBgClot_Step_0
          (undefined8 **param_1,undefined8 **param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double *pdVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar18;
  double dVar19;
  undefined8 **local_res8;
  undefined8 **local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar22;
  undefined8 **ppuVar23;
  undefined1 **ppuVar24;
  undefined8 **ppuVar25;
  ulonglong in_stack_fffffffffffff8b0;
  ulonglong uVar26;
  undefined8 local_748;
  undefined4 local_740;
  undefined4 local_73c;
  undefined8 local_738;
  char *local_730;
  undefined4 local_728;
  undefined8 local_720;
  undefined4 local_718;
  undefined4 local_714;
  undefined8 *local_710;
  undefined8 *local_708;
  undefined8 *local_700;
  undefined8 *local_6f8;
  undefined8 *local_6f0;
  undefined1 *local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  undefined4 local_6cc;
  undefined8 **local_6c8;
  undefined4 local_6bc;
  undefined8 local_6b8;
  undefined4 local_6ac;
  undefined8 local_6a8 [2];
  undefined8 local_698 [2];
  undefined8 local_688 [2];
  undefined8 local_678 [2];
  undefined8 local_668 [2];
  undefined1 local_658 [16];
  undefined8 local_648 [2];
  undefined8 local_638;
  uint local_62c;
  double local_628;
  uint local_61c;
  undefined8 local_618;
  undefined4 local_60c;
  undefined8 local_608;
  uint local_5fc;
  undefined8 local_5f8;
  undefined4 local_5ec;
  double local_5e8;
  uint local_5dc;
  double local_5d8;
  uint local_5cc;
  undefined8 local_5c8;
  undefined4 local_5bc;
  undefined1 local_5b8 [12];
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined4 local_59c;
  undefined8 local_598;
  uint local_58c;
  undefined8 local_588;
  uint local_57c;
  undefined8 local_578;
  undefined4 local_56c;
  undefined1 local_568 [12];
  undefined4 local_55c;
  undefined8 local_558;
  undefined4 local_54c;
  undefined8 local_548;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_52c;
  undefined8 local_528;
  undefined4 local_51c;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_49c;
  undefined8 local_498;
  undefined4 local_48c;
  undefined8 local_488;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_46c;
  undefined8 local_468;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_43c;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  longlong local_418;
  undefined8 local_408;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3ec;
  undefined8 **local_3e8;
  undefined4 local_3dc;
  undefined1 local_3d8 [12];
  undefined4 local_3cc;
  undefined8 **local_3c8;
  undefined4 local_3bc;
  undefined1 local_3b8 [12];
  undefined4 local_3ac;
  undefined1 local_3a8 [12];
  undefined4 local_39c;
  undefined8 local_398;
  undefined4 local_38c;
  undefined8 local_388;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_30c;
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
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 **local_258;
  undefined4 local_24c;
  undefined8 **local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 **local_228;
  undefined4 local_21c;
  undefined8 **local_218;
  undefined4 local_20c;
  ulonglong local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined1 local_1d0 [12];
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined4 local_164;
  int local_160 [2];
  undefined8 *local_158;
  undefined1 local_150 [12];
  undefined4 local_144;
  undefined1 local_140 [12];
  undefined4 local_134;
  undefined1 local_130 [12];
  undefined4 local_124;
  undefined1 local_120 [32];
  undefined1 local_100 [192];
  
  local_res20 = 0;
  local_730 = "gml_Script_anon@179@gml_Object_oAtkBox_Create_0";
  local_738 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_738;
  local_728 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_160,param_4,2,param_5);
  pcVar22 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_6a8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_25c = 0xffffff;
  local_268 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_60c = 0xffffff;
  local_618 = 0;
  local_61c = 0xffffff;
  local_628 = 0.0;
  local_62c = 0xffffff;
  local_638 = 0;
  local_6cc = 0xffffff;
  local_6d8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_6ac = 0xffffff;
  local_6b8 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_56c = 0xffffff;
  local_578 = 0;
  local_43c = 0xffffff;
  local_448 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_57c = 0xffffff;
  local_588 = 0;
  local_58c = 0xffffff;
  local_598 = 0;
  local_53c = 0xffffff;
  local_548 = 0;
  local_5bc = 0xffffff;
  local_5c8 = 0;
  local_59c = 0xffffff;
  local_5a8 = 0;
  local_47c = 0xffffff;
  local_488 = 0;
  local_48c = 0xffffff;
  local_498 = 0;
  local_3fc = 0xffffff;
  local_408 = 0;
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_1d8 = uVar7;
  uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a01e58);
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_5ec = 0xffffff;
  local_5f8 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_52c = 0xffffff;
  local_538 = 0;
  local_51c = 0xffffff;
  local_528 = 0;
  local_5fc = 0xffffff;
  local_608 = 0;
  local_5cc = 0xffffff;
  local_5d8 = 0.0;
  local_5dc = 0xffffff;
  local_5e8 = 0.0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_4dc = 0xffffff;
  local_4e8 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_4fc = 0xffffff;
  local_508 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_4ec = 0xffffff;
  local_4f8 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_73c = 0;
  local_748 = 0;
  local_714 = 0;
  local_720 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_728 = 10;
  if (local_160[0] < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)local_158[1];
  }
  iVar4 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_728 = 10;
    FUN_140e645a0(&local_558,&LAB_140682090,local_res8);
    if (local_160[0] < 2) {
      puVar12 = &DAT_1419df7b0;
    }
    else {
      puVar12 = (undefined8 *)local_158[1];
    }
    FUN_140041c60(puVar12,&local_558);
    if ((1 << ((byte)local_54c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_558);
    }
  }
  local_728 = 0xc;
  local_6bc = 6;
  local_6c8 = local_res8;
  uVar10 = (ulonglong)pcVar22 & 0xffffffffffffff00;
  FUN_140e87440(&local_6c8,DAT_141a0a7e8,0,&local_268,uVar10,
                in_stack_fffffffffffff8b0 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)local_6bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_6c8);
  }
  cVar2 = FUN_140041d90(&local_268,0xffffffff);
  if ((cVar2 != '\0') && (cVar2 = FUN_140e491e0(uVar6), cVar2 == '\0')) {
    local_728 = 0xe;
    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_748);
    }
    local_748 = 0;
    local_740 = 0;
    local_73c = 5;
    uVar26 = 0;
    uVar10 = CONCAT44(uVar17,DAT_1419ef5d8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,0,uVar10,0);
    FUN_140041c60(&local_618,uVar6);
    local_728 = 0xf;
    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_748);
    }
    local_748 = 0;
    local_740 = 0;
    local_73c = 5;
    local_6bc = 6;
    local_6c8 = local_res8;
    uVar26 = uVar26 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_6c8,DAT_1419fe0e8,0x80000000,&local_628,uVar10,uVar26);
    if ((1 << ((byte)local_6bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6c8);
    }
    local_6bc = 6;
    local_6c8 = local_res8;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_6c8,DAT_1419fe158,0x80000000,&local_638,uVar10,uVar26 & 0xffffffffffffff00)
    ;
    uVar17 = (undefined4)(uVar10 >> 0x20);
    if ((1 << ((byte)local_6bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6c8);
    }
    FUN_140041c60(local_6a8,&local_628);
    local_710 = local_6a8;
    FUN_140041c60(local_698,&local_638);
    local_708 = local_698;
    local_6bc = 0xf;
    local_6c8 = (undefined8 **)0x100000000000005;
    FUN_140041c60(local_688,&local_6c8);
    if ((1 << ((byte)local_6bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_6c8);
    }
    local_700 = local_688;
    local_6f8 = &local_618;
    FUN_1400441d0(local_668,&DAT_1419df7a0);
    local_6f0 = local_668;
    ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a56b80);
    FUN_140e634e0(local_res8,local_res10,&local_748,5,ppuVar23,&local_710);
    local_728 = 0x10;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar11 = 0;
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
                      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_748);
                      }
                      local_748 = 0;
                      local_740 = 0;
                      local_73c = 5;
                      local_710 = &local_618;
                      uVar18 = CONCAT44(uVar17,DAT_1419f58d8);
                      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,1,uVar18,&local_710);
                      uVar17 = (undefined4)((ulonglong)uVar18 >> 0x20);
                      cVar2 = FUN_140e491e0(uVar6);
                      if (cVar2 != '\0') {
                        local_728 = 0x75;
                        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_748);
                        }
                        local_748 = 0;
                        local_740 = 0;
                        local_73c = 5;
                        local_710 = &local_618;
                        uVar7 = CONCAT44(uVar17,DAT_1419f6038);
                        FUN_140e634e0(local_res8,local_res10,&local_748,1,uVar7,&local_710);
                        uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
                        local_728 = 0x77;
                        if (local_160[0] < 1) {
                          puVar12 = &DAT_1419df7b0;
                        }
                        else {
                          puVar12 = (undefined8 *)*local_158;
                        }
                        cVar2 = FUN_140046c90(puVar12,0);
                        if (cVar2 != '\0') {
                          local_728 = 0x78;
                          param_3 = local_res18;
                          goto LAB_14068636d;
                        }
                        local_728 = 0x7a;
                        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_748);
                        }
                        local_748 = 0;
                        local_740 = 0;
                        local_73c = 5;
                        uVar26 = 0;
                        uVar10 = CONCAT44(uVar17,DAT_1419ef5d8);
                        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,0,uVar10,0);
                        FUN_140041c60(&local_618,uVar7);
                        local_728 = 0x7b;
                        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_748);
                        }
                        local_748 = 0;
                        local_740 = 0;
                        local_73c = 5;
                        FUN_1400ec6d0(local_568,local_res8);
                        uVar26 = uVar26 & 0xffffffffffffff00;
                        uVar10 = uVar10 & 0xffffffffffffff00;
                        FUN_140e87440(local_568,DAT_1419fe0e8,0x80000000,&local_628,uVar10,uVar26);
                        FUN_140041b30(local_568);
                        FUN_1400ec6d0(local_5b8,local_res8);
                        uVar10 = uVar10 & 0xffffffffffffff00;
                        FUN_140e87440(local_5b8,DAT_1419fe158,0x80000000,&local_638,uVar10,
                                      uVar26 & 0xffffffffffffff00);
                        uVar17 = (undefined4)(uVar10 >> 0x20);
                        FUN_140041b30(local_5b8);
                        FUN_140041c60(local_6a8,&local_628);
                        local_710 = local_6a8;
                        FUN_140041c60(local_698,&local_638);
                        local_708 = local_698;
                        uVar7 = FUN_140045f40(local_518,0xb8,1);
                        FUN_140041c60(local_688,uVar7);
                        FUN_140041b30(local_518);
                        local_700 = local_688;
                        local_6f8 = &local_618;
                        FUN_1400441d0(local_668,&DAT_1419df7a0);
                        local_6f0 = local_668;
                        ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a56b80);
                        FUN_140e634e0(local_res8,local_res10,&local_748,5,ppuVar23,&local_710);
                        local_728 = 0x7d;
                        FUN_140044220(&local_458,0);
                        local_728 = 0x7e;
                        FUN_140044220(&local_478,0);
                        bVar1 = true;
                        goto LAB_140685520;
                      }
                      local_728 = 0x12;
                      if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_720);
                      }
                      local_720 = 0;
                      local_718 = 0;
                      local_714 = 5;
                      local_708 = &local_618;
                      FUN_1400441d0(local_688,&DAT_141dc67b0);
                      local_700 = local_688;
                      uVar18 = CONCAT44(uVar17,DAT_1419f5a78);
                      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_720,2,uVar18,&local_708);
                      uVar17 = (undefined4)((ulonglong)uVar18 >> 0x20);
                      FUN_140041c60(&local_6d8,uVar6);
                      local_728 = 0x13;
                      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_748);
                      }
                      local_748 = 0;
                      local_740 = 0;
                      local_73c = 5;
                      local_710 = &local_618;
                      FUN_1400441d0(local_698,&DAT_141dc67b0);
                      local_708 = local_698;
                      ppuVar25 = &local_710;
                      uVar10 = CONCAT44(uVar17,DAT_1419f5938);
                      FUN_140e634e0(local_res8,local_res10,&local_748,2,uVar10,ppuVar25);
                      local_728 = 0x15;
                      local_6bc = 6;
                      local_6c8 = local_res8;
                      ppuVar23 = (undefined8 **)(uVar10 & 0xffffffffffffff00);
                      FUN_140e87440(&local_6c8,DAT_141a0a828,0x80000000,&local_238,ppuVar23,
                                    (ulonglong)ppuVar25 & 0xffffffffffffff00);
                      if ((1 << ((byte)local_6bc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_6c8);
                      }
                      iVar4 = FUN_140e851f0(&local_6d8,&local_238,DAT_141955260,0);
                      uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
                      if (iVar4 != 0) break;
                      local_728 = 0x15;
                    }
                    local_728 = 0x16;
                    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_748);
                    }
                    local_748 = 0;
                    local_740 = 0;
                    local_73c = 5;
                    uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
                    FUN_140041c60(local_6a8,uVar6);
                    local_710 = local_6a8;
                    ppuVar25 = &local_710;
                    ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a02ef8);
                    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,1,ppuVar23,ppuVar25);
                    cVar2 = FUN_140e491e0(uVar6);
                    if (cVar2 != '\0') break;
                    local_728 = 0x16;
                  }
                  local_728 = 0x17;
                  if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_748);
                  }
                  local_748 = 0;
                  local_740 = 0;
                  local_73c = 5;
                  uVar10 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
                  FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,
                                (ulonglong)ppuVar25 & 0xffffffffffffff00);
                  uVar17 = (undefined4)(uVar10 >> 0x20);
                  FUN_140041c60(local_6a8,&local_6b8);
                  local_710 = local_6a8;
                  ppuVar25 = &local_710;
                  ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a02ef8);
                  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,1,ppuVar23,ppuVar25);
                  cVar2 = FUN_140e491e0(uVar6);
                  if (cVar2 != '\0') break;
                  local_728 = 0x17;
                }
                local_728 = 0x18;
                uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a01e48);
                cVar2 = FUN_140e491e0(uVar6);
                if (cVar2 != '\0') break;
                local_728 = 0x18;
              }
              local_728 = 0x19;
              ppuVar23 = (undefined8 **)((ulonglong)ppuVar23 & 0xffffffffffffff00);
              FUN_140e87440(&local_6d8,DAT_141a01e48,0x80000000,&local_288,ppuVar23,
                            (ulonglong)ppuVar25 & 0xffffffffffffff00);
              cVar2 = FUN_140e491e0(&local_288);
              if (cVar2 != '\0') break;
              local_728 = 0x19;
            }
            local_728 = 0x1a;
            uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
            ppuVar23 = local_res8;
            ppuVar25 = local_res10;
            FUN_140e87170(uVar6,DAT_141a1f580,0x80000000,&local_298,local_res8,local_res10);
            local_26c = 0xf;
            local_278 = 0x1000000000000ee;
            iVar4 = FUN_140e851f0(&local_298,&local_278,DAT_141955260,0);
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            if (iVar4 == 0) break;
            local_728 = 0x1a;
          }
          local_728 = 0x1b;
          uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
          uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
          uVar10 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,uVar26);
          uVar26 = uVar26 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_6b8,DAT_141a56cd0,0x80000000,&local_578,uVar10,uVar26);
          ppuVar23 = (undefined8 **)(uVar10 & 0xffffffffffffff00);
          FUN_140e87440(uVar6,DAT_141a56cd0,0x80000000,&local_448,ppuVar23,
                        uVar26 & 0xffffffffffffff00);
          iVar4 = FUN_140e851f0(&local_578,&local_448,DAT_141955260,0);
          if (iVar4 != 0) break;
          local_728 = 0x1b;
        }
        local_728 = 0x1c;
        ppuVar23 = local_res8;
        ppuVar25 = local_res10;
        FUN_140e87170(&local_6d8,DAT_141a0a7e8,0,&local_2a8,local_res8,local_res10);
        cVar2 = FUN_140041d90(&local_2a8,0xffffffff);
        if (cVar2 != '\0') break;
        local_728 = 0x1c;
      }
      local_728 = 0x20;
      FUN_140044220(&local_2b8,0x1e);
      FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_2b8);
      local_728 = 0x21;
      FUN_140044220(&local_2c8,0x1e);
      FUN_140e86c30(&local_6d8,DAT_141a0a7e8,0,&local_2c8);
      local_728 = 0x23;
      local_24c = 6;
      local_258 = local_res8;
      uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
      uVar10 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_628,uVar10,uVar26);
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_23c = 6;
      local_248 = local_res8;
      FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_638,uVar10 & 0xffffffffffffff00,
                    uVar26 & 0xffffffffffffff00);
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140e87170(&local_6d8,DAT_1419fe0e8,0x80000000,&local_588,local_res8,local_res10);
      ppuVar23 = local_res8;
      ppuVar25 = local_res10;
      FUN_140e87170(&local_6d8,DAT_1419fe158,0x80000000,&local_598,local_res8,local_res10);
      if ((local_58c & 0xffffff) == 0) {
        uVar17 = (undefined4)local_598;
        uVar16 = (undefined4)((ulonglong)local_598 >> 0x20);
      }
      else {
        uVar6 = FUN_140e4b060(&local_598);
        uVar17 = (undefined4)uVar6;
        uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
      }
      if ((local_57c & 0xffffff) == 0) {
        uVar13 = (undefined4)local_588;
        uVar20 = (undefined4)((ulonglong)local_588 >> 0x20);
      }
      else {
        uVar6 = FUN_140e4b060(&local_588);
        uVar13 = (undefined4)uVar6;
        uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
      }
      if ((local_62c & 0xffffff) == 0) {
        uVar14 = (undefined4)local_638;
        uVar21 = (undefined4)((ulonglong)local_638 >> 0x20);
      }
      else {
        uVar6 = FUN_140e4b060(&local_638);
        uVar14 = (undefined4)uVar6;
        uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
      }
      if ((local_61c & 0xffffff) == 0) {
        dVar19 = local_628;
      }
      else {
        dVar19 = (double)FUN_140e4b060(&local_628);
      }
      uVar6 = FUN_140e793d0((float)dVar19,(float)(double)CONCAT44(uVar21,uVar14),
                            (float)(double)CONCAT44(uVar20,uVar13),
                            (float)(double)CONCAT44(uVar16,uVar17));
      FUN_140045f90(&local_548,uVar6);
      local_728 = 0x25;
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
      uVar10 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
      FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,uVar26);
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_6b8,DAT_141a57560,0x80000000,&local_5c8,uVar10,uVar26);
      FUN_140e87440(&local_5c8,DAT_141a57310,0x80000000,&local_5a8,uVar10 & 0xffffffffffffff00,
                    uVar26 & 0xffffffffffffff00);
      FUN_1400441d0(local_6a8,&DAT_1419e7370);
      local_710 = local_6a8;
      local_708 = &local_548;
      uVar6 = FUN_140069500(&local_5c8);
      ppuVar23 = &local_710;
      puVar12 = &local_5a8;
      FUN_140e63610(uVar6,local_res10,&local_748,2,puVar12,ppuVar23);
      local_728 = 0x26;
      uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
      uVar26 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
      uVar10 = (ulonglong)puVar12 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a1f230,0x80000000,&local_488,uVar10,uVar26);
      pdVar9 = (double *)FUN_140053820(local_150,&local_548,0xb4);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar19 = *pdVar9;
      }
      else {
        dVar19 = (double)FUN_140e4b060(pdVar9);
      }
      fVar15 = (float)FUN_140e78f90(0x40400000,(float)dVar19);
      FUN_140162c50(&local_488,(double)fVar15);
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_150);
      }
      FUN_140e87930(uVar6,DAT_141a1f230,0x80000000,&local_488);
      local_728 = 0x27;
      pdVar9 = (double *)FUN_140053820(local_140,&local_548,0xb4);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar19 = *pdVar9;
      }
      else {
        dVar19 = (double)FUN_140e4b060(pdVar9);
      }
      uVar18 = FUN_140e79010(0x40400000,(float)dVar19);
      FUN_140045f90(&local_498,uVar18);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_140);
      }
      local_728 = 0x28;
      iVar4 = FUN_140e63cb0(local_120,&local_res8,&local_res10,uVar6);
      if (0 < iVar4) {
        do {
          (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
          local_728 = 0x28;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
          uVar10 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419ff968);
          uVar26 = 0;
          uVar18 = FUN_140e63610(local_res8,local_res10,&local_748,0,uVar10,0);
          cVar2 = FUN_140e491e0(uVar18);
          if ((cVar2 != '\0') && (cVar2 = FUN_140046bf0(&local_498,0), cVar2 != '\0')) {
            local_728 = 0x28;
            FUN_140044220(&local_498,0);
          }
          cVar2 = FUN_140e643f0(local_120,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_120,&local_res8,&local_res10);
      DAT_141a67c38 = 1;
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_6b8,DAT_141a56cd0,0x80000000,&local_578,uVar10,uVar26);
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a56cd0,0x80000000,&local_448,uVar10,uVar26);
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_5c8,DAT_141a57310,0x80000000,&local_5a8,uVar10,uVar26);
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a1f230,0x80000000,&local_488,uVar10,uVar26);
      DAT_141a67c38 = 0;
      DAT_141a72aac = 0;
      local_728 = 0x29;
      uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a1f500,0x80000000,&local_408,uVar10,uVar26);
      FUN_1400460e0(&local_408,&local_498);
      FUN_140e87930(uVar6,DAT_141a1f500,0x80000000,&local_408);
      local_728 = 0x2b;
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_720);
      }
      local_720 = 0;
      local_718 = 0;
      local_714 = 5;
      uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419ff888);
      uVar18 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
      uVar26 = uVar26 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar7,DAT_1419ef658,0x80000000,&local_2d8,uVar10,uVar26);
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,
                    uVar26 & 0xffffffffffffff00);
      uVar17 = (undefined4)(uVar10 >> 0x20);
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(local_1d0,gml_Script_anon_179_gml_Object_oAtkBox_Create_0,0);
      FUN_140041c60(uVar8,local_1d0);
      FUN_140e60910(1);
      FUN_140041c60(local_6a8,uVar8);
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d0);
      }
      local_710 = local_6a8;
      FUN_140041c60(local_698,&local_6b8);
      local_708 = local_698;
      FUN_140041c60(local_688,uVar18);
      local_700 = local_688;
      if (local_160[0] < 1) {
        puVar12 = &DAT_1419df7b0;
      }
      else {
        puVar12 = (undefined8 *)*local_158;
      }
      FUN_140041c60(local_678,puVar12);
      local_6f8 = local_678;
      FUN_140041c60(local_668,uVar6);
      local_6f0 = local_668;
      FUN_140041c60(local_658,&local_2d8);
      local_6e8 = local_658;
      ppuVar23 = &local_710;
      uVar18 = FUN_140e634e0(local_res8,local_res10,&local_720,5,CONCAT44(uVar17,DAT_1419fd6d8),
                             ppuVar23);
      FUN_140041c60(local_648,uVar18);
      local_6e0 = local_648;
      ppuVar24 = &local_6e8;
      gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                (local_res8,local_res10,&local_748,2,ppuVar24);
      local_728 = 0x34;
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_748);
        }
        local_748 = 0;
        local_740 = 0;
        local_73c = 5;
        (*(code *)(*local_res8)[1])(local_res8,DAT_1419ff888);
        uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fe9b8);
        uVar10 = (ulonglong)ppuVar24 & 0xffffffffffffff00;
        FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,
                      (ulonglong)ppuVar23 & 0xffffffffffffff00);
        uVar17 = (undefined4)(uVar10 >> 0x20);
        FUN_140041c60(local_6a8,uVar6);
        local_710 = local_6a8;
        FUN_140041c60(local_698,&local_6b8);
        local_708 = local_698;
        ppuVar23 = &local_710;
        uVar10 = CONCAT44(uVar17,DAT_141a573f0);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,2,uVar10,ppuVar23);
        cVar2 = FUN_140041d90(uVar6,0xffffffff);
        if (cVar2 != '\0') {
          local_728 = 0x35;
          if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_720);
          }
          local_720 = 0;
          local_718 = 0;
          local_714 = 5;
          uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419fe9b8);
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,
                        (ulonglong)ppuVar23 & 0xffffffffffffff00);
          uVar17 = (undefined4)(uVar10 >> 0x20);
          FUN_140041c60(local_688,uVar6);
          local_700 = local_688;
          FUN_140041c60(local_678,&local_6b8);
          ppuVar23 = &local_700;
          uVar10 = CONCAT44(uVar17,DAT_141a57350);
          local_6f8 = local_678;
          FUN_140e634e0(local_res8,local_res10,&local_720,2,uVar10,ppuVar23);
          local_728 = 0x36;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
          local_21c = 6;
          local_228 = local_res8;
          uVar26 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_628,uVar10,uVar26);
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_20c = 6;
          local_218 = local_res8;
          FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_638,uVar10 & 0xffffffffffffff00,
                        uVar26 & 0xffffffffffffff00);
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          ppuVar23 = local_res8;
          ppuVar25 = local_res10;
          FUN_140e87170(uVar6,DAT_141a0a828,0x80000000,&local_2e8,local_res8,local_res10);
          uVar10 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          FUN_140e87440(&local_6d8,DAT_141a1f0d0,0x80000000,&local_6b8,uVar10,
                        (ulonglong)ppuVar25 & 0xffffffffffffff00);
          uVar17 = (undefined4)(uVar10 >> 0x20);
          uVar11 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
          if (uVar11 == 0xf) {
            uVar10 = 0x4000004;
          }
          else {
            uVar10 = (ulonglong)(uVar11 | 0x1000000);
          }
          local_1fc = 0xf;
          local_208 = uVar10 << 0x20 | (ulonglong)(DAT_141a575a0 & 0xffffff);
          FUN_140041c60(local_6a8,&local_208);
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_710 = local_6a8;
          FUN_140041c60(local_698,&local_628);
          local_708 = local_698;
          FUN_140041c60(local_688,&local_638);
          local_700 = local_688;
          FUN_140041c60(local_678,&local_2e8);
          local_6f8 = local_678;
          FUN_140041c60(local_668,&local_6b8);
          local_6f0 = local_668;
          if (local_160[0] < 1) {
            FUN_140041c60(local_658,&DAT_1419df7b0);
LAB_140683efe:
            puVar12 = &DAT_1419df7b0;
          }
          else {
            FUN_140041c60(local_658,*local_158);
            if (local_160[0] < 2) goto LAB_140683efe;
            puVar12 = (undefined8 *)local_158[1];
          }
          local_6e8 = local_658;
          FUN_140041c60(local_648,puVar12);
          local_6e0 = local_648;
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,7,CONCAT44(uVar17,DAT_1419fd6d8),
                                &local_710);
          FUN_140041c60(&local_5f8,uVar6);
          local_728 = 0x37;
          local_1ec = 0xd;
          local_1f8 = 0x3ff0000000000000;
          FUN_140041c60(&local_2f8,&local_1f8);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140e87930(&local_5f8,DAT_141a57570,0x80000000,&local_2f8);
          local_728 = 0x38;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          local_710 = &local_5f8;
          FUN_140041c60(local_698,&DAT_1419df7b0);
          local_708 = local_698;
          gml_Script_draw_line_sprite(local_res8,local_res10,&local_748,2,&local_710);
        }
      }
      local_728 = 0x3b;
      FUN_140044220(&local_308,10);
      uVar6 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a1f0d0);
      FUN_140e87930(uVar6,DAT_1419ffbb8,0x80000000,&local_308);
      local_728 = 0x3c;
      local_1dc = 0xd;
      local_1e8 = 0x3ff0000000000000;
      FUN_140041c60(&local_318,&local_1e8);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140e87930(&local_6d8,DAT_141a01e08,0x80000000,&local_318);
      local_728 = 0x3d;
      uVar6 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a01e08);
      local_3ec = 0xd;
      local_3f8 = 0x3ff0000000000000;
      FUN_140041c60(uVar6,&local_3f8);
      if ((1 << ((byte)local_3ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3f8);
      }
      local_728 = 0x3f;
      ppuVar23 = local_res8;
      ppuVar25 = local_res10;
      FUN_140e87170(&local_6d8,DAT_1419fe0e8,0x80000000,&local_588,local_res8,local_res10);
      local_3dc = 6;
      local_3e8 = local_res8;
      FUN_140e87440(&local_3e8,DAT_1419fe0e8,0x80000000,&local_628,
                    (ulonglong)ppuVar23 & 0xffffffffffffff00,
                    (ulonglong)ppuVar25 & 0xffffffffffffff00);
      if ((1 << ((byte)local_3dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3e8);
      }
      FUN_1400424a0(local_3d8,&local_588);
      local_res20 = 0x400;
      FUN_1400460e0(local_3d8,&local_628);
      uVar6 = FUN_140081e90(local_130,local_3d8,0x4000000000000000);
      FUN_140041c60(&local_538,uVar6);
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_130);
      }
      local_res20 = 0;
      if ((1 << ((byte)local_3cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_3d8);
      }
      local_728 = 0x40;
      ppuVar23 = local_res8;
      ppuVar25 = local_res10;
      FUN_140e87170(&local_6d8,DAT_1419fe158,0x80000000,&local_598,local_res8,local_res10);
      local_3bc = 6;
      local_3c8 = local_res8;
      uVar10 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
      FUN_140e87440(&local_3c8,DAT_1419fe158,0x80000000,&local_638,uVar10,
                    (ulonglong)ppuVar25 & 0xffffffffffffff00);
      if ((1 << ((byte)local_3bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3c8);
      }
      FUN_1400424a0(local_3b8,&local_598);
      local_res20 = 0x1000;
      FUN_1400460e0(local_3b8,&local_638);
      uVar6 = FUN_140081e90(local_5b8,local_3b8,0x4000000000000000);
      FUN_140041c60(&local_528,uVar6);
      if ((1 << ((byte)local_5ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_5b8);
      }
      local_res20 = 0;
      if ((1 << ((byte)local_3ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_3b8);
      }
      local_728 = 0x42;
      dVar19 = (double)FUN_140e78f40(3);
      iVar4 = (int)dVar19;
      if (0 < iVar4) {
        do {
          uVar17 = (undefined4)(uVar10 >> 0x20);
          iVar4 = iVar4 + -1;
          local_728 = 0x44;
          uVar7 = FUN_140e78f40(0xffffffffffffff88,0x78);
          FUN_1400424a0(local_3a8,&local_548);
          local_res20 = 0x4000;
          FUN_140162c50(local_3a8,uVar7);
          uVar7 = FUN_140053820(local_568,local_3a8,0xb4);
          FUN_140041c60(&local_608,uVar7);
          if ((1 << ((byte)local_55c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_568);
          }
          local_res20 = 0;
          if ((1 << ((byte)local_39c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_3a8);
          }
          local_728 = 0x45;
          uVar7 = FUN_140e79480(0x4000000000000000);
          FUN_140041cb0(&local_5d8,uVar7);
          local_728 = 0x46;
          uVar7 = FUN_140e794b0(0x4008000000000000,0x4018000000000000);
          FUN_140041cb0(&local_5e8,uVar7);
          local_728 = 0x47;
          if ((local_5fc & 0xffffff) == 0) {
            uVar16 = (undefined4)local_608;
            uVar13 = (undefined4)((ulonglong)local_608 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(&local_608);
            uVar16 = (undefined4)uVar7;
            uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((local_5cc & 0xffffff) == 0) {
            dVar19 = local_5d8;
          }
          else {
            dVar19 = (double)FUN_140e4b060(&local_5d8);
          }
          uVar7 = FUN_140e78f90((float)dVar19,(float)(double)CONCAT44(uVar13,uVar16));
          FUN_140045f90(&local_170,uVar7);
          local_728 = 0x48;
          if ((local_5fc & 0xffffff) == 0) {
            uVar16 = (undefined4)local_608;
            uVar13 = (undefined4)((ulonglong)local_608 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(&local_608);
            uVar16 = (undefined4)uVar7;
            uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((local_5cc & 0xffffff) == 0) {
            dVar19 = local_5d8;
          }
          else {
            dVar19 = (double)FUN_140e4b060(&local_5d8);
          }
          uVar7 = FUN_140e79010((float)dVar19,(float)(double)CONCAT44(uVar13,uVar16));
          FUN_140045f90(&local_1c0,uVar7);
          local_728 = 0x4a;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          local_710 = &local_538;
          local_708 = &local_528;
          FUN_140041c60(local_688,&DAT_141dd5148);
          local_700 = local_688;
          local_38c = 0xf;
          local_398 = 0x10000000000011c;
          FUN_140041c60(local_678,&local_398);
          if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_398);
          }
          ppuVar23 = &local_710;
          uVar10 = CONCAT44(uVar17,DAT_141a0a7c8);
          local_6f8 = local_678;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,4,uVar10,ppuVar23);
          iVar5 = FUN_140e63cb0(local_428,&local_res8,&local_res10,uVar7);
          if (0 < iVar5) {
            do {
              local_728 = 0x4c;
              uVar7 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a1f230);
              if ((local_5fc & 0xffffff) == 0) {
                uVar17 = (undefined4)local_608;
                uVar16 = (undefined4)((ulonglong)local_608 >> 0x20);
              }
              else {
                uVar6 = FUN_140e4b060(&local_608);
                uVar17 = (undefined4)uVar6;
                uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
              }
              if ((local_5dc & 0xffffff) == 0) {
                dVar19 = local_5e8;
              }
              else {
                dVar19 = (double)FUN_140e4b060(&local_5e8);
              }
              uVar6 = FUN_140e78f90((float)dVar19,(float)(double)CONCAT44(uVar16,uVar17));
              FUN_140045f90(uVar7,uVar6);
              local_728 = 0x4d;
              uVar7 = (*(code *)(*local_res8)[2])(local_res8,DAT_141a1f500);
              if ((local_5fc & 0xffffff) == 0) {
                uVar17 = (undefined4)local_608;
                uVar16 = (undefined4)((ulonglong)local_608 >> 0x20);
              }
              else {
                uVar6 = FUN_140e4b060(&local_608);
                uVar17 = (undefined4)uVar6;
                uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
              }
              if ((local_5dc & 0xffffff) == 0) {
                dVar19 = local_5e8;
              }
              else {
                dVar19 = (double)FUN_140e4b060(&local_5e8);
              }
              uVar6 = FUN_140e79010((float)dVar19,(float)(double)CONCAT44(uVar16,uVar17));
              FUN_140045f90(uVar7,uVar6);
              cVar2 = FUN_140e643f0(local_428,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_428,&local_res8,&local_res10);
          DAT_141a67c38 = 1;
          uVar26 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_6b8,DAT_141a56cd0,0x80000000,&local_578,uVar10,uVar26);
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_5c8,DAT_141a57310,0x80000000,&local_5a8,uVar10,
                        uVar26 & 0xffffffffffffff00);
          DAT_141a67c38 = 0;
          DAT_141a72aac = 0;
          if (local_418 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar4);
        uVar7 = local_1d8;
      }
      local_728 = 0x52;
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      local_710 = &local_538;
      local_708 = &local_528;
      FUN_1400441d0(local_688,&DAT_1419e73c0);
      local_700 = local_688;
      local_54c = 0xf;
      local_558 = 0x100000100000022;
      FUN_140041c60(local_678,&local_558);
      if ((1 << ((byte)local_54c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_558);
      }
      local_6f8 = local_678;
      FUN_1400441d0(local_668,&DAT_1419e7380);
      local_6f0 = local_668;
      gml_GlobalScript_MIXERINIT(local_res8,local_res10,&local_748,5,&local_710);
      local_728 = 0x53;
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      FUN_1400441d0(local_6a8,&DAT_1419e73b0);
      local_710 = local_6a8;
      FUN_1400441d0(local_698,&DAT_1419e73a0);
      local_708 = local_698;
      ppuVar23 = &local_710;
      gml_Script_IK_documentation(local_res8,local_res10,&local_748,2,ppuVar23);
      uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
      local_728 = 0x54;
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_720);
      }
      local_720 = 0;
      local_718 = 0;
      local_714 = 5;
      uVar6 = FUN_140045f40(local_100,0x200010f,1);
      FUN_140041c60(local_6a8,uVar6);
      FUN_140041b30(local_100);
      local_710 = local_6a8;
      uVar6 = FUN_140045f40(local_1b0,0x2000110,1);
      FUN_140041c60(local_698,uVar6);
      FUN_140041b30(local_1b0);
      local_708 = local_698;
      uVar6 = FUN_140045f40(local_1a0,0x2000111,1);
      FUN_140041c60(local_688,uVar6);
      FUN_140041b30(local_1a0);
      local_700 = local_688;
      uVar6 = FUN_140e78db0(&local_720,3,&local_710);
      FUN_140041c60(local_678,uVar6);
      local_6f8 = local_678;
      FUN_1400441d0(local_668,&DAT_1419e7390);
      local_6f0 = local_668;
      FUN_1400441d0(local_658,&DAT_1419df7a0);
      local_6e8 = local_658;
      ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a0a2e8);
      FUN_140e634e0(local_res8,local_res10,&local_748,3,ppuVar23,&local_6f8);
      local_728 = 0x56;
      dVar19 = (double)FUN_140e78f40(2);
      iVar4 = (int)dVar19;
      while (uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20), 0 < iVar4) {
        iVar4 = iVar4 + -1;
        local_728 = 0x58;
        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_748);
        }
        local_748 = 0;
        local_740 = 0;
        local_73c = 5;
        local_710 = &local_538;
        local_708 = &local_528;
        FUN_140041c60(local_688,&DAT_141dd5158);
        local_700 = local_688;
        uVar6 = FUN_140045f40(local_190,0x12d,1);
        FUN_140041c60(local_678,uVar6);
        FUN_140041b30(local_190);
        ppuVar23 = &local_710;
        uVar10 = CONCAT44(uVar17,DAT_141a0a7c8);
        local_6f8 = local_678;
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,4,uVar10,ppuVar23);
        iVar5 = FUN_140e63cb0(local_428,&local_res8,&local_res10,uVar6);
        if (0 < iVar5) {
          do {
            local_728 = 0x5a;
            uVar6 = FUN_140045f40(local_180,0x1000221,1);
            FUN_140041c60(&local_4a8,uVar6);
            FUN_140041b30(local_180);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_4a8);
            local_728 = 0x5b;
            uVar6 = FUN_140e79480(0x4076800000000000);
            FUN_140041cb0(&local_4b8,uVar6);
            FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_4b8);
            local_728 = 0x5d;
            uVar6 = FUN_140e794b0(0x3fe0000000000000,0x3ff4cccccccccccd);
            FUN_140041cb0(&local_4c8,uVar6);
            FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_4c8);
            local_728 = 0x5f;
            FUN_140044220(&local_4d8,0);
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_4d8);
            local_728 = 0x60;
            FUN_140044220(&local_4e8,1);
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_4e8);
            cVar2 = FUN_140e643f0(local_428,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_428,&local_res8,&local_res10);
        DAT_141a67c38 = 1;
        uVar26 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_6b8,DAT_141a56cd0,0x80000000,&local_578,uVar10,uVar26);
        ppuVar23 = (undefined8 **)(uVar10 & 0xffffffffffffff00);
        FUN_140e87440(&local_5c8,DAT_141a57310,0x80000000,&local_5a8,ppuVar23,
                      uVar26 & 0xffffffffffffff00);
        DAT_141a67c38 = 0;
        DAT_141a72aac = 0;
        FUN_140045ef0(local_428);
      }
      local_728 = 0x65;
      dVar19 = (double)FUN_140e78f40(3);
      iVar4 = (int)dVar19;
      while (uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20), 0 < iVar4) {
        iVar4 = iVar4 + -1;
        local_728 = 0x67;
        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_748);
        }
        local_748 = 0;
        local_740 = 0;
        local_73c = 5;
        local_710 = &local_538;
        local_708 = &local_528;
        FUN_140041c60(local_688,&DAT_141dd5158);
        local_700 = local_688;
        uVar6 = FUN_140045f40(local_438,0x12d,1);
        FUN_140041c60(local_678,uVar6);
        FUN_140041b30(local_438);
        ppuVar23 = &local_710;
        uVar10 = CONCAT44(uVar17,DAT_141a0a7c8);
        local_6f8 = local_678;
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,4,uVar10,ppuVar23);
        iVar5 = FUN_140e63cb0(local_428,&local_res8,&local_res10,uVar6);
        if (0 < iVar5) {
          do {
            local_728 = 0x69;
            uVar6 = FUN_140045f40(local_518,0x1000223,1);
            FUN_140041c60(&local_4a8,uVar6);
            FUN_140041b30(local_518);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_4a8);
            local_728 = 0x6a;
            uVar6 = FUN_140e79480(0x4076800000000000);
            FUN_140041cb0(&local_4b8,uVar6);
            FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_4b8);
            local_728 = 0x6c;
            uVar6 = FUN_140e794b0(0x3fe0000000000000,0x3ff4cccccccccccd);
            FUN_140041cb0(&local_4c8,uVar6);
            FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_4c8);
            local_728 = 0x6d;
            uVar6 = FUN_140e794b0(0x3fe999999999999a,0x3ff199999999999a);
            FUN_140041cb0(&local_328,uVar6);
            FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_328);
            local_728 = 0x6f;
            FUN_140044220(&local_4d8,0);
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_4d8);
            local_728 = 0x70;
            FUN_140044220(&local_4e8,1);
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_4e8);
            cVar2 = FUN_140e643f0(local_428,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_428,&local_res8,&local_res10);
        DAT_141a67c38 = 1;
        uVar26 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_6b8,DAT_141a56cd0,0x80000000,&local_578,uVar10,uVar26);
        ppuVar23 = (undefined8 **)(uVar10 & 0xffffffffffffff00);
        FUN_140e87440(&local_5c8,DAT_141a57310,0x80000000,&local_5a8,ppuVar23,
                      uVar26 & 0xffffffffffffff00);
        DAT_141a67c38 = 0;
        DAT_141a72aac = 0;
        FUN_140045ef0(local_428);
      }
      FUN_140045ef0(local_120);
    } while( true );
  }
  local_728 = 0xc;
LAB_14068636d:
  FUN_140041b30(&local_720);
  FUN_140041b30(&local_748);
  FUN_140041b30(&local_388);
  FUN_140041b30(&local_378);
  FUN_140041b30(&local_368);
  FUN_140041b30(&local_358);
  FUN_140041b30(&local_468);
  FUN_140041b30(&local_348);
  FUN_140041b30(&local_4f8);
  FUN_140041b30(&local_338);
  FUN_140041b30(&local_508);
  FUN_140041b30(&local_478);
  FUN_140041b30(&local_458);
  FUN_140041b30(&local_328);
  FUN_140041b30(&local_4e8);
  FUN_140041b30(&local_4d8);
  FUN_140041b30(&local_4c8);
  FUN_140041b30(&local_4b8);
  FUN_140041b30(&local_4a8);
  FUN_140041b30(&local_1c0);
  FUN_140041b30(&local_170);
  FUN_140041b30(&local_5e8);
  FUN_140041b30(&local_5d8);
  FUN_140041b30(&local_608);
  FUN_140041b30(&local_528);
  FUN_140041b30(&local_538);
  FUN_140041b30(&local_318);
  FUN_140041b30(&local_308);
  FUN_140041b30(&local_2f8);
  FUN_140041b30(&local_5f8);
  FUN_140041b30(&local_2e8);
  FUN_140041b30(&local_2d8);
  FUN_140041b30(&local_408);
  FUN_140041b30(&local_498);
  FUN_140041b30(&local_488);
  FUN_140041b30(&local_5a8);
  FUN_140041b30(&local_5c8);
  FUN_140041b30(&local_548);
  FUN_140041b30(&local_598);
  FUN_140041b30(&local_588);
  FUN_140041b30(&local_2c8);
  FUN_140041b30(&local_2b8);
  FUN_140041b30(&local_2a8);
  FUN_140041b30(&local_448);
  FUN_140041b30(&local_578);
  FUN_140041b30(&local_298);
  FUN_140041b30(&local_288);
  FUN_140041b30(&local_6b8);
  FUN_140041b30(&local_238);
  FUN_140041b30(&local_6d8);
  FUN_140041b30(&local_638);
  FUN_140041b30(&local_628);
  FUN_140041b30(&local_618);
  FUN_140041b30(&local_268);
  _eh_vector_destructor_iterator_(local_6a8,0x10,7,FUN_140041b30);
  FUN_140041f30(local_160);
  FUN_140041970(&local_738);
  return param_3;
LAB_140685520:
  uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  if (!bVar1) {
    local_728 = 0x7e;
    FUN_140046040(&local_478);
  }
  bVar1 = false;
  if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_748);
  }
  local_748 = 0;
  local_740 = 0;
  local_73c = 5;
  local_710 = &local_618;
  ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_1419f5e98);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,1,ppuVar23,&local_710);
  cVar2 = FUN_140046bc0(&local_478,uVar7);
  uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  if (cVar2 == '\0') goto LAB_140685950;
  local_728 = 0x80;
  if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_720);
  }
  local_720 = 0;
  local_718 = 0;
  local_714 = 5;
  local_708 = &local_618;
  local_700 = &local_478;
  ppuVar23 = &local_708;
  uVar10 = CONCAT44(uVar17,DAT_1419f5a78);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_720,2,uVar10,ppuVar23);
  FUN_140041c60(&local_508,uVar7);
  local_728 = 0x81;
  if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_748);
  }
  local_748 = 0;
  local_740 = 0;
  local_73c = 5;
  FUN_140e87440(&local_508,DAT_141a56cd0,0x80000000,&local_338,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar23 & 0xffffffffffffff00);
  FUN_140041c60(local_6a8,&DAT_1419df7b0);
  local_710 = local_6a8;
  ppuVar23 = &local_710;
  uVar7 = gml_Script_OwnerY(local_res8,local_res10,&local_748,1,ppuVar23);
  cVar2 = FUN_140041d70(&local_338,uVar7);
  uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  if (cVar2 == '\0') {
    local_728 = 0x82;
    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_748);
    }
    local_748 = 0;
    local_740 = 0;
    local_73c = 5;
    uVar7 = FUN_140042490(local_res8,DAT_1419fe9b8);
    FUN_140041c60(local_6a8,uVar7);
    local_710 = local_6a8;
    local_708 = &local_508;
    ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a573f0);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,2,ppuVar23,&local_710);
    cVar2 = FUN_140081f30(uVar7,0xffffffff);
    if (cVar2 != '\0') {
      local_728 = 0x82;
      goto LAB_140685520;
    }
    local_728 = 0x83;
    ppuVar23 = local_res8;
    FUN_140e87170(&local_508,DAT_141a1f580,0x80000000,&local_4f8,local_res8,local_res10);
    uVar7 = FUN_140045f40(local_518,0x9d,1);
    cVar2 = FUN_140042730(&local_4f8,uVar7);
    FUN_140041b30(local_518);
    if (cVar2 != '\0') {
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      ppuVar23 = local_res8;
      FUN_140e87170(&local_508,DAT_141a1f580,0x80000000,&local_4f8,local_res8,local_res10);
      uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
      FUN_140041c60(local_6a8,&local_4f8);
      local_710 = local_6a8;
      uVar7 = FUN_140045f40(local_438,0x9d,1);
      FUN_140041c60(local_698,uVar7);
      FUN_140041b30(local_438);
      local_708 = local_698;
      ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_1419f60e8);
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,2,ppuVar23,&local_710);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 == '\0') {
        local_728 = 0x83;
        goto LAB_140685520;
      }
    }
    local_728 = 0x84;
    FUN_140046040(&local_458);
    goto LAB_140685520;
  }
  local_728 = 0x81;
  goto LAB_140685520;
LAB_140685950:
  local_728 = 0x86;
  while( true ) {
    uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_748);
    }
    local_748 = 0;
    local_740 = 0;
    local_73c = 5;
    local_710 = &local_618;
    uVar6 = CONCAT44(uVar17,DAT_1419f58d8);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,1,uVar6,&local_710);
    uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') break;
    local_728 = 0x88;
    if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_720);
    }
    local_720 = 0;
    local_718 = 0;
    local_714 = 5;
    local_708 = &local_618;
    FUN_1400441d0(local_688,&DAT_141dc67b0);
    local_700 = local_688;
    uVar6 = CONCAT44(uVar17,DAT_1419f5a78);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_720,2,uVar6,&local_708);
    uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_140041c60(&local_6d8,uVar7);
    local_728 = 0x89;
    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_748);
    }
    local_748 = 0;
    local_740 = 0;
    local_73c = 5;
    local_710 = &local_618;
    FUN_1400441d0(local_698,&DAT_141dc67b0);
    local_708 = local_698;
    uVar7 = CONCAT44(uVar17,DAT_1419f5938);
    FUN_140e634e0(local_res8,local_res10,&local_748,2,uVar7,&local_710);
    uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_728 = 0x8b;
    if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_748);
    }
    local_748 = 0;
    local_740 = 0;
    local_73c = 5;
    uVar7 = FUN_140042490(local_res8,DAT_1419fe9b8);
    FUN_140041c60(local_6a8,uVar7);
    local_710 = local_6a8;
    FUN_1400441d0(local_698,&DAT_1419e73d0);
    local_708 = local_698;
    ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a01af8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,2,ppuVar23,&local_710);
    cVar2 = FUN_140e491e0(uVar6);
    uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
    if (cVar2 == '\0') {
      local_728 = 0x8b;
    }
    else {
      local_728 = 0x8c;
      if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_748);
      }
      local_748 = 0;
      local_740 = 0;
      local_73c = 5;
      FUN_140041c60(local_6a8,uVar7);
      local_710 = local_6a8;
      local_708 = &local_6d8;
      ppuVar25 = &local_710;
      ppuVar23 = (undefined8 **)CONCAT44(uVar17,DAT_141a573f0);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_748,2,ppuVar23,ppuVar25);
      cVar2 = FUN_140081f30(uVar6,0xffffffff);
      if (cVar2 == '\0') {
        local_728 = 0x8d;
        if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_748);
        }
        local_748 = 0;
        local_740 = 0;
        local_73c = 5;
        FUN_140e87440(&local_6d8,DAT_141a56cd0,0x80000000,&local_348,
                      (ulonglong)ppuVar23 & 0xffffffffffffff00,
                      (ulonglong)ppuVar25 & 0xffffffffffffff00);
        FUN_140041c60(local_6a8,&DAT_1419df7b0);
        local_710 = local_6a8;
        ppuVar23 = &local_710;
        uVar6 = gml_Script_OwnerY(local_res8,local_res10,&local_748,1,ppuVar23);
        cVar2 = FUN_140041d70(&local_348,uVar6);
        uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
        if (cVar2 == '\0') {
          local_728 = 0x8f;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          FUN_140041c60(local_6a8,uVar7);
          local_710 = local_6a8;
          local_708 = &local_6d8;
          FUN_140e634e0(local_res8,local_res10,&local_748,2,CONCAT44(uVar17,DAT_141a57350),
                        &local_710);
          local_728 = 0x91;
          FUN_140042490(local_res8,DAT_1419fe9b8);
          ppuVar25 = local_res8;
          ppuVar23 = local_res10;
          FUN_140e87170(&local_6d8,DAT_141a1f580,0x80000000,&local_468,local_res8,local_res10);
          uVar7 = FUN_140045f40(local_518,0x9d,1);
          cVar2 = FUN_140041d70(&local_468,uVar7);
          FUN_140041b30(local_518);
          if (cVar2 == '\0') {
            if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_748);
            }
            local_748 = 0;
            local_740 = 0;
            local_73c = 5;
            ppuVar23 = local_res8;
            FUN_140e87170(&local_6d8,DAT_141a1f580,0x80000000,&local_468,local_res8,local_res10);
            uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
            FUN_140041c60(local_6a8,&local_468);
            local_710 = local_6a8;
            uVar7 = FUN_140045f40(local_438,0x9d,1);
            FUN_140041c60(local_698,uVar7);
            FUN_140041b30(local_438);
            local_708 = local_698;
            ppuVar23 = &local_710;
            ppuVar25 = (undefined8 **)CONCAT44(uVar17,DAT_1419f60e8);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,2,ppuVar25,ppuVar23);
            uVar3 = thunk_FUN_140e491e0(uVar7);
          }
          else {
            uVar3 = 1;
          }
          FUN_140041d00(&local_358,uVar3);
          local_728 = 0x92;
          cVar2 = thunk_FUN_140e491e0(&local_358);
          if (cVar2 == '\0') {
            uVar7 = FUN_140041c40(local_180,&LAB_140682370,local_res8);
            uVar11 = uVar11 | 2;
          }
          else {
            if (local_160[0] < 2) {
              puVar12 = &DAT_1419df7b0;
            }
            else {
              puVar12 = (undefined8 *)local_158[1];
            }
            uVar7 = FUN_1400424f0(local_190,puVar12);
            uVar11 = uVar11 | 1;
          }
          local_res20 = uVar11;
          FUN_140041c60(&local_368,uVar7);
          if ((uVar11 & 2) != 0) {
            uVar11 = uVar11 & 0xfffffffd;
            local_res20 = uVar11;
            FUN_140041b30(local_180);
          }
          if ((uVar11 & 1) != 0) {
            uVar11 = uVar11 & 0xfffffffe;
            local_res20 = uVar11;
            FUN_140041b30(local_190);
          }
          local_728 = 0x93;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          if ((1 << ((byte)local_714 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_720);
          }
          local_720 = 0;
          local_718 = 0;
          local_714 = 5;
          FUN_1400ec6d0(local_568,local_res8);
          uVar26 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
          uVar10 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
          FUN_140e87440(local_568,DAT_1419fe0e8,0x80000000,&local_628,uVar10,uVar26);
          FUN_140041b30(local_568);
          FUN_1400ec6d0(local_5b8,local_res8);
          FUN_140e87440(local_5b8,DAT_1419fe158,0x80000000,&local_638,uVar10 & 0xffffffffffffff00,
                        uVar26 & 0xffffffffffffff00);
          FUN_140041b30(local_5b8);
          uVar7 = FUN_140045f40(local_1a0,DAT_141a575a0 | 0x5000000,1);
          FUN_140041c60(local_6a8,uVar7);
          FUN_140041b30(local_1a0);
          local_710 = local_6a8;
          FUN_140041c60(local_698,&local_628);
          local_708 = local_698;
          FUN_140041c60(local_688,&local_638);
          local_700 = local_688;
          uVar17 = 0;
          uVar7 = gml_Script_deal_damage(local_res8,local_res10,&local_720,0,0);
          FUN_140041c60(local_678,uVar7);
          local_6f0 = &local_6d8;
          if (local_160[0] < 1) {
            puVar12 = &DAT_1419df7b0;
          }
          else {
            puVar12 = (undefined8 *)*local_158;
          }
          local_6f8 = local_678;
          FUN_140041c60(local_658,puVar12);
          local_6e8 = local_658;
          local_6e0 = &local_368;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_748,7,CONCAT44(uVar17,DAT_1419fd6d8),
                                &local_710);
          FUN_140041c60(&local_5f8,uVar7);
          local_728 = 0x94;
          uVar7 = FUN_1400441b0(local_1b0,1);
          FUN_140041c60(&local_378,uVar7);
          FUN_140041b30(local_1b0);
          FUN_140e87930(&local_5f8,DAT_141a57570,0x80000000,&local_378);
          local_728 = 0x95;
          FUN_140041c60(&local_388,&local_458);
          FUN_140e87930(&local_5f8,DAT_1419ffe38,0x80000000,&local_388);
          local_728 = 0x96;
          if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_748);
          }
          local_748 = 0;
          local_740 = 0;
          local_73c = 5;
          local_710 = &local_5f8;
          FUN_140041c60(local_698,&DAT_1419df7b0);
          local_708 = local_698;
          ppuVar23 = &local_710;
          gml_Script_draw_line_sprite(local_res8,local_res10,&local_748,2,ppuVar23);
        }
        else {
          local_728 = 0x8d;
        }
      }
      else {
        local_728 = 0x8c;
        FUN_140042490(local_res8,DAT_1419fe9b8);
      }
    }
  }
  local_728 = 0x99;
  if ((1 << ((byte)local_73c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_748);
  }
  local_748 = 0;
  local_740 = 0;
  local_73c = 5;
  local_710 = &local_618;
  FUN_140e634e0(local_res8,local_res10,&local_748,1,CONCAT44(uVar17,DAT_1419f6038),&local_710);
  param_3 = local_res18;
  goto LAB_14068636d;
}

