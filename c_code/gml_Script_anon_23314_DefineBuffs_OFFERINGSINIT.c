// gml_Script_anon_23314_DefineBuffs_OFFERINGSINIT @ 0x1403dff60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_23314_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_80 = "gml_Script_anon@22859@DefineBuffs@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x3c5;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_70 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5a68);
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x3c7;
  local_188 = _DAT_141dc6550;
  uStack_184 = uRam0000000141dc6554;
  uStack_180 = uRam0000000141dc6558;
  uStack_17c = uRam0000000141dc655c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_188);
  local_58 = &local_c8;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1403e00d4:
    local_188 = *(undefined4 *)puVar4;
    uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_180 = *(undefined4 *)(puVar4 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_b8) goto LAB_1403e00d4;
  }
  uVar6 = CONCAT44(uVar2,DAT_141a08838);
  local_50 = &local_b8;
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_50);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  uStack_17c = 7;
  local_188 = 2;
  FUN_1400460e0(&local_178,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  ppuVar9 = &local_58;
  uVar8 = CONCAT44(uVar2,DAT_141a0a0d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar8,ppuVar9);
  uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_128,puVar4);
  }
  FUN_140042560(&local_128,&local_178);
  local_188 = (undefined4)local_128;
  uStack_184 = local_128._4_4_;
  uStack_180 = uStack_120;
  uStack_17c = uStack_11c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_188);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_78 = 0x3c9;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_148,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_141a1edd0,0x80000000,&local_f8,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(local_70,DAT_1419f5bc8,0x80000000,&local_108,uVar8,uVar10);
  if (1 < param_4) {
    puVar7 = (undefined8 *)param_5[1];
  }
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_118,uVar8,uVar10 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar8 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_188,gml_Script_anon_23125_DefineBuffs_OFFERINGSINIT,0);
  if ((undefined8 *)&local_188 != puVar3) {
    local_178 = CONCAT44(uStack_184,local_188);
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_178);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_e8) {
    local_178 = *puVar3;
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_68 = &local_e8;
  local_60 = &local_138;
  local_58 = &local_138;
  local_188 = (undefined4)local_108;
  uStack_184 = local_108._4_4_;
  uStack_180 = uStack_100;
  uStack_17c = uStack_fc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_188);
  local_188 = (undefined4)local_118;
  uStack_184 = local_118._4_4_;
  uStack_180 = uStack_110;
  uStack_17c = uStack_10c;
  local_50 = &local_b8;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_188);
  local_48 = local_a8;
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_168,3,CONCAT44(uVar2,DAT_1419fd6d8),&local_68);
  if (puVar5 != local_98) {
    local_188 = *puVar5;
    uStack_184 = puVar5[1];
    uStack_180 = puVar5[2];
    uStack_17c = puVar5[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_188);
  }
  local_40 = local_98;
  uVar6 = 0;
  switch(local_13c) {
  case 6:
    uVar6 = local_148;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_148);
    uVar6 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar6,param_2,&local_158,3,&local_f8,&local_50);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
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
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

