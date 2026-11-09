// gml_Object_oFogWisp_Create_0 @ 0x140ae38f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFogWisp_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *local_res18 [2];
  undefined4 uVar5;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oFlyZone_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_48 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1d8a0);
  local_78 = _DAT_141dc70c0;
  uStack_74 = uRam0000000141dc70c4;
  uStack_70 = uRam0000000141dc70c8;
  uStack_6c = uRam0000000141dc70cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_78);
  local_res18[0] = local_88;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar5,DAT_141a0a0d8),local_res18);
  uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_90 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_98,puVar2);
  }
  uStack_6c = 7;
  local_78 = 3;
  FUN_140042560(&local_98,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_98 != puVar1) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_48 = 3;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1d8a0);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  uVar3 = FUN_140e4a8b0(uVar3);
  uVar3 = FUN_140e78f00(uVar3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar3;
  local_48 = 5;
  puVar4 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efb88);
  if (puVar4 != &DAT_141dd9258) {
    local_78 = _DAT_141dd9258;
    uStack_74 = uRam0000000141dd925c;
    uStack_70 = uRam0000000141dd9260;
    uStack_6c = DAT_141dd9264;
    if ((1 << ((byte)*(undefined4 *)(puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

