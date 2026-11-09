// gml_Script_anon_6789_DefineBuffs_OFFERINGSINIT @ 0x1403c6bc0

undefined8 *
gml_Script_anon_6789_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
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
  char *local_50;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = "gml_Script_anon@6327@DefineBuffs@OFFERINGSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xee;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  uStack_ac = 0;
  local_b8 = 0x3fb999999999999a;
  FUN_140042560(&local_b8,puVar2);
  local_38 = (undefined4)local_b8;
  uStack_34 = local_b8._4_4_;
  uStack_30 = uStack_b0;
  uStack_2c = uStack_ac;
  FUN_140041b80(&local_98,&local_38);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_48 = 0xef;
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar3,DAT_1419f6258,0x80000000,&local_68,0,0);
  uStack_ac = local_8c;
  uStack_b0 = local_90;
  bVar1 = (byte)local_8c & 0x1f;
  if ((1 << bVar1 & 0x46U) == 0) {
    local_b8 = local_98;
  }
  else {
    FUN_1400419b0(&local_b8,&local_98);
  }
  FUN_140042560(&local_b8,&local_68);
  local_38 = (undefined4)local_b8;
  uStack_34 = local_b8._4_4_;
  uStack_30 = uStack_b0;
  uStack_2c = uStack_ac;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_38);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_48 = 0xf0;
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  FUN_140e87440(&local_b8,DAT_1419f59c8,0x80000000,&local_78,0,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_1400460e0(&local_78,&local_a8);
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  FUN_140e87930(&local_b8,DAT_1419f59c8,0x80000000,&local_78);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_48 = 0xf1;
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  FUN_140e87440(&local_b8,DAT_141a0a7d8,0x80000000,&local_88,0,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_1400460e0(&local_88,&local_a8);
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  FUN_140e87930(&local_b8,DAT_141a0a7d8,0x80000000,&local_88);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << bVar1 & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

