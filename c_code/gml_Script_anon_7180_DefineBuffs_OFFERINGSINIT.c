// gml_Script_anon_7180_DefineBuffs_OFFERINGSINIT @ 0x1403c6f60

undefined8 *
gml_Script_anon_7180_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Script_anon@6618@DefineBuffs@OFFERINGSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xf7;
  uStack_9c = 0xf;
  local_a8 = 0x100000000000106;
  FUN_140e87440(&local_a8,DAT_1419f5998,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_8c = 0;
  local_98 = 0x3fb999999999999a;
  FUN_140042560(&local_98,param_5);
  uStack_9c = local_8c;
  uStack_a0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_a8 = local_98;
  }
  else {
    FUN_1400419b0(&local_a8,&local_98);
  }
  FUN_140042560(&local_a8,&local_58);
  local_28 = (undefined4)local_a8;
  uStack_24 = local_a8._4_4_;
  uStack_20 = uStack_a0;
  uStack_1c = uStack_9c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_28);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_38 = 0xf8;
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  FUN_140e87440(&local_a8,DAT_1419f59c8,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_1400460e0(&local_68,&local_88);
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  FUN_140e87930(&local_a8,DAT_1419f59c8,0x80000000,&local_68);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_38 = 0xf9;
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  FUN_140e87440(&local_a8,DAT_141a0a7d8,0x80000000,&local_78,0,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_1400460e0(&local_78,&local_88);
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  FUN_140e87930(&local_a8,DAT_141a0a7d8,0x80000000,&local_78);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

