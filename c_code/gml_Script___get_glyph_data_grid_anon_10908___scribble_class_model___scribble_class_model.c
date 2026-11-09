// gml_Script___get_glyph_data_grid_anon_10908___scribble_class_model___scribble_class_model @ 0x140150340

uint * gml_Script___get_glyph_data_grid_anon_10908___scribble_class_model___scribble_class_model
                 (longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98 [3];
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  uint local_60 [3];
  byte local_54;
  uint *local_40;
  uint *local_38;
  ulonglong local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_70 = "gml_Script___new_page@anon@11476@__scribble_class_model@__scribble_class_model";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x135;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98[0] = 0;
  local_98[1] = 0;
  local_9c = 0;
  local_a8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_68 = 0x137;
  local_88 = DAT_141a06a08 & 0xffffff;
  uStack_84 = (int)(DAT_141a06a08 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_84 == 0xf) {
    uStack_84 = 0x4000004;
  }
  else {
    uStack_84 = uStack_84 | 0x1000000;
  }
  uStack_1c = 0xf;
  local_28 = CONCAT44(uStack_84,DAT_141a06a08) & 0xffffffff00ffffff;
  uStack_80 = uStack_20;
  uStack_7c = 0xf;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_88);
  local_40 = local_60;
  uVar2 = CONCAT44(uVar3,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar2,&local_40);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != local_98) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_88);
  }
  local_68 = 0x138;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar1 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
  if (puVar1 != local_60) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_88);
  }
  local_40 = local_60;
  local_38 = local_98;
  FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar3,DAT_1419fe568),&local_40);
  local_68 = 0x139;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a06b48);
  FUN_140046040(uVar2);
  local_68 = 0x13b;
  if (local_98 != param_3) {
    local_88 = local_98[0];
    uStack_84 = local_98[1];
    uStack_80 = local_98[2];
    uStack_7c = uStack_8c;
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

