// gml_Object_oCam_Other_4 @ 0x140887bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCam_Other_4(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40 = "gml_Object_oCam_Step_1";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_38 = 4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fefe8);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fefe8);
  if (puVar1 != local_78) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_98);
  }
  local_30 = local_78;
  local_98 = _DAT_1419e93a0;
  uStack_94 = uRam00000001419e93a4;
  uStack_90 = uRam00000001419e93a8;
  uStack_8c = uRam00000001419e93ac;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  local_28 = local_68;
  local_98 = _DAT_1419e9390;
  uStack_94 = uRam00000001419e9394;
  uStack_90 = uRam00000001419e9398;
  uStack_8c = uRam00000001419e939c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_98);
  local_20 = local_58;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_88,3,CONCAT44(uVar3,DAT_141a00c58),&local_30);
  if (puVar1 != puVar2) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

