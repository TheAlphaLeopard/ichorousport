// gml_Script____struct___96_WindowGetMonitorRect_GameViewRect @ 0x1402890d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___96_WindowGetMonitorRect_GameViewRect
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 **ppuVar15;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  uint local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  uint local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  uint local_e8;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  
  local_1f0 = "gml_Script_GameViewRect";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 1;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_1fc = 0xffffff;
  local_208 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_88 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ef0);
  local_26c = 0;
  local_278 = 0;
  local_25c = 0;
  local_268 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 3;
  local_288 = CONCAT44(uRam00000001419e3a14,_DAT_1419e3a10);
  uStack_280 = uRam00000001419e3a18;
  uStack_27c = uRam00000001419e3a1c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_288);
  local_d8 = &local_188;
  uVar7 = CONCAT44(uVar12,DAT_141a01008);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_268,0,uVar7,0);
  uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != &local_178) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
  }
  local_d0 = &local_178;
  puVar5 = (undefined8 *)FUN_140e79090(&local_278,2,&local_d8);
  uVar7 = 0;
  uVar9 = 0xffffff;
  if (puVar5 != &local_208) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_208);
    uVar7 = local_208;
    uVar9 = local_1fc;
  }
  local_1e8 = 4;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_288 = CONCAT44(uRam00000001419e39f4,_DAT_1419e39f0);
  uStack_280 = uRam00000001419e39f8;
  uStack_27c = uRam00000001419e39fc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_288);
  local_d8 = &local_188;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_268,0,CONCAT44(uVar12,DAT_141a01018),0);
  if (puVar5 != &local_178) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
  }
  local_d0 = &local_178;
  puVar5 = (undefined8 *)FUN_140e79090(&local_278,2,&local_d8);
  uVar12 = 0xffffff;
  if (puVar5 != &local_238) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_238,&local_288);
    uVar12 = local_22c;
  }
  local_1e8 = 7;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uVar14 = 0;
  uVar6 = gml_Script_WindowSetMode(param_1,param_2,&local_278,0,0);
  uStack_29c = 0;
  local_2a8 = 0;
  iVar3 = FUN_140e851f0(uVar6,&local_2a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  bVar1 = (byte)uVar12;
  uStack_28c = uVar9;
  if (iVar3 == 0) {
    local_1e8 = 0xd;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 5;
    uStack_290 = local_200;
    local_e8 = uVar9 & 0x1f;
    if ((1 << (sbyte)local_e8 & 0x46U) == 0) {
      local_298 = uVar7;
    }
    else {
      FUN_1400419b0(&local_298,&local_208);
    }
    uStack_29c = 0;
    local_2a8 = 0x407e000000000000;
    FUN_140046500(&local_298,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_288 = local_298;
    uStack_280 = uStack_290;
    uStack_27c = uStack_28c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_288);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_d8 = &local_188;
    uStack_290 = local_230;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_298 = local_238;
      uStack_28c = uVar12;
    }
    else {
      uStack_28c = uVar12;
      FUN_1400419b0(&local_298,&local_238);
    }
    uStack_29c = 0;
    local_2a8 = 0x4070e00000000000;
    FUN_140046500(&local_298,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_288 = local_298;
    uStack_280 = uStack_290;
    uStack_27c = uStack_28c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_d0 = &local_178;
    puVar5 = (undefined8 *)FUN_140e79230(&local_1e0,2,&local_d8);
    if (puVar5 != &local_168) {
      local_288 = *puVar5;
      uStack_280 = *(undefined4 *)(puVar5 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_288);
    }
    local_c8 = &local_168;
    local_288 = CONCAT44(uRam00000001419e3a04,_DAT_1419e3a00);
    uStack_280 = uRam00000001419e3a08;
    uStack_27c = uRam00000001419e3a0c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_288);
    local_c0 = &local_158;
    uVar7 = CONCAT44(uVar14,DAT_1419fe728);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_268,1,uVar7,&local_c8);
    uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar5 != &local_148) {
      local_288 = *puVar5;
      uStack_280 = *(undefined4 *)(puVar5 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_288);
    }
    local_b8 = &local_148;
    puVar5 = (undefined8 *)FUN_140e79090(&local_278,2,&local_c0);
    if (puVar5 != &local_248) {
      local_288 = *puVar5;
      uStack_280 = *(undefined4 *)(puVar5 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_288);
    }
    local_1e8 = 0xe;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    local_288 = CONCAT44(uRam0000000141dce5cc,_DAT_141dce5c8);
    uStack_280 = uRam0000000141dce5d0;
    uStack_27c = DAT_141dce5d4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_288);
    local_d8 = &local_188;
    ppuVar15 = &local_d8;
    uVar13 = CONCAT44(uVar12,DAT_141a57f40);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_278,1,uVar13,ppuVar15);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 == '\0') {
      uStack_29c = local_23c;
      uStack_2a0 = local_240;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
        local_2a8 = local_248;
      }
      else {
        FUN_1400419b0(&local_2a8,&local_248);
      }
      uVar14 = (undefined4)(uVar13 >> 0x20);
      puVar5 = &local_2a8;
      uVar10 = 2;
    }
    else {
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a57ed0,0x80000000,&local_1a0,uVar13,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar13 >> 0x20);
      uStack_28c = local_194;
      uStack_290 = local_198;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) == 0) {
        local_298 = local_1a0;
      }
      else {
        FUN_1400419b0(&local_298,&local_1a0);
      }
      puVar5 = &local_298;
      uVar10 = 0x41;
    }
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    FUN_140041b80(&local_1d0,&local_288);
    if (((uVar10 & 2) != 0) &&
       (uVar10 = uVar10 & 0xfffffffd, (1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2a8);
    }
    if (((uVar10 & 1) != 0) &&
       (uVar10 = uVar10 & 0xfffffffe, (1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_298);
    }
    local_1e8 = 0xf;
    uVar4 = local_248;
    if ((local_23c & 0xffffff) != 0) {
      uVar4 = FUN_140e4b060(&local_248);
    }
    if ((local_1c4 & 0xffffff) == 0) {
      uVar12 = (undefined4)local_1d0;
    }
    else {
      uVar12 = FUN_140e4b060(&local_1d0);
    }
    uVar4 = FUN_140e78ec0(uVar12,0x3ff0000000000000,uVar4);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_24c = 0;
    bVar8 = (byte)local_e8;
    uVar12 = local_200;
    uVar11 = local_230;
    local_258 = uVar4;
  }
  else {
    local_1e8 = 9;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uVar10 = 0;
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    uStack_290 = local_200;
    bVar8 = (byte)uVar9 & 0x1f;
    if ((1 << bVar8 & 0x46U) == 0) {
      local_298 = uVar7;
    }
    else {
      FUN_1400419b0(&local_298,&local_208);
    }
    uStack_29c = 0;
    local_2a8 = 0x407e000000000000;
    FUN_140046500(&local_298,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_288 = local_298;
    uStack_280 = uStack_290;
    uStack_27c = uStack_28c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_288);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_d8 = &local_188;
    uStack_290 = local_230;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_298 = local_238;
      uStack_28c = uVar12;
    }
    else {
      uStack_28c = uVar12;
      FUN_1400419b0(&local_298,&local_238);
    }
    uStack_29c = 0;
    local_2a8 = 0x4070e00000000000;
    FUN_140046500(&local_298,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_288 = local_298;
    uStack_280 = uStack_290;
    uStack_27c = uStack_28c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_d0 = &local_178;
    puVar5 = (undefined8 *)FUN_140e79230(&local_268,2,&local_d8);
    uVar12 = local_200;
    uVar11 = local_230;
    if (puVar5 != &local_258) {
      local_288 = *puVar5;
      uStack_280 = *(undefined4 *)(puVar5 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_288);
    }
  }
  local_1e8 = 0x12;
  uStack_29c = 0;
  local_2a8 = 0x407e000000000000;
  FUN_140042560(&local_2a8,&local_258);
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  FUN_140041b80(&local_1b0,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_1e8 = 0x13;
  uStack_29c = 0;
  local_2a8 = 0x4070e00000000000;
  FUN_140042560(&local_2a8,&local_258);
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  FUN_140041b80(&local_1c0,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_1e8 = 0x14;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_290 = uVar12;
  if ((1 << (bVar8 & 0x1f) & 0x46U) == 0) {
    local_298 = local_208;
    uStack_28c = uVar9;
  }
  else {
    uStack_28c = uVar9;
    FUN_1400419b0(&local_298,&local_208);
  }
  FUN_1400462a0(&local_298,&local_1b0);
  uStack_29c = uStack_28c;
  uStack_2a0 = uStack_290;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_298;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_298);
  }
  uStack_27c = 0;
  local_288 = 0x3fe0000000000000;
  FUN_140042560(&local_2a8,&local_288);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uVar9 = uVar10;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_d8 = &local_188;
  uVar4 = CONCAT44(uVar14,DAT_1419fe728);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_278,1,uVar4,&local_d8,uVar9);
  uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != &local_218) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(uint *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_288);
  }
  local_1e8 = 0x15;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_28c = local_22c;
  uStack_290 = uVar11;
  if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
    local_298 = local_238;
  }
  else {
    FUN_1400419b0(&local_298,&local_238);
  }
  FUN_1400462a0(&local_298,&local_1c0);
  uStack_29c = uStack_28c;
  uStack_2a0 = uStack_290;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_298;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_298);
  }
  uStack_27c = 0;
  local_288 = 0x3fe0000000000000;
  FUN_140042560(&local_2a8,&local_288);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_288);
  uVar9 = uVar10 | 0x800;
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_d8 = &local_188;
  uVar4 = CONCAT44(uVar12,DAT_1419fe728);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_278,1,uVar4,&local_d8,uVar9);
  uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != &local_228) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_288);
  }
  local_1e8 = 0x17;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_288,gml_Script____struct___95_WindowGetMonitorRect_GameViewRect,0);
  puVar5 = local_88;
  if (&local_288 != local_88) {
    local_2a8 = local_288;
    uStack_2a0 = uStack_280;
    uStack_29c = uStack_27c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_88 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(puVar5,&local_2a8);
  }
  FUN_140e60910(1);
  if (puVar5 != &local_188) {
    local_2a8 = *puVar5;
    uStack_2a0 = *(undefined4 *)(puVar5 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_2a8);
  }
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_d8 = &local_188;
  local_d0 = &local_258;
  local_c8 = &local_218;
  local_c0 = &local_228;
  local_b8 = &local_1b0;
  local_b0 = &local_1c0;
  uStack_28c = 0;
  local_298 = 0x4050000000000000;
  FUN_140042560(&local_298,&local_258);
  uStack_29c = local_20c;
  uStack_2a0 = local_210;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_218;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_218);
  }
  FUN_1400460e0(&local_2a8,&local_298);
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_a8 = local_128;
  uStack_28c = 0;
  local_298 = 0;
  FUN_140042560(&local_298,&local_258);
  uStack_29c = local_21c;
  uStack_2a0 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_228;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_228);
  }
  FUN_1400460e0(&local_2a8,&local_298);
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_a0 = local_118;
  uStack_29c = 0;
  local_2a8 = 0x4076000000000000;
  FUN_140042560(&local_2a8,&local_258);
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_98 = local_108;
  uStack_29c = 0;
  local_2a8 = 0x4070e00000000000;
  uVar10 = uVar10 | 0x40000;
  FUN_140042560(&local_2a8,&local_258);
  local_288 = local_2a8;
  uStack_280 = uStack_2a0;
  uStack_27c = uStack_29c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_288);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_90 = local_f8;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_278,10,CONCAT44(uVar12,DAT_1419fd6d8),&local_d8,
                         uVar10);
  if (puVar5 != param_3) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_288);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

