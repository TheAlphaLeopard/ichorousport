// gml_Script_BM_SETTINGS @ 0x14023aa80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_BM_SETTINGS(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffd90;
  undefined4 **ppuVar10;
  ulonglong uVar11;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238 [3];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_1c0 = "gml_Script_DefineBossAttributes";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 2;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_238,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_2c = 0xffffff;
  local_38 = 0;
  uStack_23c = 0xffffff;
  local_248 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f3b0);
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_24c = 0;
  local_258 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f210,0x80000000,&local_38,uVar9,
                in_stack_fffffffffffffd90 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_1f8 = *puVar5;
    uStack_1f4 = puVar5[1];
    uStack_1f0 = puVar5[2];
    uStack_1ec = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_1f8);
  }
  local_1e8 = local_238;
  local_1f8 = _DAT_141dcde58;
  uStack_1f4 = uRam0000000141dcde5c;
  uStack_1f0 = uRam0000000141dcde60;
  uStack_1ec = DAT_141dcde64;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_1f8);
  local_1e0 = local_228;
  local_1f8 = (undefined4)local_38;
  uStack_1f4 = local_38._4_4_;
  uStack_1f0 = uStack_30;
  uStack_1ec = uStack_2c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_1f8);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_anon_839_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0x11;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_48,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023af24_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023af24_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_48;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0x12;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_268);
  FUN_140e87930(uVar4,DAT_141a1f110,0x80000000,&local_118);
  local_1b8 = 0x15;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f3d0,0x80000000,&local_128,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcde98;
  uStack_264 = uRam0000000141dcde9c;
  uStack_260 = uRam0000000141dcdea0;
  uStack_25c = DAT_141dcdea4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_128;
  uStack_264 = local_128._4_4_;
  uStack_260 = uStack_120;
  uStack_25c = uStack_11c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_anon_1076_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0x1a;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_58,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023b270_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023b270_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_58;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0x1b;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_268);
  FUN_140e87930(uVar4,DAT_141a43d98,0x80000000,&local_138);
  local_1b8 = 0x1d;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f3f0,0x80000000,&local_68,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcde78;
  uStack_264 = uRam0000000141dcde7c;
  uStack_260 = uRam0000000141dcde80;
  uStack_25c = DAT_141dcde84;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_68;
  uStack_264 = local_68._4_4_;
  uStack_260 = uStack_60;
  uStack_25c = uStack_5c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_anon_1406_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0x22;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_78,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023b5b6_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023b5b6_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_78;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0x23;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_268);
  FUN_140e87930(uVar4,DAT_141a1f370,0x80000000,&local_148);
  local_1b8 = 0x26;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f480,0x80000000,&local_158,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcde88;
  uStack_264 = uRam0000000141dcde8c;
  uStack_260 = uRam0000000141dcde90;
  uStack_25c = DAT_141dcde94;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_158;
  uStack_264 = local_158._4_4_;
  uStack_260 = uStack_150;
  uStack_25c = uStack_14c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_anon_2072_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0x32;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023b8f6_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023b8f6_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_88;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0x33;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  FUN_140041b80(&local_170,&local_268);
  FUN_140e87930(uVar4,DAT_141a1f060,0x80000000,&local_170);
  local_1b8 = 0x36;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a43d08,0x80000000,&local_98,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcde68;
  uStack_264 = uRam0000000141dcde6c;
  uStack_260 = uRam0000000141dcde70;
  uStack_25c = DAT_141dcde74;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_98;
  uStack_264 = local_98._4_4_;
  uStack_260 = uStack_90;
  uStack_25c = uStack_8c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_anon_3357_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0x5e;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_141a43db8,0x80000000,&local_a8,uVar9,uVar11);
  FUN_140e87440(uVar3,DAT_141a1f480,0x80000000,&local_158,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_268 = (undefined4)local_158;
  uStack_264 = local_158._4_4_;
  uStack_260 = uStack_150;
  uStack_25c = uStack_14c;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  FUN_140e645a0(&local_1f8,gml_Script_anon_3821_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1e0 = local_228;
  switch(uStack_23c) {
  default:
switchD_14023bcc5_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023bcc5_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_a8;
  FUN_140e63610(uVar7,param_2,&local_258,2,puVar6,ppuVar10);
  local_1b8 = 0x90;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_b8,(ulonglong)puVar6 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023bdcf_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023bdcf_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_b8;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0x91;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  FUN_140041b80(&local_180,&local_268);
  FUN_140e87930(uVar4,DAT_141a1efa0,0x80000000,&local_180);
  local_1b8 = 0x94;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1ecf0,0x80000000,&local_c8,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcdee8;
  uStack_264 = uRam0000000141dcdeec;
  uStack_260 = uRam0000000141dcdef0;
  uStack_25c = DAT_141dcdef4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_c8;
  uStack_264 = local_c8._4_4_;
  uStack_260 = uStack_c0;
  uStack_25c = uStack_bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_anon_4032_DefineBossAttributes_BOSSMODSINIT,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0xa0;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_d8,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023c115_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023c115_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_d8;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0xa1;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_268);
  FUN_140e87930(uVar4,DAT_141a1ef80,0x80000000,&local_190);
  local_1b8 = 0xa4;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1f3d0,0x80000000,&local_128,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcdeb8;
  uStack_264 = uRam0000000141dcdebc;
  uStack_260 = uRam0000000141dcdec0;
  uStack_25c = DAT_141dcdec4;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_128;
  uStack_264 = local_128._4_4_;
  uStack_260 = uStack_120;
  uStack_25c = uStack_11c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,&LAB_14023a760,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0xa8;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_e8,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  switch(uStack_23c) {
  default:
switchD_14023c455_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14023c455_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar7 = FUN_140e87250(uVar2);
  }
  ppuVar10 = &local_1e8;
  puVar6 = &local_e8;
  FUN_140e63610(uVar7,param_2,&local_258,1,puVar6,ppuVar10);
  local_1b8 = 0xa9;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  FUN_140041b80(&local_1a0,&local_268);
  FUN_140e87930(uVar4,DAT_141a1f2e0,0x80000000,&local_1a0);
  local_1b8 = 0xac;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1edb0);
  uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a1ecb0,0x80000000,&local_f8,uVar9,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar9 >> 0x20);
  if (puVar5 != local_238) {
    local_268 = *puVar5;
    uStack_264 = puVar5[1];
    uStack_260 = puVar5[2];
    uStack_25c = puVar5[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_268);
  }
  local_1e8 = local_238;
  local_268 = _DAT_141dcdf18;
  uStack_264 = uRam0000000141dcdf1c;
  uStack_260 = uRam0000000141dcdf20;
  uStack_25c = DAT_141dcdf24;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_268);
  local_1e0 = local_228;
  local_268 = (undefined4)local_f8;
  uStack_264 = local_f8._4_4_;
  uStack_260 = uStack_f0;
  uStack_25c = uStack_ec;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_268);
  local_1d8 = local_218;
  FUN_140e645a0(&local_1f8,gml_Script_DefineBossAttributes,param_1);
  local_268 = local_1f8;
  uStack_264 = uStack_1f4;
  uStack_260 = uStack_1f0;
  uStack_25c = uStack_1ec;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_268);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1d0 = local_208;
  ppuVar10 = &local_1e8;
  uVar9 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar9,ppuVar10);
  if (puVar6 != &local_248) {
    local_268 = *(undefined4 *)puVar6;
    uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_260 = *(undefined4 *)(puVar6 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_1b8 = 0xb1;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  FUN_140e87440(&local_248,DAT_141a1f520,0x80000000,&local_108,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_268 = _DAT_141dcdf08;
  uStack_264 = uRam0000000141dcdf0c;
  uStack_260 = uRam0000000141dcdf10;
  uStack_25c = DAT_141dcdf14;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_268);
  local_1e8 = local_238;
  uVar3 = 0;
  switch(uStack_23c) {
  case 6:
    uVar3 = local_248;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_248);
    uVar3 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar3,param_2,&local_258,1,&local_108,&local_1e8);
  local_1b8 = 0xb2;
  local_268 = (undefined4)local_248;
  uStack_264 = local_248._4_4_;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  FUN_140041b80(&local_1b0,&local_268);
  FUN_140e87930(uVar4,DAT_141a1f390,0x80000000,&local_1b0);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_238,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

