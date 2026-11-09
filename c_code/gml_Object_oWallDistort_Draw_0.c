// gml_Object_oWallDistort_Draw_0 @ 0x140e2bb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oWallDistort_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  byte local_3c;
  undefined8 local_38;
  byte local_2c;
  undefined1 local_28 [12];
  byte local_1c;
  
  local_58 = "gml_Script_anon@269@gml_Object_oWallDistort_Create_0";
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  local_50 = 8;
  _eh_vector_constructor_iterator_(&local_48,0x10,3,FUN_1400424d0,FUN_140041b30);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_50 = 9;
  uStack_7c = 0xf;
  local_88 = 0x10000080000001a;
  dVar1 = (double)FUN_140e4b060(&local_88);
  FUN_140ec9e10((int)dVar1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_50 = 10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5338);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5498);
  if (puVar2 != &local_48) {
    local_88 = *puVar2;
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_88);
  }
  local_78 = &local_48;
  if (puVar3 != &local_38) {
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_38);
    }
    FUN_140041b80(&local_38,&local_88);
  }
  local_70 = &local_38;
  FUN_140ec9ea0(2,&local_78);
  local_50 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4f58);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4f98);
  if (puVar2 != &local_48) {
    local_88 = *puVar2;
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_88);
  }
  local_78 = &local_48;
  if (puVar3 != &local_38) {
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_38);
    }
    FUN_140041b80(&local_38,&local_88);
  }
  local_70 = &local_38;
  FUN_140ec9ea0(2,&local_78);
  local_50 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5328);
  if (puVar2 != &local_48) {
    local_88 = *puVar2;
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_88);
  }
  local_78 = &local_48;
  local_88 = CONCAT44(uRam0000000141dc79f4,_DAT_141dc79f0);
  uStack_80 = uRam0000000141dc79f8;
  uStack_7c = uRam0000000141dc79fc;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  FUN_140041b80(&local_38,&local_88);
  local_70 = &local_38;
  local_88 = CONCAT44(uRam0000000141dc79f4,_DAT_141dc79f0);
  uStack_80 = uRam0000000141dc79f8;
  uStack_7c = uRam0000000141dc79fc;
  if ((1 << (local_1c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_28);
  }
  FUN_140041b80(local_28,&local_88);
  local_68 = local_28;
  FUN_140ec9ea0(3,&local_78);
  _eh_vector_destructor_iterator_(&local_48,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return param_3;
}

