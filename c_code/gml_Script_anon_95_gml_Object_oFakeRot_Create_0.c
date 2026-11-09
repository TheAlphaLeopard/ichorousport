// gml_Script_anon_95_gml_Object_oFakeRot_Create_0 @ 0x140acd6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_95_gml_Object_oFakeRot_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  
  local_40 = "gml_Object_oFadeParticle_Step_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_38 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0fbc8,0x80000000,&local_98,(ulonglong)pcVar2 & 0xffffffffffffff00,
                0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (longlong *)local_98;
  uStack_b0 = uStack_90;
  uStack_ac = uStack_8c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_30 = local_78;
  local_b8 = (longlong *)CONCAT44(uRam0000000141dc7034,_DAT_141dc7030);
  uStack_b0 = uRam0000000141dc7038;
  uStack_ac = uRam0000000141dc703c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_28 = local_68;
  if (puVar1 != &local_58) {
    local_b8 = (longlong *)*puVar1;
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_b8);
  }
  local_20 = &local_58;
  puVar1 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_88,3,&local_30);
  if (puVar1 != &local_a8) {
    local_b8 = (longlong *)*puVar1;
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  FUN_140e86fa0(param_1,DAT_141a0fbc8,0x80000000,&local_a8);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

