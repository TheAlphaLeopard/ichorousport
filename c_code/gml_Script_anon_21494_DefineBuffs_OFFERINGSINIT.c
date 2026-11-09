// gml_Script_anon_21494_DefineBuffs_OFFERINGSINIT @ 0x1403dc420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_21494_DefineBuffs_OFFERINGSINIT
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  ulonglong local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2ac;
  ulonglong local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_1e8;
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined8 *local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_280 = "gml_Script_anon@20719@DefineBuffs@OFFERINGSINIT";
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  local_278 = 0x361;
  uVar3 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_248,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_24c = 0xffffff;
  local_258 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_25c = 0xffffff;
  local_268 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  local_2bc = 0;
  local_2c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_278 = 0x363;
  local_2f8 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_2f0 = uRam0000000141dc6558;
  uStack_2ec = uRam0000000141dc655c;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  ppuVar14 = &local_158;
  local_158 = &local_228;
  puVar6 = (ulonglong *)
           FUN_140e634e0(local_res8,local_res10,&local_2e8,1,CONCAT44(uVar3,DAT_141a0a0d8),ppuVar14)
  ;
  uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_2a0 = (undefined4)puVar6[1];
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_2a8,puVar6);
  }
  uStack_2cc = 7;
  local_2d8 = CONCAT44(local_2d8._4_4_,6);
  FUN_140042560(&local_2a8,&local_2d8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2f8 = local_2a8;
  uStack_2f0 = uStack_2a0;
  uStack_2ec = uStack_29c;
  FUN_140041b80(&local_88,&local_2f8);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_278 = 0x364;
  puVar11 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*param_5;
  }
  uStack_2cc = 0;
  local_2d8 = 0x4014000000000000;
  FUN_1400460e0(&local_2d8,puVar10);
  local_2f8 = local_2d8;
  uStack_2f0 = uStack_2d0;
  uStack_2ec = uStack_2cc;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_2f8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_278 = 0x366;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  local_2f8 = CONCAT44(uRam00000001419e47d4,_DAT_1419e47d0);
  uStack_2f0 = uRam00000001419e47d8;
  uStack_2ec = uRam00000001419e47dc;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2f8);
  local_168 = &local_248;
  ppuVar12 = &local_168;
  uVar7 = gml_Script_choose_weighted(local_res8,local_res10,&local_2e8,1,ppuVar12);
  cVar1 = FUN_140e491e0(uVar7);
  if (cVar1 == '\0') goto LAB_1403dd8b3;
  local_278 = 0x368;
  if (param_4 < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[1];
  }
  uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_1c8,uVar15,uVar13);
  local_2f8 = local_1c8;
  uStack_2f0 = uStack_1c0;
  uStack_2ec = uStack_1bc;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_2f8);
  local_278 = 0x369;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if (param_4 < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_1c8,uVar15 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  uVar15 = local_res8;
  uVar13 = local_res10;
  FUN_140e87170(&local_1c8,DAT_1419fe0e8,0x80000000,&local_98,local_res8,local_res10);
  if (param_4 < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_1c8,uVar15 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  uVar15 = local_res8;
  FUN_140e87170(&local_1c8,DAT_1419fe158,0x80000000,&local_a8,local_res8,local_res10);
  uVar3 = (undefined4)(uVar15 >> 0x20);
  local_2f8 = local_98;
  uStack_2f0 = uStack_90;
  uStack_2ec = uStack_8c;
  if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2f8);
  local_168 = &local_248;
  local_2f8 = local_a8;
  uStack_2f0 = uStack_a0;
  uStack_2ec = uStack_9c;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_2f8);
  local_160 = local_238;
  local_2f8 = CONCAT44(uRam0000000141dd262c,_DAT_141dd2628);
  uStack_2f0 = uRam0000000141dd2630;
  uStack_2ec = DAT_141dd2634;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  uStack_2ec = 0xf;
  local_2f8 = 0x10000000000012d;
  local_2d8 = 0x10000000000012d;
  uStack_2d0 = uStack_2f0;
  uStack_2cc = 0xf;
  local_158 = &local_228;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2d8);
  local_150 = local_218;
  ppuVar14 = &local_168;
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2e8,4,CONCAT44(uVar3,DAT_141a0a7c8),ppuVar14);
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar7);
  if (0 < iVar2) {
    do {
      local_278 = 0x36b;
      uStack_2ec = 0xf;
      local_2f8 = 0x1000001000000ce;
      local_2d8 = 0x1000001000000ce;
      uStack_2d0 = uStack_2f0;
      uStack_2cc = 0xf;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_2d8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
      local_278 = 0x36c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_18c = 0;
      local_198 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_198);
      local_278 = 0x36d;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_19c = 0;
      local_1a8 = 0x4000000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1a8);
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_278 = 0x370;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  local_2f8 = CONCAT44(uRam00000001419e48d4,_DAT_1419e48d0);
  uStack_2f0 = uRam00000001419e48d8;
  uStack_2ec = uRam00000001419e48dc;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2f8);
  local_168 = &local_248;
  local_2f8 = CONCAT44(uRam00000001419e48d4,_DAT_1419e48d0);
  uStack_2f0 = uRam00000001419e48d8;
  uStack_2ec = uRam00000001419e48dc;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_2f8);
  local_160 = local_238;
  local_2f8 = CONCAT44(uRam00000001419e4754,_DAT_1419e4750);
  uStack_2f0 = uRam00000001419e4758;
  uStack_2ec = uRam00000001419e475c;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  local_2f8 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_2f0 = uRam00000001419df7c8;
  uStack_2ec = uRam00000001419df7cc;
  local_158 = &local_228;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2f8);
  local_150 = local_218;
  ppuVar12 = &local_168;
  FUN_14044e5b0(local_res8,local_res10,&local_2e8,4,ppuVar12);
  local_278 = 0x371;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ef728,0x80000000,&local_258,uVar15,uVar13);
  FUN_140e87440(&local_258,DAT_1419f4a98,0x80000000,&local_b8,uVar15 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  switch(local_24c) {
  default:
switchD_1403dceb9_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_258;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_258 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403dceb9_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_258);
    uVar4 = FUN_140e87250(uVar3);
  }
  uVar15 = 0;
  puVar10 = &local_b8;
  FUN_140e63610(uVar4,local_res10,&local_2e8,0,puVar10,0);
  local_278 = 0x372;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar13 = (ulonglong)puVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_2b8,uVar13,uVar15);
  FUN_140e87440(&local_2b8,DAT_1419f5878,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  switch(local_2ac) {
  default:
switchD_1403dcfb4_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_2b8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_2b8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403dcfb4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_2b8);
    uVar4 = FUN_140e87250(uVar3);
  }
  uVar15 = 0;
  puVar10 = &local_c8;
  uVar4 = FUN_140e63610(uVar4,local_res10,&local_2e8,0,puVar10,0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_278 = 0x375;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = (ulonglong)puVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_2b8,uVar13,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_2b8,DAT_141a05098,0x80000000,&local_f8,uVar13,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_2b8,uVar13,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_2b8,DAT_1419f5fa8,0x80000000,&local_1b8,uVar13,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_2b8,uVar13,uVar15);
    FUN_140e87440(&local_2b8,DAT_141a1dce0,0x80000000,&local_108,uVar13 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    uStack_29c = local_1ac;
    uStack_2a0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_2a8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_2a8,&local_1b8);
    }
    uStack_2ec = 7;
    local_2f8 = CONCAT44(local_2f8._4_4_,1);
    FUN_1400460e0(&local_2a8,&local_2f8);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    uStack_2cc = uStack_29c;
    uStack_2d0 = uStack_2a0;
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
      local_2d8 = local_2a8;
    }
    else {
      FUN_1400419b0(&local_2d8,&local_2a8);
    }
    FUN_1400462a0(&local_2d8,&local_108);
    local_2f8 = local_2d8;
    uStack_2f0 = uStack_2d0;
    uStack_2ec = uStack_2cc;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2f8);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_168 = &local_248;
    local_2f8 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_2f0 = uRam0000000141dc6558;
    uStack_2ec = uRam0000000141dc655c;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_2f8);
    local_160 = local_238;
    puVar10 = (undefined8 *)FUN_140e79090(&local_2c8,2,&local_168);
    if (puVar10 != &local_228) {
      local_2f8 = *puVar10;
      uStack_2f0 = *(undefined4 *)(puVar10 + 1);
      uStack_2ec = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2f8);
    }
    switch(local_2ac) {
    default:
switchD_1403dd4cb_caseD_1:
      uVar4 = 0;
      local_158 = &local_228;
      break;
    case 6:
      uVar4 = local_2b8;
      local_158 = &local_228;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_2b8 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403dd4cb_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      local_158 = &local_228;
      uVar3 = FUN_140e4a8b0(&local_2b8);
      uVar4 = FUN_140e87250(uVar3);
    }
    ppuVar14 = &local_158;
    puVar10 = &local_f8;
    uVar5 = 1;
    puVar9 = &local_2e8;
  }
  else {
    local_278 = 0x373;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = (ulonglong)puVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_141a1edd0,0x80000000,&local_d8,uVar13,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419f5f58,0x80000000,&local_e8,uVar13,uVar15);
    if (param_4 < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)param_5[1];
    }
    FUN_140e87440(puVar10,DAT_141a1f4e0,0x80000000,&local_268,uVar13 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    local_2f8 = local_e8;
    uStack_2f0 = uStack_e0;
    uStack_2ec = uStack_dc;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2f8);
    local_168 = &local_248;
    local_2f8 = local_268;
    uStack_2f0 = uStack_260;
    uStack_2ec = uStack_25c;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_2f8);
    local_160 = local_238;
    switch(local_28c) {
    default:
switchD_1403dd15d_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_298;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_298 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403dd15d_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_298);
      uVar4 = FUN_140e87250(uVar3);
    }
    ppuVar14 = &local_168;
    puVar10 = &local_d8;
    uVar5 = 2;
    puVar9 = &local_2c8;
  }
  FUN_140e63610(uVar4,local_res10,puVar9,uVar5,puVar10,ppuVar14);
  local_278 = 0x377;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar9,DAT_141a1f4e0,0x80000000,&local_268,(ulonglong)puVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar15 = local_res8;
  uVar13 = local_res10;
  FUN_140e87170(&local_268,DAT_1419fe0e8,0x80000000,&local_118,local_res8,local_res10);
  if (param_4 < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar10,DAT_141a1f4e0,0x80000000,&local_268,uVar15 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  uVar15 = local_res8;
  uVar13 = local_res10;
  FUN_140e87170(&local_268,DAT_1419fe158,0x80000000,&local_128,local_res8,local_res10);
  if (1 < param_4) {
    puVar11 = (undefined8 *)param_5[1];
  }
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_268,uVar15,uVar13 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar15 >> 0x20);
  uVar8 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
  if (uVar8 == 0xf) {
    uVar8 = 0x4000004;
  }
  else {
    uVar8 = uVar8 | 0x1000000;
  }
  uStack_2ec = 0xf;
  local_2f8 = CONCAT44(uVar8,DAT_141a575a0) & 0xffffffff00ffffff;
  local_2d8 = CONCAT44(uVar8,DAT_141a575a0) & 0xffffffff00ffffff;
  uStack_2d0 = uStack_2f0;
  uStack_2cc = 0xf;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2d8);
  local_168 = &local_248;
  local_2f8 = local_118;
  uStack_2f0 = uStack_110;
  uStack_2ec = uStack_10c;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_2f8);
  local_160 = local_238;
  local_2f8 = local_128;
  uStack_2f0 = uStack_120;
  uStack_2ec = uStack_11c;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  local_2f8 = local_268;
  uStack_2f0 = uStack_260;
  uStack_2ec = uStack_25c;
  local_158 = &local_228;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2f8);
  local_150 = local_218;
  local_148 = &local_298;
  local_140 = &local_178;
  puVar11 = (undefined8 *)
            FUN_140e634e0(local_res8,local_res10,&local_2c8,6,CONCAT44(uVar3,DAT_1419fd6d8),
                          &local_168);
  if (puVar11 != &local_1e8) {
    local_2f8 = *puVar11;
    uStack_2f0 = *(undefined4 *)(puVar11 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_2f8);
  }
  local_138 = &local_1e8;
  local_2f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2f0 = DAT_1419df7b8;
  uStack_2ec = DAT_1419df7bc;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2f8);
  local_130 = local_1d8;
  gml_Script_draw_line_sprite(local_res8,local_res10,&local_2e8,2,&local_138);
  if (local_68 != 0) {
    FUN_140e4cd60();
  }
LAB_1403dd8b3:
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_248,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_288;
  return param_3;
}

