// gml_Script____struct___447_gml_Object_oEnemyCageCharger_Create_0 @ 0x14094bad0

undefined8 *
gml_Script____struct___447_gml_Object_oEnemyCageCharger_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2347@___struct___447@gml_Object_oEnemyCageCharger_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x75;
  uStack_5c = 0xf;
  local_68 = 0x100000100000093;
  local_58 = 0x93;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_60;
  uStack_4c = 0xf;
  FUN_140041b80(&local_78,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_38 = 0x76;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  FUN_140e87930(uVar1,DAT_141a0a848,0x80000000,&local_88);
  local_38 = 0x77;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x79;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57480);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0x4056800000000000;
  FUN_140e87930(uVar1,DAT_141a1eed0,0x80000000,&local_98);
  local_38 = 0x7b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f01a8);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar4) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  local_38 = 0x7c;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f01c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

