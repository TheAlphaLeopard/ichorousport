// gml_Object_oFly_Draw_0 @ 0x140adf150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFly_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 local_b0;
  uint local_ac;
  double local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oFly_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_48 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 3;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2b28);
  local_c8 = _DAT_141dc7080;
  uStack_c4 = uRam0000000141dc7084;
  uStack_c0 = uRam0000000141dc7088;
  uStack_bc = uRam0000000141dc708c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_68 = local_88;
  uVar6 = CONCAT44(uVar7,DAT_141a0a0d8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar6,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = FUN_140e4a8b0(uVar2);
  uVar2 = FUN_140e78f00(uVar2);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  local_48 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2d88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fc999999999999a;
  local_48 = 9;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  local_c8 = _DAT_141dc7080;
  uStack_c4 = uRam0000000141dc7084;
  uStack_c0 = uRam0000000141dc7088;
  uStack_bc = uRam0000000141dc708c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_68 = local_88;
  local_c8 = _DAT_141dc7080;
  uStack_c4 = uRam0000000141dc7084;
  uStack_c0 = uRam0000000141dc7088;
  uStack_bc = uRam0000000141dc708c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_c8);
  local_60 = local_78;
  uVar2 = CONCAT44(uVar7,DAT_141a0a0d8);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_98,1,uVar2,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_9c = *(uint *)((longlong)pdVar3 + 0xc);
  local_a0 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_a8,pdVar3);
  }
  uStack_bc = 7;
  local_c8 = 8;
  FUN_140042560(&local_a8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uVar2 = CONCAT44(uVar7,DAT_141a0a0d8);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar2,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_ac = *(uint *)((longlong)pdVar3 + 0xc);
  local_b0 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_b8,pdVar3);
  }
  uStack_bc = 7;
  local_c8 = 5;
  FUN_140042560(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  dVar4 = local_a8;
  if ((local_9c & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_a8);
  }
  dVar5 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_b8);
  }
  uVar2 = FUN_140e78f40((longlong)dVar5,(longlong)dVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_48 = 10;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2d78);
  local_c8 = _DAT_141dc7080;
  uStack_c4 = uRam0000000141dc7084;
  uStack_c0 = uRam0000000141dc7088;
  uStack_bc = uRam0000000141dc708c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_68 = local_88;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar7,DAT_141a0a0d8),&local_68);
  uVar2 = FUN_140e4a8b0(uVar2);
  uVar2 = FUN_140e78f40(0x19,uVar2);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

