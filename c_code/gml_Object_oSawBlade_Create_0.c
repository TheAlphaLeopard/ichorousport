// gml_Object_oSawBlade_Create_0 @ 0x140d5dfc0

void gml_Object_oSawBlade_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oSalesman_Draw_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0x3f847ae147ae147b;
  local_48 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(0x47ae147b,DAT_1419fd3b8);
  pdVar3 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  FUN_140e609c0(param_1);
  uStack_ac = *(uint *)((longlong)puVar2 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_b8,puVar2);
  }
  uStack_5c = 7;
  local_68._0_4_ = 0x41;
  FUN_1400460e0(&local_b8,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_9c = uStack_ac;
  local_a0 = uStack_b0;
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_a8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_b8);
  }
  FUN_140042560(&local_a8,&local_98);
  if ((local_9c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_a8;
  }
  else {
    uVar5 = FUN_140e4b060(&local_a8);
  }
  dVar1 = (double)thunk_FUN_1412aae80(uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar3);
  }
  *(undefined4 *)((longlong)pdVar3 + 0xc) = 0;
  *pdVar3 = dVar1 * 1.5;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  local_48 = 6;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0xbf80624dd2f1a9fc;
  local_48 = 7;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0x4000000000000000;
  local_48 = 8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
  FUN_140e609c0(param_1);
  local_9c = *(uint *)((longlong)puVar2 + 0xc);
  local_a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_a8,puVar2);
  }
  FUN_140042560(&local_a8,&local_98);
  if ((local_9c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_a8;
  }
  else {
    uVar5 = FUN_140e4b060(&local_a8);
  }
  local_b8 = thunk_FUN_1412ac390(uVar5);
  uStack_ac = 0;
  FUN_140042560(&local_b8,&local_88);
  if (&local_b8 != puVar4) {
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    local_68 = local_b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140e60910(1);
  local_48 = 10;
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  gml_Script_truestate_draw_history(param_1,param_2,&local_78,0,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

