// gml_Object_oBloodManagerForeground_CleanUp_0 @ 0x1406d70f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodManagerForeground_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *local_res18;
  undefined4 uVar3;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oBloodManagerForeground_Create_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_38 = 1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04448);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_38 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03728);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_38 = 4;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03a78);
  if (puVar2 != &DAT_141dd5db8) {
    local_58 = _DAT_141dd5db8;
    uStack_54 = uRam0000000141dd5dbc;
    uStack_50 = uRam0000000141dd5dc0;
    uStack_4c = DAT_141dd5dc4;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  local_38 = 6;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_58 = _DAT_141dd5dc8;
  uStack_54 = uRam0000000141dd5dcc;
  uStack_50 = uRam0000000141dd5dd0;
  uStack_4c = DAT_141dd5dd4;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_58);
  local_res18 = local_68;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar3,DAT_1419f74f8),&local_res18);
  uStack_7c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_80 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_88,puVar1);
  }
  uStack_4c = 7;
  local_58 = 1;
  FUN_1400460e0(&local_88,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = (undefined4)local_88;
  uStack_54 = local_88._4_4_;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e86fa0(param_1,DAT_141a02ee8,0x80000000,&local_78);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

