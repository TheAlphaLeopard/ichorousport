// gml_Object_oBgPest_Step_0 @ 0x1406881a0

void gml_Object_oBgPest_Step_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_90 = "gml_Object_oBgPatron_Step_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_88 = 3;
  local_50 = (undefined4)DAT_1419df7b0;
  uStack_4c = DAT_1419df7b0._4_4_;
  uStack_48 = DAT_1419df7b8;
  uStack_44 = DAT_1419df7bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_50);
  local_40 = local_70;
  local_50 = (undefined4)DAT_1419df7b0;
  uStack_4c = DAT_1419df7b0._4_4_;
  uStack_48 = DAT_1419df7b8;
  uStack_44 = DAT_1419df7bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_50);
  local_38 = local_60;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_80,2,&local_40);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_88 = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
    local_88 = 6;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    local_b8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

