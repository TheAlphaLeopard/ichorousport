// gml_Script_StatesSalesmanIdle @ 0x14059d7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesSalesmanIdle
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  double dVar12;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined1 **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong *local_2c8;
  undefined4 local_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  longlong *local_2a0;
  undefined4 local_294;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248 [2];
  undefined8 local_238 [2];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [12];
  byte local_1cc;
  longlong local_1c8;
  undefined8 local_1b8;
  uint local_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [96];
  
  local_2b0 = "gml_Script_StatesSalesmanIntro";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 1;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_248,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  local_24c = 0;
  local_258 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400424a0(local_98,param_5);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0670) &&
     (_Init_thread_header(&DAT_141de0670), DAT_141de0670 == -1)) {
    _DAT_141de068c = 0;
    _DAT_141de0680 = 0x4000000000000000;
    _DAT_141de06a0 = 0;
    _DAT_141de0694 = 0;
    _DAT_141de06a4 = 1;
    _DAT_141de06b4 = 0;
    _DAT_141de06a8 = 0x3ff0000000000000;
    _DAT_141de06b8 = 2;
    _DAT_141de06c8 = 0;
    _DAT_141de06bc = 0x4008000000000000;
    _DAT_141de06cc = 3;
    atexit((_func_5014 *)&LAB_141482d30);
    _Init_thread_footer(&DAT_141de0670);
  }
  uVar10 = 0;
  while( true ) {
    iVar4 = FUN_140e851f0(&DAT_141de0680 + (longlong)(int)uVar10 * 0x14,local_98,DAT_141955260,0);
    uVar11 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (iVar4 == 0) break;
    uVar10 = uVar10 + 1;
    if (3 < uVar10) goto LAB_1405a057b;
  }
  iVar4 = *(int *)(&DAT_141de0690 + (longlong)(int)uVar10 * 0x14);
  bVar1 = (byte)local_2dc;
  if (iVar4 == 0) {
    local_2a8 = 7;
    if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
    FUN_140041c60(local_238,uVar6);
    local_288 = local_238;
    FUN_140041c60(local_228,&DAT_141dd4278);
    local_280 = local_228;
    FUN_1400441d0(local_218,&DAT_141dc6710);
    local_278 = local_218;
    FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419ff3d8),&local_288);
    local_2a8 = 8;
    FUN_140044220(&local_b8,0);
    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_b8);
    local_2a8 = 10;
    goto LAB_1405a057b;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      local_2a8 = 0x92;
      if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
      FUN_140e63610(local_res8,local_res10,&local_2e8,0,uVar6,0);
      local_2a8 = 0x93;
    }
    else if (iVar4 == 3) {
      local_2a8 = 0x97;
    }
    goto LAB_1405a057b;
  }
  local_2a8 = 0xe;
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
  FUN_140041c60(local_248,uVar6);
  local_290 = local_248;
  FUN_140041c60(local_238,&DAT_141dd4278);
  local_288 = local_238;
  uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar7,&local_290);
  uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar2 = FUN_140041d90(uVar6,0);
  if (cVar2 == '\0') {
    local_2a8 = 0x19;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
    FUN_140041c60(local_248,uVar6);
    local_290 = local_248;
    FUN_140041c60(local_238,&DAT_141dd4278);
    local_288 = local_238;
    uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar7,&local_290);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    cVar2 = FUN_140041d90(uVar6,1);
    if (cVar2 == '\0') {
      local_2a8 = 0x23;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
      FUN_140041c60(local_248,uVar6);
      local_290 = local_248;
      FUN_140041c60(local_238,&DAT_141dd4278);
      local_288 = local_238;
      ppuVar19 = &local_290;
      uVar15 = CONCAT44(uVar11,DAT_1419ff4f8);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar15,ppuVar19);
      cVar2 = FUN_140041d90(uVar6,2);
      if (cVar2 == '\0') {
        local_2a8 = 0x2e;
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        uVar11 = (undefined4)(uVar15 >> 0x20);
        local_2e8 = 0;
        local_2e0 = 0;
        local_2dc = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        FUN_140041c60(local_248,uVar6);
        local_290 = local_248;
        FUN_140041c60(local_238,&DAT_141dd4278);
        local_288 = local_238;
        uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar7,&local_290);
        uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
        cVar2 = FUN_140041d90(uVar6,3);
        if (cVar2 == '\0') {
          local_2a8 = 0x56;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_248,uVar6);
          local_290 = local_248;
          FUN_140041c60(local_238,&DAT_141dd4278);
          local_288 = local_238;
          uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar7,&local_290);
          uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
          cVar2 = FUN_140041d90(uVar6,4);
          if (cVar2 == '\0') {
            local_2a8 = 0x70;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_248,uVar6);
            local_290 = local_248;
            FUN_140041c60(local_238,&DAT_141dd4278);
            local_288 = local_238;
            uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar7,&local_290);
            uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
            cVar2 = FUN_140041d90(uVar6,5);
            if (cVar2 == '\0') {
              local_2a8 = 0x83;
              if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2e8);
              }
              local_2e8 = 0;
              local_2e0 = 0;
              local_2dc = 5;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              FUN_140041c60(local_248,uVar6);
              local_290 = local_248;
              FUN_140041c60(local_238,&DAT_141dd4278);
              local_288 = local_238;
              uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
              uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,2,uVar7,&local_290);
              uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
              cVar2 = FUN_140041d90(uVar6,6);
              if (cVar2 != '\0') {
                local_2a8 = 0x85;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_2d8 = 0;
                local_2d0 = 0;
                local_2cc = 5;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecf8);
                FUN_140041c60(local_228,uVar6);
                local_280 = local_228;
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,
                                      CONCAT44(uVar11,DAT_141a02ef8),&local_280);
                cVar2 = FUN_140e491e0(uVar6);
                if (cVar2 == '\0') {
                  local_2a8 = 0x86;
                  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_258);
                  }
                  local_258 = 0;
                  local_250 = 0;
                  local_24c = 5;
                  local_294 = 0xf;
                  local_2a0 = (longlong *)0x100000300000020;
                  FUN_140041c60(local_218,&local_2a0);
                  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2a0);
                  }
                  local_278 = local_218;
                  FUN_140041c60(local_208,&DAT_1419df7b0);
                  local_270 = local_208;
                  FUN_140041c60(local_1f8,&DAT_1419df7b0);
                  local_268 = local_1f8;
                  FUN_140041c60(local_1e8,&DAT_1419df7b0);
                  local_260 = local_1e8;
                  gml_Script____struct___210_chunk_transition_RoomTransition
                            (local_res8,local_res10,&local_258,4,&local_278);
                }
              }
            }
            else {
              local_2a8 = 0x72;
              FUN_140044220(&local_148,0);
              local_2a8 = 0x73;
              FUN_140044220(&local_148,1);
              local_2a8 = 0x75;
              if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2e8);
              }
              local_2e8 = 0;
              local_2e0 = 0;
              local_2dc = 5;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecf8);
              FUN_140041c60(local_248,uVar6);
              local_290 = local_248;
              uVar7 = CONCAT44(uVar11,DAT_141a02ef8);
              uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,uVar7,&local_290);
              uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
              cVar2 = FUN_140e491e0(uVar6);
              if (cVar2 == '\0') {
                local_2a8 = 0x77;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecc8);
                cVar2 = FUN_140041d90(uVar6,0xffffffff);
                if (cVar2 != '\0') {
                  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecb8);
                  cVar2 = FUN_140041d90(uVar6,0xffffffff);
                  if (cVar2 == '\0') {
                    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
                    cVar2 = FUN_140046dd0(uVar6,2);
                    if (cVar2 != '\0') {
                      local_2a8 = 0x79;
                      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2d8);
                      }
                      local_2d8 = 0;
                      local_2d0 = 0;
                      local_2cc = 5;
                      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fec98);
                      FUN_140041c60(local_238,&DAT_141dd4308);
                      local_288 = local_238;
                      FUN_140e63610(local_res8,local_res10,&local_2d8,1,uVar6,&local_288);
                      uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
                      local_2a8 = 0x7b;
                      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2e8);
                      }
                      local_2e8 = 0;
                      local_2e0 = 0;
                      local_2dc = 5;
                      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2d8);
                      }
                      local_2d8 = 0;
                      local_2d0 = 0;
                      local_2cc = 5;
                      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
                      FUN_140041c60(local_248,uVar6);
                      local_290 = local_248;
                      FUN_140041c60(local_238,&DAT_141dd4278);
                      local_288 = local_238;
                      FUN_140041c60(local_228,uVar6);
                      local_280 = local_228;
                      FUN_140041c60(local_218,&DAT_141dd4278);
                      uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
                      local_278 = local_218;
                      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
                      uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
                      uVar6 = FUN_140053820(local_1d8,uVar6,1);
                      FUN_140041c60(local_208,uVar6);
                      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(local_1d8);
                      }
                      local_270 = local_208;
                      FUN_140e634e0(local_res8,local_res10,&local_2e8,3,
                                    CONCAT44(uVar11,DAT_1419fd648),&local_280);
                      local_2a8 = 0x8a;
                      goto LAB_1405a057b;
                    }
                  }
                }
                local_2a8 = 0x7e;
                if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e8);
                }
                local_2e8 = 0;
                local_2e0 = 0;
                local_2dc = 5;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_2d8 = 0;
                local_2d0 = 0;
                local_2cc = 5;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
                FUN_140041c60(local_248,uVar6);
                local_290 = local_248;
                FUN_140041c60(local_238,&DAT_141dd4278);
                local_288 = local_238;
                FUN_140041c60(local_228,uVar6);
                local_280 = local_228;
                FUN_140041c60(local_218,&DAT_141dd4278);
                uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
                local_278 = local_218;
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
                uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
                uVar6 = FUN_140053820(local_1d8,uVar6,1);
                FUN_140041c60(local_208,uVar6);
                if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1d8);
                }
                local_270 = local_208;
                FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419fd648),
                              &local_280);
                local_2a8 = 0x8a;
                goto LAB_1405a057b;
              }
            }
          }
          else {
            local_2a8 = 0x58;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            FUN_1400441d0(local_228,&DAT_141dc6710);
            local_280 = local_228;
            uVar8 = CONCAT44(uVar11,DAT_141a0a0d8);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar8,&local_280);
            uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
            uVar10 = FUN_140e851f0(uVar6,uVar7,DAT_141955260,1);
            if (uVar10 < 0x80000000) {
              local_2a8 = 0x5a;
              if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_258);
              }
              local_258 = 0;
              local_250 = 0;
              local_24c = 5;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecf8);
              FUN_140041c60(local_218,uVar6);
              uVar7 = CONCAT44(uVar11,DAT_141a02ef8);
              local_278 = local_218;
              uVar6 = FUN_140e634e0(local_res8,local_res10,&local_258,1,uVar7,&local_278);
              uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
              cVar2 = FUN_140e491e0(uVar6);
              if (cVar2 == '\0') {
                local_2a8 = 0x5c;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecb8);
                cVar2 = FUN_140041d90(uVar6,0xffffffff);
                if (cVar2 == '\0') {
                  local_2a8 = 0x5e;
                  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_198);
                  }
                  local_198 = 0;
                  local_190 = 0;
                  local_18c = 5;
                  local_294 = 0xf;
                  local_2a0 = (longlong *)0x100000200000144;
                  FUN_140041c60(local_208,&local_2a0);
                  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2a0);
                  }
                  local_270 = local_208;
                  FUN_1400441d0(local_1f8,&DAT_1419e66a0);
                  local_268 = local_1f8;
                  FUN_1400441d0(local_1e8,&DAT_1419df7a0);
                  local_260 = local_1e8;
                  FUN_140e634e0(local_res8,local_res10,&local_198,3,CONCAT44(uVar11,DAT_141a0a2e8),
                                &local_270);
                  local_2a8 = 0x5f;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fec98);
                  puVar9 = &DAT_141dd42a8;
                }
                else {
                  local_2a8 = 100;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  local_294 = 0xf;
                  local_2a0 = (longlong *)0x100000200000143;
                  FUN_140041c60(local_248,&local_2a0);
                  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2a0);
                  }
                  local_290 = local_248;
                  FUN_1400441d0(local_238,&DAT_1419e66a0);
                  local_288 = local_238;
                  FUN_1400441d0(local_228,&DAT_1419df7a0);
                  local_280 = local_228;
                  FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_141a0a2e8),
                                &local_290);
                  local_2a8 = 0x65;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fec98);
                  puVar9 = &DAT_141dd42e8;
                }
                FUN_140041c60(local_248,puVar9);
                local_290 = local_248;
                FUN_140e63610(local_res8,local_res10,&local_2e8,1,uVar6,&local_290);
                uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
                local_2a8 = 0x69;
                if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e8);
                }
                local_2e8 = 0;
                local_2e0 = 0;
                local_2dc = 5;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_2d8 = 0;
                local_2d0 = 0;
                local_2cc = 5;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
                FUN_140041c60(local_248,uVar6);
                local_290 = local_248;
                FUN_140041c60(local_238,&DAT_141dd4278);
                local_288 = local_238;
                FUN_140041c60(local_228,uVar6);
                local_280 = local_228;
                FUN_140041c60(local_218,&DAT_141dd4278);
                uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
                local_278 = local_218;
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
                uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
                uVar6 = FUN_140053820(local_1d8,uVar6,1);
                FUN_140041c60(local_208,uVar6);
                if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1d8);
                }
                local_270 = local_208;
                FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419fd648),
                              &local_280);
                local_2a8 = 0x6a;
                goto LAB_14059fca6;
              }
            }
          }
        }
        else {
          local_2a8 = 0x30;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          FUN_1400441d0(local_228,&DAT_141dc6710);
          local_280 = local_228;
          ppuVar18 = &local_280;
          uVar15 = CONCAT44(uVar11,DAT_141a0a0d8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar15,ppuVar18);
          uVar7 = FUN_1400b46b0(&local_2a0,uVar7,0x3fe8000000000000);
          uVar10 = FUN_140e851f0(uVar6,uVar7,DAT_141955260,1);
          if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a0);
          }
          if (uVar10 < 0x80000000) {
            local_2a8 = 0x31;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            local_2bc = 6;
            local_2c8 = local_res8;
            uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_188,uVar15,uVar17);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2bc = 6;
            local_2c8 = local_res8;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_140e87440(&local_2c8,DAT_1419fec88,0x80000000,&local_158,uVar15,
                          uVar17 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar15 >> 0x20);
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            FUN_140041c60(local_218,&local_188);
            local_278 = local_218;
            FUN_140041c60(local_208,&local_158);
            local_270 = local_208;
            FUN_1400441d0(local_1f8,&DAT_1419e66c0);
            local_268 = local_1f8;
            uVar15 = CONCAT44(uVar11,DAT_141a00c58);
            uVar7 = FUN_140e634e0(local_res8,local_res10,&local_258,3,uVar15,&local_278);
            FUN_140041c60(&local_168,uVar7);
            FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_168);
          }
          uVar11 = (undefined4)(uVar15 >> 0x20);
          local_2a8 = 0x33;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecb8);
          FUN_1400441d0(local_248,&DAT_141dc6710);
          local_290 = local_248;
          FUN_1400441d0(local_238,&DAT_141dc6710);
          local_288 = local_238;
          uVar16 = CONCAT44(uVar11,DAT_141a0a0d8);
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar16,&local_288);
          uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
          uVar8 = FUN_1400b46b0(local_1d8,uVar8,0x3fe8000000000000);
          uVar3 = FUN_140041d90(uVar7,0xffffffff);
          uVar7 = FUN_140087a30(local_a8,uVar8,uVar3);
          uVar16 = CONCAT44(uVar11,DAT_141a0a0d8);
          uVar8 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,uVar16,&local_290);
          uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
          uVar8 = FUN_140087a30(&local_2a0,uVar8,2);
          FUN_1400424a0(&local_2c8,uVar8);
          FUN_1400462a0(&local_2c8,uVar7);
          uVar10 = FUN_140e851f0(uVar6,&local_2c8,DAT_141955260,1);
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a0);
          }
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          if (uVar10 < 0x80000000) {
            local_2a8 = 0x35;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_178);
            FUN_140041c60(local_228,&local_178);
            local_280 = local_228;
            uVar7 = CONCAT44(uVar11,DAT_141a00e38);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_258,1,uVar7,&local_280);
            uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uVar6 = FUN_140053820(local_1d8,uVar6,0x20);
            FUN_140041c60(&local_e8,uVar6);
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            local_2a8 = 0x36;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_178);
            FUN_140041c60(local_248,&local_178);
            local_290 = local_248;
            uVar15 = CONCAT44(uVar11,DAT_141a00dd8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,uVar15,&local_290);
            uVar6 = FUN_140053820(local_1d8,uVar6,0x24);
            FUN_140041c60(&local_f8,uVar6);
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            local_2a8 = 0x38;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecb8);
            cVar2 = FUN_140041d90(uVar6,0xffffffff);
            uVar11 = (undefined4)(uVar15 >> 0x20);
            if (cVar2 == '\0') {
              local_2a8 = 0x3a;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecb8);
              FUN_140041c60(&local_108,uVar6);
              local_2bc = 0xf;
              local_2c8 = (longlong *)0x100000000000106;
              FUN_140e87930(&local_2c8,DAT_141a0a958,0x80000000,&local_108);
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              iVar4 = 0x28;
              do {
                uVar13 = (undefined4)(uVar15 >> 0x20);
                iVar4 = iVar4 + -1;
                local_2a8 = 0x3d;
                uVar11 = FUN_140e794b0(0x3ff0000000000000,0);
                FUN_140041cb0(&local_1a8,uVar11);
                local_2a8 = 0x3e;
                uVar11 = FUN_140e79480(0x4076800000000000);
                FUN_140041cb0(&local_1b8,uVar11);
                local_2a8 = 0x3f;
                if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e8);
                }
                local_2e8 = 0;
                local_2e0 = 0;
                local_2dc = 5;
                local_290 = &local_e8;
                local_288 = &local_f8;
                FUN_140041c60(local_228,&DAT_141dd42d8);
                local_280 = local_228;
                local_2bc = 0xf;
                local_2c8 = (longlong *)0x100000000000017;
                FUN_140041c60(local_218,&local_2c8);
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                ppuVar19 = &local_290;
                uVar15 = CONCAT44(uVar13,DAT_141a0a7c8);
                local_278 = local_218;
                uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,4,uVar15,ppuVar19);
                iVar5 = FUN_140e63cb0(local_1d8,&local_res8,&local_res10,uVar6);
                if (0 < iVar5) {
                  do {
                    local_2a8 = 0x41;
                    uVar11 = FUN_140e794b0(0x3ff0000000000000,0);
                    FUN_140041cb0(&local_118,uVar11);
                    FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_118);
                    local_2a8 = 0x42;
                    local_294 = 6;
                    local_2a0 = local_res8;
                    ppuVar19 = (undefined8 **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
                    uVar15 = uVar15 & 0xffffffffffffff00;
                    FUN_140e87440(&local_2a0,DAT_141a0f7f8,0x80000000,&local_128,uVar15,ppuVar19);
                    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2a0);
                    }
                    FUN_140041c60(&local_138,&local_128);
                    FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_138);
                    local_2a8 = 0x44;
                    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                    if ((local_1ac & 0xffffff) == 0) {
                      uVar11 = (undefined4)local_1b8;
                      uVar13 = (undefined4)((ulonglong)local_1b8 >> 0x20);
                    }
                    else {
                      uVar7 = FUN_140e4b060(&local_1b8);
                      uVar11 = (undefined4)uVar7;
                      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    }
                    if ((local_19c & 0xffffff) == 0) {
                      dVar12 = local_1a8;
                    }
                    else {
                      dVar12 = (double)FUN_140e4b060(&local_1a8);
                    }
                    uVar11 = FUN_140e78f90((float)dVar12,(float)(double)CONCAT44(uVar13,uVar11));
                    FUN_140045f90(uVar6,uVar11);
                    local_2a8 = 0x45;
                    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                    if ((local_1ac & 0xffffff) == 0) {
                      uVar11 = (undefined4)local_1b8;
                      uVar13 = (undefined4)((ulonglong)local_1b8 >> 0x20);
                    }
                    else {
                      uVar7 = FUN_140e4b060(&local_1b8);
                      uVar11 = (undefined4)uVar7;
                      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    }
                    if ((local_19c & 0xffffff) == 0) {
                      dVar12 = local_1a8;
                    }
                    else {
                      dVar12 = (double)FUN_140e4b060(&local_1a8);
                    }
                    uVar11 = FUN_140e79010((float)dVar12,(float)(double)CONCAT44(uVar13,uVar11));
                    FUN_140045f90(uVar6,uVar11);
                    local_2a8 = 0x47;
                    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
                    FUN_140044220(uVar6,0);
                    cVar2 = FUN_140e643f0(local_1d8,&local_res8,&local_res10);
                  } while (cVar2 != '\0');
                }
                FUN_140e63970(local_1d8,&local_res8,&local_res10);
                if (local_1c8 != 0) {
                  FUN_140e4cd60();
                }
                uVar11 = (undefined4)(uVar15 >> 0x20);
              } while (0 < iVar4);
            }
            local_2a8 = 0x4f;
            local_294 = 0xf;
            local_2a0 = (longlong *)0x10000000000005a;
            FUN_140041c60(local_248,&local_2a0);
            if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a0);
            }
            local_290 = local_248;
            FUN_140edd0e0(local_res8,local_res10,1,&local_290);
            local_2a8 = 0x50;
            uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
            FUN_140044220(uVar6,0);
            local_2a8 = 0x52;
            if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            local_2e8 = 0;
            local_2e0 = 0;
            local_2dc = 5;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            FUN_140041c60(local_248,uVar6);
            local_290 = local_248;
            FUN_140041c60(local_238,&DAT_141dd4278);
            local_288 = local_238;
            FUN_140041c60(local_228,uVar6);
            local_280 = local_228;
            FUN_140041c60(local_218,&DAT_141dd4278);
            uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
            local_278 = local_218;
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
            uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uVar6 = FUN_140053820(local_1d8,uVar6,1);
            FUN_140041c60(local_208,uVar6);
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1d8);
            }
            local_270 = local_208;
            FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419fd648),
                          &local_280);
            local_2a8 = 0x8a;
LAB_1405a057b:
            FUN_140041b30(local_98);
            FUN_140041b30(&local_198);
            FUN_140041b30(&local_258);
            FUN_140041b30(&local_2d8);
            FUN_140041b60(&local_2e8);
            FUN_140041b30(&local_148);
            FUN_140041b30(&local_138);
            FUN_140041b30(&local_128);
            FUN_140041b30(&local_118);
            FUN_140041b30(&local_1b8);
            FUN_140041b30(&local_1a8);
            FUN_140041b30(&local_108);
            FUN_140041b30(&local_f8);
            FUN_140041b30(&local_e8);
            FUN_140041b30(&local_178);
            FUN_140041b30(&local_d8);
            FUN_140041b30(&local_168);
            FUN_140041b30(&local_158);
            FUN_140041b30(&local_188);
            FUN_140041b30(&local_c8);
            FUN_140041b30(&local_b8);
            _eh_vector_destructor_iterator_(local_248,0x10,7,FUN_140041b30);
            FUN_140041970(&local_2b8);
            return param_3;
          }
        }
      }
      else {
        local_2a8 = 0x25;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_2bc = 6;
        local_2c8 = local_res8;
        uVar17 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_188,uVar15,uVar17);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2bc = 6;
        local_2c8 = local_res8;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_2c8,DAT_1419fec88,0x80000000,&local_158,uVar15,
                      uVar17 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar15 >> 0x20);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041c60(local_228,&local_188);
        local_280 = local_228;
        uVar6 = FUN_140053940(&local_2a0,&local_158,0x30);
        FUN_140041c60(local_218,uVar6);
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        local_278 = local_218;
        FUN_1400441d0(local_208,&DAT_1419e66c0);
        local_270 = local_208;
        uVar7 = CONCAT44(uVar11,DAT_141a00c58);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,3,uVar7,&local_280);
        uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_140041c60(&local_168,uVar6);
        FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_168);
        local_2a8 = 0x26;
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2e8 = 0;
        local_2e0 = 0;
        local_2dc = 5;
        local_2bc = 0xf;
        local_2c8 = (longlong *)0x100000000000151;
        FUN_140041c60(local_248,&local_2c8);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_290 = local_248;
        uVar7 = CONCAT44(uVar11,DAT_141a02ef8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,uVar7,&local_290);
        uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 == '\0') {
          local_2a8 = 0x28;
          local_2bc = 0xd;
          local_2c8 = (longlong *)0x3ff0000000000000;
          FUN_140041c60(&local_d8,&local_2c8);
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2bc = 0xf;
          local_2c8 = (longlong *)0x100000000000147;
          FUN_140e87930(&local_2c8,DAT_1419fec78,0x80000000,&local_d8);
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2a8 = 0x29;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          FUN_140041c60(local_248,uVar6);
          local_290 = local_248;
          FUN_140041c60(local_238,&DAT_141dd4278);
          local_288 = local_238;
          FUN_140041c60(local_228,uVar6);
          local_280 = local_228;
          FUN_140041c60(local_218,&DAT_141dd4278);
          uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
          local_278 = local_218;
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
          uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
          uVar6 = FUN_140053820(&local_2a0,uVar6,1);
          FUN_140041c60(local_208,uVar6);
          if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a0);
          }
          local_270 = local_208;
          FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419fd648),
                        &local_280);
          local_2a8 = 0x2a;
LAB_14059fca6:
          uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
          FUN_140044220(uVar6,0);
          local_2a8 = 0x8a;
          goto LAB_1405a057b;
        }
      }
    }
    else {
      local_2a8 = 0x1b;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fecf8);
      FUN_140041c60(local_228,uVar6);
      local_280 = local_228;
      ppuVar18 = &local_280;
      uVar15 = CONCAT44(uVar11,DAT_141a02ef8);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar15,ppuVar18);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 == '\0') {
        local_2a8 = 0x1d;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        local_2bc = 6;
        local_2c8 = local_res8;
        uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_c8,uVar15,uVar17);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2bc = 6;
        local_2c8 = local_res8;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_188,uVar15,
                      uVar17 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar15 >> 0x20);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041c60(local_218,&local_c8);
        local_278 = local_218;
        FUN_140041c60(local_208,&local_188);
        local_270 = local_208;
        FUN_140041c60(local_1f8,&DAT_141dd42c8);
        local_268 = local_1f8;
        local_2bc = 0xf;
        local_2c8 = (longlong *)0x100000000000151;
        FUN_140041c60(local_1e8,&local_2c8);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_260 = local_1e8;
        uVar6 = CONCAT44(uVar11,DAT_141a0a7c8);
        FUN_140e634e0(local_res8,local_res10,&local_258,4,uVar6,&local_278);
        uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_2a8 = 0x1e;
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2e8 = 0;
        local_2e0 = 0;
        local_2dc = 5;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        FUN_140041c60(local_248,uVar6);
        local_290 = local_248;
        FUN_140041c60(local_238,&DAT_141dd4278);
        local_288 = local_238;
        FUN_140041c60(local_228,uVar6);
        local_280 = local_228;
        FUN_140041c60(local_218,&DAT_141dd4278);
        uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
        local_278 = local_218;
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
        uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar6 = FUN_140053820(&local_2a0,uVar6,1);
        FUN_140041c60(local_208,uVar6);
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        local_270 = local_208;
        FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419fd648),&local_280)
        ;
        local_2a8 = 0x8a;
        goto LAB_1405a057b;
      }
    }
  }
  else {
    local_2a8 = 0x10;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
    FUN_1400441d0(local_228,&DAT_141dc6710);
    local_280 = local_228;
    uVar8 = CONCAT44(uVar11,DAT_141a0a0d8);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar8,&local_280);
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar10 = FUN_140e851f0(uVar6,uVar7,DAT_141955260,1);
    if (uVar10 < 0x80000000) {
      local_2a8 = 0x12;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      local_2bc = 0xf;
      local_2c8 = (longlong *)0x100000200000145;
      FUN_140041c60(local_218,&local_2c8);
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_278 = local_218;
      FUN_1400441d0(local_208,&DAT_1419e66a0);
      local_270 = local_208;
      FUN_1400441d0(local_1f8,&DAT_1419df7a0);
      local_268 = local_1f8;
      FUN_140e634e0(local_res8,local_res10,&local_258,3,CONCAT44(uVar11,DAT_141a0a2e8),&local_278);
      local_2a8 = 0x13;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fec98);
      FUN_140041c60(local_248,&DAT_141dd42b8);
      local_290 = local_248;
      FUN_140e63610(local_res8,local_res10,&local_2e8,1,uVar6,&local_290);
      uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_2a8 = 0x14;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
      FUN_140041c60(local_248,uVar6);
      local_290 = local_248;
      FUN_140041c60(local_238,&DAT_141dd4278);
      local_288 = local_238;
      FUN_140041c60(local_228,uVar6);
      local_280 = local_228;
      FUN_140041c60(local_218,&DAT_141dd4278);
      uVar7 = CONCAT44(uVar11,DAT_1419ff4f8);
      local_278 = local_218;
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar7,&local_290);
      uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar6 = FUN_140053820(&local_2a0,uVar6,1);
      FUN_140041c60(local_208,uVar6);
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      local_270 = local_208;
      FUN_140e634e0(local_res8,local_res10,&local_2e8,3,CONCAT44(uVar11,DAT_1419fd648),&local_280);
      local_2a8 = 0x8a;
      goto LAB_1405a057b;
    }
  }
  local_2a8 = 0x8a;
  goto LAB_1405a057b;
}

