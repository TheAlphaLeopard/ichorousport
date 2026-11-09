// gml_Script_anon_38824_DefineTrinkets_TRINKETSINIT @ 0x1406158d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_38824_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  int local_res20;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffd50;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined8 local_260;
  char *local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined4 local_128 [3];
  byte local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_268 = 0;
  local_258 = "gml_Script_anon@38069@DefineTrinkets@TRINKETSINIT";
  local_260 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_260;
  local_250 = 0x54b;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _eh_vector_constructor_iterator_(local_178,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_23c = 0xffffff;
  local_248 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_98 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ffab8);
  local_26c = 0;
  local_278 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_20c = 0;
  local_218 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_250 = 0x54c;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_248,uVar10,
                in_stack_fffffffffffffd50 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_228 = local_248;
  uStack_220 = CONCAT44(uStack_23c,uStack_240);
  if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_228);
  local_c0 = &local_168;
  ppuVar11 = &local_c0;
  uVar10 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar10,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_250 = 0x54c;
    goto LAB_14061669d;
  }
  local_250 = 0x54e;
  uStack_29c = 0xf;
  local_2a8 = 0x1000000000000ee;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_141a57250,0x80000000,&local_188,uVar10,uVar12);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_1419f6278,0x80000000,&local_198,uVar10,uVar12);
  local_228 = local_198;
  uStack_220 = CONCAT44(uStack_18c,uStack_190);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_228);
  local_250 = 0x54f;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ffe28,0x80000000,&local_d8,uVar10,uVar12);
  iVar2 = FUN_140e851f0(&local_d8,&local_1e8,DAT_141955260,0);
  if (iVar2 != 0) {
    local_250 = 0x551;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    local_228 = local_1e8;
    uStack_220 = CONCAT44(uStack_1dc,uStack_1e0);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
    FUN_140e87930(uVar5,DAT_1419ffe28,0x80000000,&local_1a8);
    local_250 = 0x552;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    uStack_280 = CONCAT44(0xd,(undefined4)uStack_280);
    local_288 = (undefined1 *)0x0;
    local_228 = 0;
    uStack_220 = uStack_280;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
    FUN_140e87930(uVar5,DAT_1419ffa18,0x80000000,&local_1b8);
    local_250 = 0x554;
    uStack_29c = 0xf;
    local_2a8 = 0x100000000000106;
    iVar2 = FUN_140e63cb0(local_90,&local_res8,&local_res10,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if (0 < iVar2) {
      do {
        local_250 = 0x556;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
        uStack_280 = uStack_280 & 0xffffffff;
        local_288 = &DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar5,&local_288,DAT_141955260,0);
        if ((1 << ((byte)(uStack_280 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        if (iVar2 == 0) {
          local_250 = 0x556;
LAB_1406161d0:
          if (local_80 != 0) {
            FUN_140e4cd60();
          }
          goto LAB_14061669d;
        }
        local_250 = 0x558;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0aaf8,0x80000000,&local_238,uVar10,uVar12);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0ab38,0x80000000,&local_1c8,uVar10,uVar12);
        iVar2 = FUN_140e851f0(&local_238,&local_1c8,DAT_141955260,1);
        if (iVar2 != -2 && iVar2 < 0) {
          local_250 = 0x558;
          goto LAB_1406161d0;
        }
        local_250 = 0x55a;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_278 = 0;
        local_270 = 0;
        local_26c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0aaf8,0x80000000,&local_238,uVar10,uVar12);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0ab38,0x80000000,&local_1c8,uVar10,uVar12);
        local_298 = _DAT_141dc6760;
        uStack_294 = uRam0000000141dc6764;
        uStack_290 = uRam0000000141dc6768;
        uStack_28c = uRam0000000141dc676c;
        if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_298);
        local_c8 = local_178;
        uStack_29c = local_22c;
        uStack_2a0 = local_230;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
          local_2a8 = local_238;
        }
        else {
          FUN_1400419b0(&local_2a8,&local_238);
        }
        local_268 = 1;
        FUN_1400462a0(&local_2a8,&local_1c8);
        local_298 = (undefined4)local_2a8;
        uStack_294 = local_2a8._4_4_;
        uStack_290 = uStack_2a0;
        uStack_28c = uStack_29c;
        if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_298);
        local_268 = 0;
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_c0 = &local_168;
        puVar6 = (undefined8 *)FUN_140e79090(&local_278,2,&local_c8);
        if (puVar6 != &local_1f8) {
          local_298 = *(undefined4 *)puVar6;
          uStack_294 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_290 = *(undefined4 *)(puVar6 + 1);
          uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_298);
        }
        FUN_140e87930(uVar5,DAT_141a0aaf8,0x80000000,&local_1f8);
        local_250 = 0x55b;
        uVar5 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5948);
        local_228 = 0x3ff0000000000000;
        uStack_220 = CONCAT44(0xd,(undefined4)uStack_220);
        local_298 = 0;
        uStack_294 = 0x3ff00000;
        uStack_290 = (undefined4)uStack_220;
        uStack_28c = 0xd;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_298);
        FUN_140e87930(uVar5,DAT_1419ffa18,0x80000000);
        cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_90,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419f6278,0x80000000,&local_198,uVar10,uVar12);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    if (local_80 != 0) {
      FUN_140e4cd60();
    }
    param_4 = local_res20;
  }
  local_250 = 0x55f;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ffa18,0x80000000,&local_e8,uVar10,uVar12);
  cVar1 = FUN_140e491e0(&local_e8);
  if (cVar1 == '\0') {
    local_250 = 0x55f;
    goto LAB_14061669d;
  }
  local_250 = 0x561;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_248,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_141a1edd0,0x80000000,&local_f8,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(local_98,DAT_1419f5958,0x80000000,&local_108,uVar10,uVar12);
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_118,uVar10,uVar12 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_298 = _DAT_141dc6760;
  uStack_294 = uRam0000000141dc6764;
  uStack_290 = uRam0000000141dc6768;
  uStack_28c = uRam0000000141dc676c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_298);
  local_c8 = local_178;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_288,gml_Script_anon_38676_DefineTrinkets_TRINKETSINIT,0);
  if (&local_288 != puVar4) {
    local_298 = (undefined4)local_288;
    uStack_294 = local_288._4_4_;
    uStack_290 = (undefined4)uStack_280;
    uStack_28c = uStack_280._4_4_;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_298);
  }
  FUN_140e60910(1);
  if (puVar4 != &local_168) {
    local_298 = *(undefined4 *)puVar4;
    uStack_294 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_290 = *(undefined4 *)(puVar4 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_298);
  }
  if ((1 << ((byte)(uStack_280 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_c0 = &local_168;
  uVar5 = CONCAT44(uVar3,DAT_141a0a0d8);
  puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_218,1,uVar5,&local_c8);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_29c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_2a8,puVar8);
  }
  local_268 = 2;
  uStack_280 = CONCAT44(7,(undefined4)uStack_280);
  local_288 = (undefined1 *)CONCAT44(local_288._4_4_,5);
  FUN_140042560(&local_2a8,&local_288);
  if ((1 << ((byte)(uStack_280 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_298 = (undefined4)local_2a8;
  uStack_294 = local_2a8._4_4_;
  uStack_290 = uStack_2a0;
  uStack_28c = uStack_29c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_298);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_b8 = local_158;
  local_298 = (undefined4)local_108;
  uStack_294 = local_108._4_4_;
  uStack_290 = uStack_100;
  uStack_28c = uStack_fc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_298);
  local_b0 = local_148;
  local_298 = (undefined4)local_118;
  uStack_294 = local_118._4_4_;
  uStack_290 = uStack_110;
  uStack_28c = uStack_10c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_298);
  local_a8 = local_138;
  puVar7 = (undefined4 *)
           FUN_140e634e0(local_res8,local_res10,&local_208,2,CONCAT44(uVar3,DAT_1419fd6d8),&local_c0
                        );
  if (puVar7 != local_128) {
    local_298 = *puVar7;
    uStack_294 = puVar7[1];
    uStack_290 = puVar7[2];
    uStack_28c = puVar7[3];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_298);
  }
  local_a0 = local_128;
  uVar5 = 0;
  switch(uStack_23c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140616639_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_248);
    uVar5 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar5 = local_248;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140616639_caseD_0;
  }
  FUN_140e63610(uVar5,local_res10,&local_278,3,&local_f8,&local_b0);
LAB_14061669d:
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_260;
  return local_res18;
}

