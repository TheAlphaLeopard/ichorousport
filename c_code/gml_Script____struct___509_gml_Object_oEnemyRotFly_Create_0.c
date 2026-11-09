// gml_Script____struct___509_gml_Object_oEnemyRotFly_Create_0 @ 0x140a2c350

undefined8 *
gml_Script____struct___509_gml_Object_oEnemyRotFly_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_b8;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  local_60 = "gml_Script_anon@5385@___struct___509@gml_Object_oEnemyRotFly_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_44 = 0xffffff;
  local_50 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x121;
  uStack_ac = 0xf;
  local_b8 = 0x100000100000299;
  local_38 = 0x299;
  uStack_34 = 0x1000001;
  uStack_2c = 0xf;
  FUN_140041b80(&local_50,&local_38);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_50);
  local_58 = 0x122;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_78);
  local_58 = 0x123;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_58 = 0x125;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  FUN_140e87930(uVar1,DAT_141a0a848,0x80000000,&local_98);
  local_58 = 0x126;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a1f290,0x80000000,&local_a8);
  local_58 = 0x128;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  uStack_ac = 0;
  local_b8 = 0x4010000000000000;
  FUN_140046500(uVar1,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_58 = 0x129;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_ac = 0;
  local_b8 = 0x4010000000000000;
  FUN_140046500(uVar1,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

