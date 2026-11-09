// gml_Script____struct___149_anon_18786_anon_18385_DefineBuffs_OFFERINGSINIT @ 0x1403d7610

undefined8 *
gml_Script____struct___149_anon_18786_anon_18385_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined8 **ppuVar5;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined8 local_50;
  byte local_44;
  undefined8 *local_38 [2];
  
  local_80 = "gml_Script_anon@18082@DefineBuffs@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x2ec;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5cf8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_64 = 0;
  local_70 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x2ee;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script_anon_18250_DefineBuffs_OFFERINGSINIT,0);
  if (&local_c8 != puVar1) {
    local_d8 = local_c8;
    uStack_d0 = uStack_c0;
    uStack_cc = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_50) {
    local_d8 = *puVar1;
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_38[0] = &local_50;
  ppuVar5 = local_38;
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_70,1,uVar3,ppuVar5);
  if (puVar1 != &local_b8) {
    local_d8 = *puVar1;
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  FUN_140e87930(uVar2,DAT_1419f5f98,0x80000000,&local_b8);
  local_78 = 0x2f0;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_c0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_cc = 0;
  local_d8 = 0x3f8eb851eb851eb8;
  FUN_140042560(&local_c8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_d8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = 0x2f1;
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ee;
  FUN_140e87440(&local_d8,DAT_1419f5e08,0x80000000,&local_98,uVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_1400460e0(&local_c8,&local_a8);
  FUN_140042560(&local_98,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ee;
  FUN_140e87930(&local_d8,DAT_1419f5e08,0x80000000,&local_98);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

