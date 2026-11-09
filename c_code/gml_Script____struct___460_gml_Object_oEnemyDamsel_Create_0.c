// gml_Script____struct___460_gml_Object_oEnemyDamsel_Create_0 @ 0x140982530

undefined8 *
gml_Script____struct___460_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *local_e8;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_70 = "gml_Script_anon@8583@___struct___460@gml_Object_oEnemyDamsel_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_54 = 0xffffff;
  local_60 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x15f;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x1000001000000d7;
  local_48 = 0xd7;
  uStack_44 = 0x1000001;
  uStack_3c = 0xf;
  FUN_140041b80(&local_60,&local_48);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_60);
  local_68 = 0x160;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e87930(uVar1,DAT_1419f0998,0x80000000,&local_b8);
  local_68 = 0x161;
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_88,0,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_48 = (undefined4)local_88;
  uStack_44 = local_88._4_4_;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_48);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_1419f0ac8,0x80000000,&local_98);
  local_68 = 0x162;
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_88,0,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_48 = (undefined4)local_88;
  uStack_44 = local_88._4_4_;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_48);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_1419f05d8,0x80000000,&local_a8);
  local_68 = 0x163;
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = uVar1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_1419f0568,0x80000000,&local_c8);
  local_68 = 0x164;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_1419f0888,0x80000000,&local_d8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

