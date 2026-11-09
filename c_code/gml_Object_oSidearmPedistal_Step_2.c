// gml_Object_oSidearmPedistal_Step_2 @ 0x140d838f0

void gml_Object_oSidearmPedistal_Step_2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oSidearmPedistal_Alarm_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_4c = 0xffffff;
  local_58 = 0;
  local_18 = 2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uStack_3c = 0;
  local_48 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 == 0) {
    local_18 = 2;
  }
  else {
    local_18 = 4;
    local_48 = (undefined1 *)0x3ff0000000000000;
    uStack_3c = 0xd;
    local_38 = 0;
    uStack_34 = 0x3ff00000;
    uStack_30 = uStack_40;
    uStack_2c = 0xd;
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_38);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
    FUN_140e87930(uVar2,DAT_141a0ab68,0x80000000,&local_58);
    local_18 = 6;
    FUN_140e98b30(param_1,param_2);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

