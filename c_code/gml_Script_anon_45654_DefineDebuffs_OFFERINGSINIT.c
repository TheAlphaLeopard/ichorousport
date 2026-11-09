// gml_Script_anon_45654_DefineDebuffs_OFFERINGSINIT @ 0x1404072d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_45654_DefineDebuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffd60;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  
  local_268 = 0;
  local_200 = "gml_Script_anon@45025@DefineDebuffs@OFFERINGSINIT";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x749;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_198,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_23c = 0xffffff;
  local_248 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5d78);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_26c = 0;
  local_278 = 0;
  local_22c = 0;
  local_238 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x74b;
  uStack_28c = 0xf;
  local_298 = 0x1000000000000ee;
  in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_248,uVar11,in_stack_fffffffffffffd60);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140e87440(&local_248,DAT_1419f5878,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                in_stack_fffffffffffffd60 & 0xffffffffffffff00);
  switch(local_23c) {
  default:
switchD_14040750f_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_248;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14040750f_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_248);
    uVar6 = FUN_140e87250(uVar3);
  }
  uVar11 = 0;
  puVar8 = &local_98;
  uVar6 = FUN_140e63610(uVar6,param_2,&local_278,0,puVar8,0);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_1f8 = 0x74d;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 5;
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 5;
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e4 = 5;
    uStack_28c = 0xf;
    local_298 = 0x1000000000000ee;
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar10 = (ulonglong)puVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_141a1edd0,0x80000000,&local_a8,uVar10,uVar11);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5f58,0x80000000,&local_b8,uVar10,uVar11);
    if (param_4 < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = *(undefined8 **)(param_5 + 8);
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_228,uVar10,uVar11 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar10 >> 0x20);
    local_288 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_280 = uRam0000000141dc6558;
    uStack_27c = uRam0000000141dc655c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
    local_78 = &local_178;
    local_288 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_280 = uRam0000000141dc6558;
    uStack_27c = uRam0000000141dc655c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_288);
    local_70 = local_168;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_298,gml_Script_anon_45558_DefineDebuffs_OFFERINGSINIT,0);
    if (&local_298 != puVar5) {
      local_288 = local_298;
      uStack_280 = uStack_290;
      uStack_27c = uStack_28c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_288);
    }
    FUN_140e60910(1);
    if (puVar5 != &local_158) {
      local_288 = *puVar5;
      uStack_280 = *(undefined4 *)(puVar5 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_288);
    }
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_68 = &local_158;
    uVar4 = CONCAT44(uVar3,DAT_141a0a0d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1e0,1,uVar4,&local_78);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_250 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
      local_258 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_258,puVar5);
    }
    local_268 = 1;
    uStack_28c = 0;
    local_298 = 0x3ff4000000000000;
    FUN_140042560(&local_258,&local_298);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_288 = local_258;
    uStack_280 = uStack_250;
    uStack_27c = uStack_24c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_288);
    local_268 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_60 = local_148;
    uVar4 = CONCAT44(uVar3,DAT_141a0a0d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f0,1,uVar4,&local_70);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_250 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
      local_258 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_258,puVar5);
    }
    local_268 = 2;
    uStack_28c = 0;
    local_298 = 0x3ff4000000000000;
    FUN_140042560(&local_258,&local_298);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_288 = local_258;
    uStack_280 = uStack_250;
    uStack_27c = uStack_24c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_288);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_58 = local_138;
    local_288 = local_b8;
    uStack_280 = uStack_b0;
    uStack_27c = uStack_ac;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_288);
    local_50 = local_128;
    local_288 = local_228;
    uStack_280 = uStack_220;
    uStack_27c = uStack_21c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_288);
    local_48 = local_118;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_1d0,3,CONCAT44(uVar3,DAT_1419fd6d8),&local_68);
    if (puVar5 != &local_108) {
      local_288 = *puVar5;
      uStack_280 = *(undefined4 *)(puVar5 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_288);
    }
    local_40 = &local_108;
    uStack_28c = 0xf;
    local_298 = 0x1000000000000ee;
    uVar4 = FUN_140069500(&local_298);
    FUN_140e63610(uVar4,param_2,&local_238,3,&local_a8,&local_50);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_1f8 = 0x74e;
    goto LAB_140408361;
  }
  local_1f8 = 0x751;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  uVar10 = (ulonglong)puVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_228,uVar10,uVar11 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_288 = local_228;
  uStack_280 = uStack_220;
  uStack_27c = uStack_21c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_288);
  local_88 = local_198;
  ppuVar12 = &local_88;
  uVar11 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_278,1,uVar11,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1f8 = 0x751;
    goto LAB_140408361;
  }
  local_1f8 = 0x752;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = *(undefined8 **)(param_5 + 8);
  }
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_228,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar4 = param_1;
  FUN_140e87170(&local_228,DAT_141a1f580,0x80000000,&local_c8,param_1,param_2);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_288 = local_c8;
  uStack_280 = uStack_c0;
  uStack_27c = uStack_bc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_288);
  local_88 = local_198;
  uStack_27c = 0xf;
  local_288 = 0x10000000000009d;
  local_298 = 0x10000000000009d;
  uStack_290 = uStack_280;
  uStack_28c = 0xf;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_298);
  local_80 = local_188;
  ppuVar12 = &local_88;
  uVar11 = CONCAT44(uVar3,DAT_1419f60e8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_278,2,uVar11,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1f8 = 0x752;
    goto LAB_140408361;
  }
  local_1f8 = 0x753;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = *(undefined8 **)(param_5 + 8);
  }
  uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_228,uVar11,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a572d0,0x80000000,&local_218,uVar11,uVar10);
  FUN_140e87440(&local_218,DAT_1419f5878,0x80000000,&local_d8,uVar11 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  switch(local_20c) {
  default:
switchD_140407e78_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_218;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_218 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140407e78_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_218);
    uVar4 = FUN_140e87250(uVar3);
  }
  uVar11 = 0;
  puVar8 = &local_d8;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_278,0,puVar8,0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1f8 = 0x753;
    goto LAB_140408361;
  }
  local_1f8 = 0x755;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1a4 = 0;
  local_1b0 = 0;
  if (1 < param_4) {
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)puVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_228,uVar10,uVar11);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a572d0,0x80000000,&local_218,uVar10,uVar11);
  FUN_140e87930(&local_218,DAT_141a1dce0,0x80000000,&local_1b0);
  local_1f8 = 0x756;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uStack_28c = 0xf;
  local_298 = 0x1000000000000ee;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_248,uVar10,uVar11);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_141a05098,0x80000000,&local_e8,uVar10,uVar11);
  uStack_28c = 0xf;
  local_298 = 0x1000000000000ee;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_248,uVar10,uVar11);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419f5fa8,0x80000000,&local_1c0,uVar10,uVar11);
  uStack_28c = 0xf;
  local_298 = 0x1000000000000ee;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a572d0,0x80000000,&local_248,uVar10,uVar11);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140e87440(&local_248,DAT_141a1dce0,0x80000000,&local_f8,uVar10 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uStack_24c = local_1b4;
  uStack_250 = local_1b8;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
    local_258 = local_1c0;
  }
  else {
    FUN_1400419b0(&local_258,&local_1c0);
  }
  local_268 = 4;
  uStack_27c = 7;
  local_288 = CONCAT44(local_288._4_4_,1);
  FUN_1400460e0(&local_258,&local_288);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  uStack_28c = uStack_24c;
  uStack_290 = uStack_250;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_298 = local_258;
  }
  else {
    FUN_1400419b0(&local_298,&local_258);
  }
  local_268 = 0xc;
  FUN_1400462a0(&local_298,&local_f8);
  local_288 = local_298;
  uStack_280 = uStack_290;
  uStack_27c = uStack_28c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_288);
  local_268 = 4;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_88 = local_198;
  local_288 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_280 = uRam0000000141dc6558;
  uStack_27c = uRam0000000141dc655c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_288);
  local_80 = local_188;
  puVar5 = (undefined8 *)FUN_140e79090(&local_238,2,&local_88);
  if (puVar5 != &local_178) {
    local_288 = *puVar5;
    uStack_280 = *(undefined4 *)(puVar5 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_288);
  }
  local_78 = &local_178;
  uVar4 = 0;
  switch(local_23c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140408304_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_248);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_248;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140408304_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_278,1,&local_e8,&local_78);
LAB_140408361:
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

