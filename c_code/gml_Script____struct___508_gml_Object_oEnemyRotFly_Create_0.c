// gml_Script____struct___508_gml_Object_oEnemyRotFly_Create_0 @ 0x140a28970

undefined8 *
gml_Script____struct___508_gml_Object_oEnemyRotFly_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_80 = "gml_Script_anon@3235@___struct___508@gml_Object_oEnemyRotFly_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_54 = 0xffffff;
  local_60 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xbb;
  uStack_ec = 0xf;
  local_f8 = (longlong *)0x100000100000294;
  local_48 = 0x294;
  uStack_44 = 0x1000001;
  uStack_3c = 0xf;
  FUN_140041b80(&local_60,&local_48);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_60);
  local_78 = 0xbc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  local_78 = 0xbd;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e87930(uVar1,DAT_141a1eed0,0x80000000,&local_b8);
  local_78 = 0xbe;
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_c8,0,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_70,0,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = local_bc;
  uStack_f0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_f8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_f8,&local_c8);
  }
  FUN_1400460e0(&local_f8,&local_70);
  local_48 = (undefined4)local_f8;
  uStack_44 = local_f8._4_4_;
  uStack_40 = uStack_f0;
  uStack_3c = uStack_ec;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_48);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a0a848,0x80000000,&local_98);
  local_78 = 0xbf;
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = uVar1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a57e00,0x80000000,&local_d8);
  local_78 = 0xc0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_1419f1058,0x80000000,&local_e8);
  local_78 = 0xc2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a096d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

